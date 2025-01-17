arr& at_arr(var& x)
const arr& at_arr(const var& x)
{
 check(is_arr(x));
 
 return *(arr*)x.b;
}
