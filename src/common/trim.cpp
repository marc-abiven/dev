str trim(const str& x)
{
 const str s=trim_r(x);
 
 return trim_l(s);
}

