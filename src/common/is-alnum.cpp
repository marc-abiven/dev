bool is_alnum(const char x)
{
 if(is_alpha(x))
  return true;
 
 if(is_digit(x))
  return true;
  
 return false;
}

bool is_alnum(const str& x)
{
 if(is_empty(x))
  return false;

 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  
  if(!is_alnum(v))
   return false;
 }
 
 return true;
}
