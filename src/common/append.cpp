tpl arr void append(T& x,const T& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}

void append(arr_str& x,const arr& y)
{
 for(int i=0;lt(i,y.len);i++)
 {
  const var& v=at(y,i);
  const str& s=at_str(v);
  
  push(x,s);
 }
}
