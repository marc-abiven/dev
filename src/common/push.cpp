tpl arr void push(T& x,const U& y)
{
 const int n=inc(x.len);
 
 allocate(x,n);
 back(x,y);
}

tpl cell void push(arr& x,const T& y)
{
 const var v=to_var(y);
 
 push(x,v);
}
