// @category ReverseEngineering
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.symbol.SourceType;
import java.nio.file.*;
import java.util.*;
public class SeedFunctions extends GhidraScript {
 public void run() throws Exception {
  Path out=Paths.get(getScriptArgs()[0]);Address base=currentProgram.getImageBase();
  List<Long> starts=new ArrayList<>();for(String l:Files.readAllLines(out.resolve("function-starts.txt")))starts.add(Long.decode(l));
  starts.sort(Collections.reverseOrder());int count=0;
  for(Long n:starts){Address a=base.add(n);if(getFunctionAt(a)==null){disassemble(a);Function f=createFunction(a,null);if(f!=null)count++;}}
  println("Seeded "+count+" functions from LC_FUNCTION_STARTS");
 }
}
