tpl arr T copy(const T& x)
{
 return x;
}

tpl arr void copy(T& x,const T& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}

tpl arr void copy(T& x,const int y,const T& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 
 const int n1=add(y,b);
 
 check(lte(n1,x.len));
 
 const int n2=add(a,b);

 check(lte(n2,z.len));
 
 if(eq(b,0))
  return;

 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(U));
  
  U* ptr1=x.ptr+y;
  const U* ptr2=z.ptr+a;
 
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const U& v=at(z,n2);
   
   at(x,n1,v);
  }
 } 
}
