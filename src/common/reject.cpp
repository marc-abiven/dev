tpl arr T reject(const T& x,const U& y)
{
 T r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  
  if(neq(v,y))
   push(r,v);
 }
 
 return r;
}
