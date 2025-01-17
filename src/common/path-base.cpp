str path_base(const str& x)
{
 const str s=to_c(x);
 const char* ptr=basename(s.ptr);
 
 check(neq(ptr,nullptr));
 
 return to_str(ptr);
}

