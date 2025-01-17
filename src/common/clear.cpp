void clear(bool& x)
{
 assign(x,false);
}

tpl numeric void clear(T& x)
{
 assign(x,0);
}

tpl arr void clear(T& x)
{
 allocate(x,0);
}

void clear(var& x)
{
 if(is_empty(x))
  return;
  
 if(is_var_integral(x))
 {
 } 
 else if(is_str(x))
 {
  str& v=at_str(x);
  str* p=&v;

  destruct(p);
 }
 else if(is_arr(x))
 {
  arr& v=at_arr(x);
  arr* p=&v;

  destruct(p);
 }
 else if(is_obj(x))
 {
  obj& v=at_obj(x);
  obj* p=&v;

  destruct(p);
 }
 else
  stop();
 
 x.t=type::_empty;  
}

void clear(obj& x)
{
 clear(x.ks);
 clear(x.vs);
}

void clear(fd& x)
{
 if(is_empty(x))
  return;
  
 const int n1=x.n;
 
 assign(x.n,0);
 
 const int n2=close(n1);
 
 check(eq(n2,0));
}
