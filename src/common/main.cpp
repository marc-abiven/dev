int main(const int x,const char** y)
{
 fn void on_main(const arr_str& x)
 {
  const int n1=sizeof(bool);
  const int n2=max(n1,sizeof(char));
  const int n3=max(n2,sizeof(int));
  const int n4=max(n3,sizeof(double));
  const int n5=max(n4,sizeof(arr));
  const int n6=max(n5,sizeof(obj));
  const var c;
  const int n7=sizeof(c.b);
  
  if(neq(n6,n7))
  { 
   echo("var");
   space();
   print(n6);

   echo("payload");
   space();
   print(n7);
   
   return;
  }
   
  init(x);
 }
 
 try
 {
  const char* ptr=y[0];
  const str s1=to_str(ptr);
  const str s2=path_real(s1);
  
  assign(process,s2);
  
  arr_str a;
  
  for(int i=1;lt(i,x);i++)
  {
   const char* ptr=y[i];
   const str s=to_str(ptr);
   
   push(a,s);
  }

  on_main(a);

  const double n=time_now();
  const str s3=to_str(n);
  const str s4=concat(s3,"s");
  
  echo("profile");
  space();
  print(s4);
 }
 catch(...)
 {
  print("catch!");
 }
 
 return 0;
}
