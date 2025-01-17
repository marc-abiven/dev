const arr& get_arr(const obj& x,const str& y)
{
 const var& v=get(x,y);
 
 return at_arr(v);
}

arr& get_arr(obj& x,const str& y)
{
 var& v=get(x,y);
 
 return at_arr(v);
}
