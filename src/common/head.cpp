tpl arr T head(const T& x,const int y)
{
 check(gte(y,0));
 
 if(gte(y,x.len))
  return x;
  
 return slice_l(x,y);
}
