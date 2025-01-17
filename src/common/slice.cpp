tpl arr T slice(const T& x,const int y)
{
 check(between(y,0,x.len));

 const int n=sub(x.len,y);
  
 return slice(x,y,n);
}

tpl arr T slice(const T& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 
 const int n=add(y,z);
 
 check(lte(n,x.len));

 T r;
 
 allocate(r,z);
 copy(r,0,x,y,z);
 
 return r;  
}


