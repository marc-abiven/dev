void assign(void*& x,void*& y)
{
 x=y;
}

tpl ptr void assign(T*& x,T*& y)
{
 x=y;
}

tpl integral void assign(T& x,const T y)
{
 x=y;
}

tpl arr void assign(T& x,const T& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}

void assign(var& x,const var& y)
{
 clear(x);
 
 if(is_var_integral(y))
  memcpy(x.b,y.b,sizeof(x.b));  
 else if(is_str(y))
 {
  str* ptr=(str*)x.b;
  const str& v=at_str(y);
 
  new (ptr) str;
 
  assign(*ptr,v);
 }
 else if(is_arr(y))
 {
  arr* ptr=(arr*)x.b;
  const arr& v=at_arr(y);
 
  new (ptr) arr;
 
  assign(*ptr,v);
 }
 else if(is_obj(y))
 {
  obj* ptr=(obj*)x.b;
  const obj& v=at_obj(y);
 
  new (ptr) obj;
 
  assign(*ptr,v);
 }
 else
  stop();
 
 x.t=y.t;
}

void assign(obj& x,const obj& y)
{
 assign(x.ks,y.ks);
 assign(x.vs,y.vs);
}
