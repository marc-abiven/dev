arr_str cpl_struct(const arr& x)
{
 arr_str r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(!is_struct(v))
   continue;
  
  const obj& o=at_obj(v);
  const str& signature=get_str(o,"signature");
  const arr& body=get_arr(o,"body");
  
  push(r,signature);
  append(r,body);
 }
 
 return r;
}

