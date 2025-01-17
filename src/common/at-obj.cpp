obj& at_obj(var& x)
const obj& at_obj(const var& x)
{
 check(is_obj(x));
 
 return *(obj*)x.b;
}
