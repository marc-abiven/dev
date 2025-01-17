void write(const fd& x,const str& y)
{
 check(is_full(x));
 
 if(is_empty(y))
  return;
  
 const int n=write(x.n,y.ptr,y.len);
 
 check(eq(n,y.len));
}
