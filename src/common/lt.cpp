tpl integral bool lt(const T x,const T y)
bool lt(const char x,const int y)
bool lt(const double x,const int y)
{
 return x<y;
}

tpl arr bool lt(const T& x,const T& y)
{
 const int n=cmp(x,y);
 
 return lt(n,0);
}

bool lt(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;

 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  
  return lt(v1,v2);
 }

 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  
  return lt(v1,v2);
 }

 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  
  return lt(v1,v2);
 }

 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  
  return lt(v1,v2);
 }
 
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  
  return lt(v1,v2);
 }
 
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  
  return lt(v1,v2);
 }
 
 stop();
 
 return false; 
}

bool lt(const obj& x,const obj& y)
{
 const int n=cmp(x,y);

 return lt(n,0);
}
