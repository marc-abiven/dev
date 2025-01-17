void init(const arr_str& x)
{
 arr_str a=x;

 str direction="salt";
 
 if(extract(a,"--salt"))
  assign(direction,"salt");
  
 if(extract(a,"--unsalt"))
  assign(direction,"unsalt");

 const str s1=shift(a); 

 if(is_full(a))
 {
  print("unhandled!");
  dump(a);
  
  return;
 }
 
 if(eq(direction,"salt"))
 { 
  const str s2=salt(s1);
  const str s3=base36_encode(s2);
 
  print(s3);
 }
 else if(eq(direction,"unsalt"))
 {
  const str s2=base36_decode(s1);
  const str s3=salt(s2);
 
  print(s3);
 }
 else
  stop();
}
