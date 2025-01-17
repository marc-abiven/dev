str path_fix(const str& x)
{
 check(is_full(x));
 
 const str s=strip_r(x,"/");
 
 return concat(s,"/");
}
