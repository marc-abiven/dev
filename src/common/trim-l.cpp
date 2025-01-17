str trim_l(const str& x)
{
 str r=x;
 
 while(is_full(r))
 {
  const char c=front(r);
  
  if(is_blank(c))
   shift(r);
  else
   break;
 }
 
 return r;
}

