tpl composite int cmp(const T& x,const T& y)
{
 stop();
 
 return 0;
}

tpl integral int cmp(const T x,const T y)
int cmp(const var& x,const var& y)
{
 if(gt(x,y))
  return 1;
  
 if(lt(x,y))
  return -1;
  
 return 0;
}

tpl arr int cmp(const T& x,const T& y)
{
 const int n=min(x.len,y.len);
 
 for(int i=0;lt(i,n);i++)
 {
  const U& vx=at(x,i);
  const U& vy=at(y,i);
  const int n=cmp(vx,vy);
  
  if(neq(n,0))
   return n;
 }
 
 return cmp(x.len,y.len);
}

int cmp(const str& x,const str& y)
{
 const int n=min(x.len,y.len); 
 const int r=memcmp(x.ptr,y.ptr,n);
 
 if(eq(r,0))
  return cmp(x.len,y.len);
 
 return r;
}

int cmp(const obj& x,const obj& y)
{
 const int n=min(x.ks.len,y.ks.len);

 for(int i=0;lt(i,n);i++)
 {
  const str& kx=at(x.ks,i);
  const var& vx=at(x.vs,i);

  const str& ky=at(y.ks,i);
  const var& vy=at(y.vs,i);
  
  const int n1=cmp(kx,ky);
  
  if(neq(n1,0))
   return n1;

  const int n2=cmp(vx,vy);
  
  if(neq(n2,0))
   return n2;
 }
 
 return cmp(x.ks.len,y.ks.len);
}
