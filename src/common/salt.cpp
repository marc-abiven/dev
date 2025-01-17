str salt(const str& x)
{
 return salt(x,"azertyuiop");
}
 
str salt(const str& x,const str& y)
{
 str r;
 str s1=x;
 str s2=y;
 
 while(is_full(s1))
 {
  if(is_empty(s2))
   assign(s2,y);
   
  const char c1=shift(s1);
  const char c2=shift(s2);
  const char c3=c1^c2;
  
  push(r,c3);  
 }
 
 return r;
}
