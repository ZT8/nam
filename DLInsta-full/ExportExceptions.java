// @category ReverseEngineering
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.util.exporter.GzfExporter;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.util.UndefinedFunction;
import java.nio.file.*;
import java.io.*;
import java.util.*;

public class ExportExceptions extends GhidraScript {
 public void run() throws Exception {
  String[] args=getScriptArgs();Path out=Paths.get(args[0]);int limit=args.length>1?Integer.parseInt(args[1]):Integer.MAX_VALUE;
  Files.createDirectories(out.resolve("exception-fragments"));
  TreeMap<Long,long[]> gaps=new TreeMap<>();for(String line:Files.readAllLines(out.resolve("uncovered-text-ranges.tsv"))){if(line.startsWith("start"))continue;String[] t=line.split("\t");long a=Long.parseLong(t[0],16),b=Long.parseLong(t[1],16);gaps.put(a,new long[]{a,b});}
  TreeSet<Long> entries=new TreeSet<>();for(String line:Files.readAllLines(out.resolve("exception-landing-pads.txt")))entries.add(Long.decode(line));entries.addAll(gaps.keySet());
  TreeSet<Long> owners=new TreeSet<>();for(String line:Files.readAllLines(out.resolve("function-starts.txt")))owners.add(Long.decode(line));
  var symbols=currentProgram.getSymbolTable().getAllSymbols(true);int noreturn=0;
  while(symbols.hasNext()){var symbol=symbols.next();String name=symbol.getName();
   if(name.matches("_*Unwind_Resume")||name.matches("_*objc_exception_(throw|rethrow)")||name.matches("_*cxa_throw")||name.matches("_*stack_chk_fail")){
    Function f=getFunctionAt(symbol.getAddress());if(f!=null){f.setNoReturn(true);noreturn++;}
   }
  }
  println("Marked known exception terminators non-returning: "+noreturn);
  if(limit==Integer.MAX_VALUE){try{currentProgram.getDomainFile().packFile(out.resolve("DLInsta-analyzed.gzf").toFile(),monitor);println("Saved analyzed program snapshot");}catch(Exception e){println("Optional program snapshot: "+e);}}
  DecompInterface d=new DecompInterface();DecompileOptions opts=new DecompileOptions();opts.setEliminateUnreachable(false);d.setOptions(opts);d.openProgram(currentProgram);
  int ok=0,fail=0,reused=0;AddressSet covered=new AddressSet();TreeMap<Long,Object[]> blocks=new TreeMap<>();String suffix=limit<Integer.MAX_VALUE?"-sample":"";
  try(PrintWriter index=new PrintWriter(Files.newBufferedWriter(out.resolve("exception-index"+suffix+".tsv")));PrintWriter all=new PrintWriter(Files.newBufferedWriter(out.resolve("all-exception-fragments"+suffix+".c")))){
   index.println("entry\towner_function\tgap_start\tgap_end\tstatus\tfile\tdiagnostic");
   all.println("/* Exception/cleanup and other orphan entries decompiled independently. These are FRAGMENTS, not original standalone functions. Register/stack context at entry is unknown. */");
   for(Long entry:entries){
    if(ok+fail+reused>=limit||monitor.isCancelled())break;
    Map.Entry<Long,long[]> ge=gaps.floorEntry(entry);if(ge==null||entry>ge.getValue()[1])continue;long[] gap=ge.getValue();Address a=toAddr(entry);disassemble(a);
    UndefinedFunction fn=new UndefinedFunction(currentProgram,a);fn.setBody(new AddressSet(toAddr(gap[0]),toAddr(gap[1])));
    Long owner=owners.floor(entry);String file="exception-fragments/owner_"+Long.toHexString(owner)+".c";
    var previous=blocks.floorEntry(entry);
    if(previous!=null&&entry<=(Long)previous.getValue()[0]){
     reused++;index.println(Long.toHexString(entry)+"\t"+Long.toHexString(owner)+"\t"+Long.toHexString(gap[0])+"\t"+Long.toHexString(gap[1])+"\tcovered_by_fragment\t"+previous.getValue()[1]+"\tshared machine-code block; see fragment at "+previous.getValue()[2]);index.flush();continue;
    }
    DecompileResults r=d.decompileFunction(fn,30,monitor);String status,code,diag=r.getErrorMessage();
    if(r.decompileCompleted()&&r.getDecompiledFunction()!=null){code=r.getDecompiledFunction().getC();status="decompiled";ok++;
     if(r.getHighFunction()!=null)for(var block:r.getHighFunction().getBasicBlocks()){
      Address bs=block.getStart(),be=block.getStop();if(be!=null){Instruction last=getInstructionAt(be);if(last!=null)be=last.getMaxAddress();}if(bs!=null&&be!=null&&bs.isMemoryAddress()&&bs.compareTo(be)<=0){covered.add(bs,be);blocks.put(bs.getOffset(),new Object[]{be.getOffset(),file,Long.toHexString(entry)});}
     }}else{code="/* DECOMPILATION FAILED */\n";status="failed";fail++;}
    String prefix="\n/* FRAGMENT entry=0x"+Long.toHexString(entry)+" owner=0x"+Long.toHexString(owner)+"; not a source function; entry state unresolved */\n";
    Files.writeString(out.resolve(file),prefix+code,StandardOpenOption.CREATE,StandardOpenOption.APPEND);all.println(prefix+code);all.flush();
    index.println(Long.toHexString(entry)+"\t"+Long.toHexString(owner)+"\t"+Long.toHexString(gap[0])+"\t"+Long.toHexString(gap[1])+"\t"+status+"\t"+file+"\t"+diag.replace('\n',' ').replace('\t',' '));index.flush();
    if((ok+fail)%100==0)println("EXCEPTION_PROGRESS ok="+ok+" reused="+reused+" failed="+fail);
   }
  }
  AddressSet allGaps=new AddressSet();for(long[] gap:gaps.values())allGaps.add(toAddr(gap[0]),toAddr(gap[1]));AddressSet remaining=allGaps.subtract(covered);
  try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(out.resolve("supplemental-uncovered-ranges.tsv")))){w.println("start\tend\tbytes");for(AddressRange range:remaining.getAddressRanges())w.println(range.getMinAddress()+"\t"+range.getMaxAddress()+"\t"+range.getLength());}
  d.dispose();Files.writeString(out.resolve("exception-summary"+suffix+".txt"),"decompiled="+ok+"\nfailed="+fail+"\ncovered_by_fragment="+reused+"\nrequested_entries="+entries.size()+"\nuncovered_bytes_in_fragment_basic_blocks="+allGaps.intersect(covered).getNumAddresses()+"\nremaining_bytes_outside_exported_basic_blocks="+remaining.getNumAddresses()+"\n");println("Exception fragments ok="+ok+" failed="+fail);
 }
}
