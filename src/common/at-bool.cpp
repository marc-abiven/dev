bool& at_bool(var& x)
const bool& at_bool(const var& x)
{
 check(is_bool(x));
 
 return *(bool*)x.b;
}
