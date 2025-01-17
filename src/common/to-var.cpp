var to_var(const bool x)
{
 var r;
 
 r.t=type::_bool;

 bool& v=at_bool(r);
 
 assign(v,x);
 
 return r;
}

var to_var(const char x)
{
 var r;

 r.t=type::_char;

 char& v=at_char(r);
 
 assign(v,x);
 
 return r;
}

var to_var(const int x)
{
 var r;
 
 r.t=type::_int;

 int& v=at_int(r);
 
 assign(v,x);
 
 return r;
}

var to_var(const double x)
{
 var r;
 
 r.t=type::_double;

 double& v=at_double(r);
 
 assign(v,x);
 
 return r;
}

var to_var(const str& x)
{
 var r;
 
 r.t=type::_str;

 str& v=at_str(r); 
 str* ptr=&v;
 
 new (ptr) str;
 
 assign(v,x);
 
 return r;
}

var to_var(const arr& x)
{
 var r;
 
 r.t=type::_arr;

 arr& v=at_arr(r); 
 arr* ptr=&v;
 
 new (ptr) arr;
 
 assign(v,x);
 
 return r;
}

var to_var(const obj& x)
{
 var r;
 
 r.t=type::_obj;

 obj& v=at_obj(r); 
 obj* ptr=&v;
 
 new (ptr) obj;
 
 assign(v,x);
 
 return r;
}
