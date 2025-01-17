const str& get_str(const obj& x,const str& y)
{
 const var& v=get(x,y);
 
 return at_str(v);
}

str& get_str(obj& x,const str& y)
{
 var& v=get(x,y);
 
 return at_str(v);
}
