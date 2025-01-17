bool is_alpha(const char x)
{
 if(eq(x,'_'))
  return true;
      
 if(between(x,'a','z'))
  return true;

 if(between(x,'A','Z'))
  return true;

 return false;
}

bool is_alpha(const str& x)
{
 if(is_empty(x))
  return false;

 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  
  if(!is_alpha(v))
   return false;
 }
 
 return true;
}
