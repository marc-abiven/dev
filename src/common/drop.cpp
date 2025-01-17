tpl arr void drop(T& x)
{
 drop(x,1);
}

tpl arr void drop(T& x,const int y)
{
 check(between(y,0,x.len));
 
 const int n=sub(x.len,y);
 
 allocate(x,n);
}
