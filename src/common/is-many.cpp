tpl arr bool is_many(const T& x)
{
 return gt(x.len,1);
}

bool is_many(const obj& x)
{
 return is_many(x.ks);
}
