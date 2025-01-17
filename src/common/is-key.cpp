bool is_key(const str& x)
{
 if(is_digit(x))
  return false;
  
 return is_alnum(x);
}
