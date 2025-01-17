tpl composite void deinit(T& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print("catch!");
 }
}
