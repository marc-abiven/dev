bool is_numeric(const str& x)
{
 if(is_empty(x))
  return false;

 const str s=trim(x);

 if(neq(s,x))
  return false;
 
 int n=0;
 
 return parse_int(n,x);
}

