arr_str cpl_forward(const arr& x)
{
 arr_str r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_str(v))
   continue;
  
  const obj& o=at_obj(v);
  const str& signature=get_str(o,"signature");
  
  if(is_struct(signature))
  {
   const str s=concat(signature,";");

   push(r,s);
  }
 }
 
 return r;
}


