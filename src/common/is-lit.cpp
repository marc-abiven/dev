bool is_lit(const str& x)
{
 if(is_empty(x))
  return false;

 str s;
 
 return parse_lit(s,x);
}
