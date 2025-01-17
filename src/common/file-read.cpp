str file_read(const str& x)
{
 const str s=to_c(x);
 const int n=open(s.ptr,O_RDONLY);

 check(gte(n,0));
  
 fd file;
 
 assign(file.n,n);
 
 return read(file);
}
