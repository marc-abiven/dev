char& at_char(var& x)
const char& at_char(const var& x)
{
 check(is_char(x));
 
 return *(char*)x.b;
}
