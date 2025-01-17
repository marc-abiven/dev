str replace(const str& x,const str& y,const str& z)
{
 const arr_str a=split(x,y);
 
 return join(a,z);
}
