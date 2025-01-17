bool is_fragment(const str& x)
{
 if(is_alnum(x))
  return true;

 if(is_space(x))
  return true;
  
 return false;
} 
