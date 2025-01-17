arr_str cpl_import(const str& x)
{
 arr_str r;
 
 const arr_str a=dir_read(x);
 
 for(int i=0;lt(i,a.len);i++)
 {
  const str& v=at(a,i);
   
  if(is_dir(v))
  {
   const arr_str a=cpl_import(v);
   
   append(r,a);
  }
  else
   push(r,v);
 }
  
 return r;
}
