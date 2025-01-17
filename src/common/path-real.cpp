str path_real(const str& x)
{
 const str s1=to_c(x);
 char s2[PATH_MAX]={}; 
 const char* ptr=realpath(s1.ptr,s2);
 
 check(neq(ptr,nullptr));
 
 return to_str(ptr);
}
