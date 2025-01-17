void file_write(const str& x,const str& y)
{
 const str s1=to_c(x);
 const int n=creat(s1.ptr,0777);

 check(gte(n,0));
  
 fd file;
 
 assign(file.n,n);
 
 str s2=y;
 
 while(is_full(s2))
 {
  const str s3=head(s2,1024);
  
  shift(s2,s3.len);
  write(file,s3);
 }
}
