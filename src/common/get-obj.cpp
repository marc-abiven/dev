const obj& get_obj(const obj& x,const str& y)
{
 const var& v=get(x,y);
 
 return at_obj(v);
}

obj& get_obj(obj& x,const str& y)
{
 var& v=get(x,y);
 
 return at_obj(v);
}
