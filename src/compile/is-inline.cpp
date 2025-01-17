bool is_inline(const var& x)
{
 if(!is_obj(x))
  return false;
  
 const obj& o=at_obj(x);
 const str& signature=get_str(o,"signature");
 
 return eq(signature,"inline");
}
 
