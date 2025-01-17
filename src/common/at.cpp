tpl arr U& at(T& x,const int y)
tpl arr const U& at(const T& x,const int y)
{
 const int n=dec(x.len);

 check(between(y,0,n));
 
 return x.ptr[y];
}

tpl arr void at(T& x,const int y,const U& z)
{
 const int n=dec(x.len);

 check(between(y,0,n));
 
 assign(x.ptr[y],z);
}
