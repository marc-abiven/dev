bool is_comment(const str& x)
{
 if(!is_line(x))
  return false;

 return match_l(x,"//");
}
