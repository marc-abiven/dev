str dir_current()
{
 const int n=PATH_MAX;
 char s[n]={};
 const char* ptr=getcwd(s,n);
 
 check(neq(ptr,nullptr));
 
 return to_str(s);
}
