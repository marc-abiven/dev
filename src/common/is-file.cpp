bool is_file(const str& x)
{
 const str s=to_c(x);
 struct stat data;
 const int n=stat(s.ptr,&data);
 
 if(neq(n,0))
  return false;
  
 return S_ISREG(data.st_mode);
}
