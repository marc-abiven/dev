tpl arr T tail(const T& x,const int y)
{
 check(gte(y,0));
 
 if(gte(y,x.len))
  return x;
  
 return slice_r(x,y);
}
