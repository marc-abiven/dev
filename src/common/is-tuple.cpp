bool is_tuple(const str& x)
{
 if(is_empty(x))
  return false;
  
 const arr_str a=split(x,":");
 
 if(is_single(a))
  return false;
 
 return every(a,is_identifier);
}

