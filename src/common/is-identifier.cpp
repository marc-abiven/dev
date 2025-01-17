bool is_identifier(const str& x)
{
 if(is_empty(x))
  return false;
  
 const char c=front(x);
 
 if(!is_alpha(c))
  return false;
  
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  
  if(!is_alnum(v))
   return false;
 }
 
 return true;
}
