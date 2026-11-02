import ghidra.app.script.GhidraScript;
public class VerifySnapshot extends GhidraScript {
 public void run() throws Exception {
  var f=getFunctionAt(toAddr(0x9083c));
  if(f==null||!f.getName().contains("boolForKey"))throw new Exception("Expected recovered method missing");
  println("VERIFIED_SNAPSHOT functions="+currentProgram.getFunctionManager().getFunctionCount()+" example="+f.getName());
 }
}
