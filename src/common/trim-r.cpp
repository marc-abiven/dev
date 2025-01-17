str trim_r(const str& x)
{
 str r=x;
 
 while(is_full(r))
 {
  const char c=back(r);
  
  if(is_blank(c))
   pop(r);
  else
   break;
 }
 
 return r;
}

