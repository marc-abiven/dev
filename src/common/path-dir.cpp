str path_dir(const str& x)
{
 const str s=to_c(x);
 const char* ptr=dirname(s.ptr);
 
 check(neq(ptr,nullptr));
 
 return to_str(ptr);
}

