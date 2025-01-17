bool parse_int(int& x,const str& y)
{
 const str s1=to_c(y);
 const long n1=strtol(s1.ptr,nullptr,10);
 
 if(n1==LONG_MIN)
  return false;
  
 if(n1==LONG_MAX)
  return false;
 
 const int n2=n1;  
 const str s2=to_str(n2);
 
 if(neq(s2,y))
  return false;
  
 assign(x,n2);

 return true;
}
