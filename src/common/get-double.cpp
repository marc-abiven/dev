double get_double(const obj& x,const str& y)
{
 const var& v=get(x,y);
 
 return at_double(v);
}
