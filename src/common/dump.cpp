tpl integral void dump(const T x)
void dump(const void* x)
void dump(const str& x)
tpl arr void dump(const T& x)
void dump(const var& x)
void dump(const obj& x)
{
 const str s=to_dump(x);
 
 print(s);
}
