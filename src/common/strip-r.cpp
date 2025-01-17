str strip_r(const str& x,const str& y)
{
 if(!match_r(x,y))
  return x;
  
 const int n=sub(x.len,y.len);
  
 return slice_l(x,n);
}
