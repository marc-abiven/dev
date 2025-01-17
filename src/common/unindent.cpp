str unindent(const str& x)
{
 const str r=trim_r(x);
 
 if(is_empty(r))
  return r;
  
 const char c=front(r);
 
 if(eq(c,' '))
  return slice(r,1);
  
 return r;
}

