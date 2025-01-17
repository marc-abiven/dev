bool match_r(const str& x,const str& y)
{
 if(is_empty(x))
  return false;
  
 if(is_empty(y))
  return false;
  
 if(gt(y.len,x.len))
  return false;

 const int n1=sub(x.len,y.len);
 const char* ptr=x.ptr+n1;
 const int n2=memcmp(ptr,y.ptr,y.len);
 
 return eq(n2,0);
}
