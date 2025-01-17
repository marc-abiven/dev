tpl arr U& back(T& x)
tpl arr const U& back(const T& x)
{
 const int n=dec(x.len);
 
 return at(x,n);
}

tpl arr void back(T& x,const U& y)
{
 const int n=dec(x.len);
 
 at(x,n,y);
}
