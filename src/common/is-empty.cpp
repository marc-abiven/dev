tpl arr bool is_empty(const T& x)
{
 return eq(x.len,0);
}

bool is_empty(const var& x)
{
 return x.t==type::_empty;
}

bool is_empty(const obj& x)
{
 return is_empty(x.ks);
}

bool is_empty(const fd& x)
{
 return lt(x.n,0);
}
