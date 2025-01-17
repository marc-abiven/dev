tpl arr int find(const T& x,const U& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  
  if(eq(v,y))
   return i;
 }
 
 return -1;
}
