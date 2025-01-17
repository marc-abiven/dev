int to_int(const str& x)
{
 int r=0;
 const bool b=parse_int(r,x);
 
 check(b);
 
 return r;
}
