tpl arr void prepend(T& x,const T& y)
{
 const T v=x;

 assign(x,y);
 append(x,v);
}

void prepend(arr_str& x,const arr& y)
{
 arr_str a;
 
 append(a,y); 
 prepend(x,a);
}
