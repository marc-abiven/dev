tpl integral str to_lit(const T x)
str to_lit(const void* x)
{
 return to_str(x);
}

tpl composite str to_lit(const T& x)
{
 stop();
 
 return {};
}

str to_lit(const char x)
{
 str r;
 const str s=escape(x);
 
 append(r,"'");
 append(r,s);
 append(r,"'");
 
 return r;
}

tpl arr str to_lit(const T& x)
{
 str r;
 
 append(r,"[");
 
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  const str s=to_lit(v);
  
  append(r,s);
  
  if(!is_last(x,i))
   append(r," ");
 }

 append(r,"]");
 
 return r;
}

str to_lit(const str& x)
{
 str r;
 
 push(r,'"');
 
 for(int i=0;lt(i,x.len);i++)
 {
  const char c=at(x,i);
  const str s=escape(c);
  
  append(r,s);  
 }
 
 push(r,'"');
 
 return r;
}

str to_lit(const var& x)
{
 if(is_bool(x))
 {
  const bool v=at_bool(x);
  
  return to_lit(v); 
 }

 if(is_char(x))
 {
  const char v=at_char(x);
  
  return to_lit(v);
 }

 if(is_int(x))
 {
  const int v=at_int(x);
  
  return to_lit(v);
 }

 if(is_double(x))
 {
  const double v=at_double(x);
  
  return to_lit(v);
 }
 
 if(is_str(x))
 {
  const str& v=at_str(x);
  
  return to_lit(v);
 }

 if(is_arr(x))
 {
  const arr& v=at_arr(x);
  
  return to_lit(v);
 }

 if(is_obj(x))
 {
  const obj& v=at_obj(x);
  
  return to_lit(v);
 }
 
 stop();
 
 return {};
}

str to_lit(const obj& x)
{
 str r;
 
 append(r,"{");
 
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v=at(x.vs,i);
  const str s1=to_lit(v);
  str s2;
  
  if(is_key(k))
   assign(s2,k);
  else
  {
   const str s3=to_lit(k);
   
   assign(s2,s3);
  }
  
  append(r,s2);
  append(r,":");
  append(r,s1);

  if(!is_last(x.ks,i))
   append(r," ");
 }

 append(r,"}");
 
 return r;
}
