bool is_dir(const str& x)
{
 const str s=to_c(x);
 struct stat data;
 const int n=stat(s.ptr,&data);
 
 if(neq(n,0))
  return false;
  
 return S_ISDIR(data.st_mode);
}
