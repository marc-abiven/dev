tpl arr U shift(T& x)
{
 const U r=front(x);
 
 shift(x,1);
 
 return r;
}

tpl arr void shift(T& x,const int y)
{
 check(between(y,0,x.len));

 const int n=sub(x.len,y);
 
 move(x,0,y,n);
 allocate(x,n);
}
