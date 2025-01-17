tpl arr void remove(T& x,const int y)
{
 check(between(y,0,x.len));
 
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 
 move(x,y,n1,n2);
 allocate(x,n3);
}
