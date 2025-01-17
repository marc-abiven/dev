bool is_digit(const char x)
{
 return between(x,'0','9');
}

bool is_digit(const str& x)
{
 if(is_empty(x))
  return false;
  
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  
  if(!is_digit(v))
   return false;
 }
 
 return true;
}
