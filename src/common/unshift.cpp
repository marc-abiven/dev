tpl arr void unshift(T& x,const U& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y); 
}

tpl cell void unshift(arr& x,const T& y)
{
 const var v=to_var(y);
 
 unshift(x,v);
}
