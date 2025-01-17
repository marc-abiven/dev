bool get_bool(const obj& x,const str& y)
{
 const var& v=get(x,y);
 
 return at_bool(v);
}
