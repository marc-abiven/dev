str read(const fd& x)
{
 str r; 

 while(true)
 {
  const str s=read(x,1024);

  if(is_empty(s))
   break;
  
  append(r,s);
 }
 
 return r;
}

str read(const fd& x,const int y)
{
 check(is_full(x));
 check(gte(y,0));
 
 str r;

 if(eq(y,0))
  return r;
  
 allocate(r,y);
 
 const int n=read(x.n,r.ptr,r.len);
 
 check(gte(n,0));
 allocate(r,n);
 
 return r;
}
