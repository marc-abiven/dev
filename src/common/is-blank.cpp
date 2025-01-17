bool is_blank(const char x)
{
 if(eq(x,' '))
  return true;

 if(eq(x,'\n'))
  return true;

 if(eq(x,'\r'))
  return true;

 if(eq(x,'\t'))
  return true;
  
 return false;
}

bool is_blank(const str& x)
{
 if(is_empty(x))
  return false;

 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  
  if(!is_blank(v))
   return false;
 }
 
 return true;
}
