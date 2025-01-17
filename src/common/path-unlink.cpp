void path_unlink(const str& x)
{
 const str s=to_c(x);
 
 unlink(s.ptr);
}

