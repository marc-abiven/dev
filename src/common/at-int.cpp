int& at_int(var& x)
const int& at_int(const var& x)
{
 check(is_int(x));
 
 return *(int*)x.b;
}
