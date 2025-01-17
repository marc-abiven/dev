int get_indent(const str& x)
{
 const str s=trim_l(x);
 
 return sub(x.len,s.len);
}
 
