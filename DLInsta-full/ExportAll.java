// Export all analyzed functions as decompiler pseudocode, with explicit outcomes.
// @category ReverseEngineering
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.app.util.exporter.GzfExporter;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;
import java.util.*;

public class ExportAll extends GhidraScript {
 public void run() throws Exception {
  Path out=Paths.get(getScriptArgs()[0]);Files.createDirectories(out.resolve("functions"));
  Map<Long,String[]> labels=new HashMap<>();
  for(String l:Files.readAllLines(out.resolve("method-labels.tsv"))){String[] p=l.split("\t");labels.put(Long.parseUnsignedLong(p[0],16),p);}
  Address base=currentProgram.getImageBase();
  for(String l:Files.readAllLines(out.resolve("function-starts.txt"))){
   Address a=base.add(Long.decode(l));
   if(getFunctionAt(a)==null){disassemble(a);createFunction(a,null);}
  }
  for(Map.Entry<Long,String[]> e:labels.entrySet()){
   Address a=base.add(e.getKey());Function f=getFunctionAt(a);
   if(f==null){disassemble(a);f=createFunction(a,null);}
   if(f!=null){String[] p=e.getValue();String name=(p[2].equals("+")?"class_":"instance_")+p[1]+"__"+p[3];name=name.replaceAll("[^A-Za-z0-9_]","_");f.setName(name,SourceType.USER_DEFINED);}
  }
  DecompInterface decomp=new DecompInterface();DecompileOptions opts=new DecompileOptions();decomp.setOptions(opts);decomp.toggleCCode(true);decomp.toggleSyntaxTree(true);decomp.openProgram(currentProgram);
  int ok=0,fail=0,stubs=0;AddressSet covered=new AddressSet();
  try(PrintWriter all=new PrintWriter(Files.newBufferedWriter(out.resolve("all-functions.c"),StandardCharsets.UTF_8));PrintWriter idx=new PrintWriter(Files.newBufferedWriter(out.resolve("function-index.tsv"),StandardCharsets.UTF_8))){
   all.println("/* Ghidra 12.2 automatic decompiler output. Pseudocode, NOT original source; NOT buildable as a project. */");
   idx.println("address\tname\tstatus\tbody_bytes\tfile\tdiagnostic");
   FunctionIterator it=currentProgram.getFunctionManager().getFunctions(true);
   while(it.hasNext()&&!monitor.isCancelled()){
    Function f=it.next();if(f.isExternal())continue;
    Address a=f.getEntryPoint();String section=currentProgram.getMemory().getBlock(a).getName();
    if(section.contains("stub")||!currentProgram.getMemory().getBlock(a).isExecute()){stubs++;continue;}
    String stem=a.toString()+"_"+f.getName().replaceAll("[^A-Za-z0-9_]","_");if(stem.length()>200)stem=stem.substring(0,200);
    String file="functions/"+stem+".c";String diag="";String code;String status;
    try{DecompileResults r=decomp.decompileFunction(f,90,monitor);if(r.decompileCompleted()&&r.getDecompiledFunction()!=null){code=r.getDecompiledFunction().getC();status="decompiled";ok++;diag=r.getErrorMessage();}else{diag=r.getErrorMessage();code="/* DECOMPILATION FAILED: "+diag.replace("*/","* /")+" */\n";status="failed";fail++;}}
    catch(Exception e){diag=e.toString();code="/* DECOMPILATION EXCEPTION */\n";status="failed";fail++;}
    String prefix="/* Address: "+a+" | Name: "+f.getName()+" | Body bytes: "+f.getBody().getNumAddresses()+" */\n";
    Files.writeString(out.resolve(file),prefix+code,StandardCharsets.UTF_8);all.println(prefix+code);all.flush();
    idx.println(a+"\t"+f.getName()+"\t"+status+"\t"+f.getBody().getNumAddresses()+"\t"+file+"\t"+diag.replace('\n',' ').replace('\t',' '));idx.flush();covered.add(f.getBody());
    if((ok+fail)%100==0)println("EXPORT_PROGRESS ok="+ok+" failed="+fail);
   }
  }
  AddressSet text=new AddressSet();for(var block:currentProgram.getMemory().getBlocks())if(block.getName().equals("__text"))text.add(block.getStart(),block.getEnd());
  AddressSet missing=text.subtract(covered);
  try(PrintWriter w=new PrintWriter(Files.newBufferedWriter(out.resolve("uncovered-text-ranges.tsv")))){w.println("start\tend\tbytes");for(AddressRange range:missing.getAddressRanges())w.println(range.getMinAddress()+"\t"+range.getMaxAddress()+"\t"+range.getLength());}
  String summary="decompiled="+ok+"\nfailed="+fail+"\nskipped_stubs_or_non_executable="+stubs+"\ntext_bytes="+text.getNumAddresses()+"\ntext_bytes_in_function_bodies="+text.intersect(covered).getNumAddresses()+"\ntext_bytes_outside_function_bodies="+missing.getNumAddresses()+"\nimagebase="+base+"\n";
  Files.writeString(out.resolve("decompiler-summary.txt"),summary);println(summary);decomp.dispose();
  boolean saved=new GzfExporter().export(out.resolve("DLInsta-analyzed.gzf").toFile(), currentProgram, null, monitor);
  println("Packed analyzed Ghidra program exported="+saved);
 }
}
