void stop()
{
 try
 {
  const arr a=backtrace_get();
  const obj o=error_get();
  
  dump(a);
  dump(o);
 }
 catch(...)
 {
  print("catch!");
 }

 throw 42;
}
