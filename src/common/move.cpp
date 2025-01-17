tpl arr void move(T& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 
 const int n1=add(y,a);

 check(lte(n1,x.len));

 const int n2=add(z,a);

 check(lte(n2,x.len));
 
 if(eq(a,0))
  return;

 if(eq(y,z))
  return;

 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(U));
  
  U* ptr1=x.ptr+y;
  const U* ptr2=x.ptr+z;
 
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   U& v1=at(x,n1);
   U& v2=at(x,n2);
   
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);   
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   U& v1=at(x,n3);
   U& v2=at(x,n4);
   
   swap(v1,v2);
  }
 }
}

tpl arr void move(T& x,const int y,T& z,const int a,const int b)
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
   U& v1=at(x,n1);
   U& v2=at(z,n2);
   
   swap(v1,v2);
  }
 } 
}
