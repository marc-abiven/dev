str os_execute(const str& x)
{
 const str s1=to_c(x);
 const str s2=to_c("r");
 FILE* ptr=popen(s1.ptr,s2.ptr);
 const int n1=fileno(ptr);
 fd f;
 
 f.n=n1;
 
 const str s3=read(f);
 
 detach(f);
 
 const str r=trim_r(s3);
 const int n2=pclose(ptr);
 
 check(eq(n2,0)); 
 
 return r;
}
