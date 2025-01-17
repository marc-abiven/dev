bool is_struct(const str& x)
{
 if(!is_line(x))
  return false;
  
 if(match_l(x,"struct "))
  return true;

 if(match_l(x,"enum struct "))
  return true;
 
 return false;
}

bool is_struct(const var& x)
{
 if(!is_obj(x))
  return false;
 
 const obj& o=at_obj(x);
 const str& signature=get_str(o,"signature");
 
 return is_struct(signature);
}
