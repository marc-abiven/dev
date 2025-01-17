str path_concat(const str& x,const str& y)
{
 const str s1=strip_r(x,"/");
 const str s2=strip_l(y,"/");
 
 return concat(s1,"/",s2);
}
