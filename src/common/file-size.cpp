int file_size(const str& x)
{
 const str s=to_c(x);
 struct stat data;
 const int n=stat(s.ptr,&data);
 
 check(eq(n,0));
  
 return data.st_size;
}
