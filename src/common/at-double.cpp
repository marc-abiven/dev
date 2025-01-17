double& at_double(var& x)
const double& at_double(const var& x)
{
 check(is_double(x));
 
 return *(double*)x.b;
}
