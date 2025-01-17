int os_system(const str& x)
{
 const str s1=to_c(x);
 const str s2=concat("system> ",x);
 
 print(s2);
 
 return system(s1.ptr);
}

int os_system(const str& x,const str& y)
{
 arr_str a1;
 
 push(a1,x);
 push(a1,y);
 
 const str s=join(a1," ");
 
 return os_system(s);
}

int os_system(const str& x,const str& y,const str& z)
{
 arr_str a1;
 
 push(a1,x);
 push(a1,y);
 push(a1,z);
 
 const str s=join(a1," ");
 
 return os_system(s);
}

int os_system(const str& x,const str& y,const str& z,const str& a)
{
 arr_str a1;
 
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 
 const str s=join(a1," ");
 
 return os_system(s);
}

int os_system(const str& x,const str& y,const str& z,const str& a,const str& b)
{
 arr_str a1;
 
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 
 const str s=join(a1," ");
 
 return os_system(s);
}

int os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)
{
 arr_str a1;
 
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 push(a1,c);
 
 const str s=join(a1," ");
 
 return os_system(s);
}

int os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)
{
 arr_str a1;
 
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 push(a1,c);
 push(a1,d);
 
 const str s=join(a1," ");
  
 return os_system(s);
}
