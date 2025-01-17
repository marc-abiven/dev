int get_int(const obj& x,const str& y)
{
 const var& v=get(x,y);
 
 return at_int(v);
}
