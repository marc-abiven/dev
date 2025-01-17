str strip_l(const str& x,const str& y)
{
 if(!match_l(x,y))
  return x;
  
 const int n=sub(x.len,y.len);
  
 return slice_r(x,n);
}
