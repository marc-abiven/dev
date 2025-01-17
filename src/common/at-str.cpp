str& at_str(var& x)
const str& at_str(const var& x)
{
 check(is_str(x));
 
 return *(str*)x.b;
}
