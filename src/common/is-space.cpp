bool is_space(const char x)
{
 return eq(x,' ');
}

bool is_space(const str& x)
{
 if(is_empty(x))
  return false;

 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  
  if(!is_space(v))
   return false;
 }
 
 return true;
}
