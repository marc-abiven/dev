tpl arr bool contain(const T& x,const U& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  
  if(eq(v,y))
   return true;
 }
 
 return false;
}

bool contain(const str& x,const str& y)
{
 const void* p=memmem(x.ptr,x.len,y.ptr,y.len);
 
 return neq(p,nullptr);
}
