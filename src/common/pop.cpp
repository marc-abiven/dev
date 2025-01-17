tpl arr U pop(T& x)
{
 const U r=back(x);
 
 drop(x);
 
 return r;
}

tpl arr void pop(T& x,const int y)
{
 drop(x,y);
}
