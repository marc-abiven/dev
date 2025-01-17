arr_str cpl_prototype(const arr& x)
{
 arr_str r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_str(v))
   continue;
   
  if(is_inline(v))
   continue;
  
  const obj& o=at_obj(v);
  const str& signature=get_str(o,"signature");
  
  if(is_struct(signature))
   continue;
  
  const str s=concat(signature,";");
   
  push(r,s);
 }
 
 return r;
}
