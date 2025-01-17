tpl integral bool eq(const T x,const T y)
bool eq(const char x,const int y)
bool eq(const double x,const int y)
bool eq(const void* x,const void* y)
{
 return x==y;
}

tpl composite bool eq(const T& x,const T& y)
{
 stop();
 
 return false;
}

tpl arr bool eq(const T& x,const T& y)
{
 const int n=cmp(x,y);
 
 return eq(n,0);
}

bool eq(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;
 
 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  
  return eq(v1,v2);
 }

 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  
  return eq(v1,v2);
 }

 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  
  return eq(v1,v2);
 }

 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  
  return eq(v1,v2);
 }
 
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  
  return eq(v1,v2);
 }
 
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  
  return eq(v1,v2);
 }
 
 stop();
 
 return false;
}

bool eq(const obj& x,const obj& y)
{
 const int n=eq(x,y);

 return eq(n,0);
}
