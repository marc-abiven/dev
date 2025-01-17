bool is_var_integral(const var& x)
{
 if(is_bool(x))
  return true;

 if(is_char(x))
  return true;

 if(is_int(x))
  return true;

 if(is_double(x))
  return true;
  
 return false;
}
