bool match_l(const str& x,const str& y)
{
 if(is_empty(x))
  return false;
  
 if(is_empty(y))
  return false;
  
 if(gt(y.len,x.len))
  return false;
  
 const int n=memcmp(x.ptr,y.ptr,y.len);
 
 return eq(n,0);
}
