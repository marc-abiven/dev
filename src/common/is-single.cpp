tpl arr bool is_single(const T& x)
{
 return eq(x.len,1);
}

bool is_single(const obj& x)
{
 return is_single(x.ks);
}
