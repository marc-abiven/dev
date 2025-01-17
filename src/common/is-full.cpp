tpl arr bool is_full(const T& x)
bool is_full(const var& x)
bool is_full(const obj& x)
bool is_full(const fd& x)
{
 return !is_empty(x);
}
