tpl arr T slice_l(const T& x,const int y)
{
 check(between(y,0,x.len));
 
 T r;
 
 allocate(r,y);
 copy(r,0,x,0,y);
 
 return r;
}
