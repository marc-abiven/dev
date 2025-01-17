void dir_change(const str& x)
{
 const str s=to_c(x);
 const int n=chdir(s.ptr);
 
 check(eq(n,0));
}
