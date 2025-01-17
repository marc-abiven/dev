tpl arr bool extract(T& x,const U& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  
  if(eq(v,y))
  {
   remove(x,i);
   
   return true;
  }
 }
 
 return false;
}
