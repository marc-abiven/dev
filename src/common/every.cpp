tpl arr bool every(const T& x,bool (*const y)(const U& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  
  if(!y(v))
   return false;
 }
 
 return true;
}
