tpl arr T slice_r(const T& x,const int y)
{
 check(between(y,0,x.len));
 
 T r;
 
 allocate(r,y);
 
 const int n=sub(x.len,y);
 
 copy(r,0,x,n,y);
 
 return r;
}
