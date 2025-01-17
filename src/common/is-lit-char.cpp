bool is_lit_char(const str& x)
{
 if(is_empty(x))
  return false;

 str s;
 
 return parse_lit_char(s,x);
}
