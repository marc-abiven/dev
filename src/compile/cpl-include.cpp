arr_str cpl_include(const arr& x)
{
 arr_str r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_str(v))
  {
   const str& s=at_str(v);
   
   push(r,s);
  }
 }
 
 return r;
}


