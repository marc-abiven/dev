int git_system(const str& x,const str& y)
{
 const str s1=dir_current();
 const str s2=concat("git ",y);

 dir_change(x); 
 
 const int r=os_system(s2);
 
 dir_change(s1);
 
 return r;
}

int git_system(const str& x,const str& y,const str& z)
{
 arr_str a1;
 
 push(a1,y);
 push(a1,z);
 
 const str s=join(a1," ");
 
 return git_system(x,s);
}

int git_system(const str& x,const str& y,const str& z,const str& a)
{
 arr_str a1;
 
 push(a1,y);
 push(a1,z);
 push(a1,a);
 
 const str s=join(a1," ");
 
 return git_system(x,s);
}

int git_system(const str& x,const str& y,const str& z,const str& a,const str& b)
{
 arr_str a1;
 
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 
 const str s=join(a1," ");
 
 return git_system(x,s);
}
