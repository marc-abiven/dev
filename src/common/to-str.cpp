str to_str(const bool x)
{
 if(x)
  return "true";
 
 return "false";
}

str to_str(const char x)
{
 str r;
 
 push(r,x);
 
 return r;
}

str to_str(const int x)
{
 const int n1=64;
 char s1[n1]={};
 const str s2=to_c("%d");
 
 const int n2=snprintf(s1,n1,s2.ptr,x);
 
 check(gte(n2,0));

 return to_str(s1);
}

str to_str(const double x)
{
 return to_str(x,2);
}

str to_str(const double x,const int y)
{
 check(gte(y,0));
 
 const int n1=64;
 char s1[n1]={};
 const str s2=to_c("%f");
 const int n2=snprintf(s1,n1,s2.ptr,x);
 
 check(gte(n2,0));
 
 const str s3=to_str(s1);
 const arr_str a=split(s3,".");
 const str& s4=front(a);
 const str& s5=at(a,1);
 str s6=slice_r(s5,y);
 
 while(is_full(s6))
 {
  const char c=back(s6);
  
  if(neq(c,'0'))
   break;
   
  drop(s6);
 }
 
 if(is_empty(s6))
  return s4;
  
 if(eq(y,0))
  return s4;
 
 return concat(s4,".",s6);
}

str to_str(const void* x)
{
 const int n1=64;
 char s1[n1]={};
 const str s2=to_c("%p");
 const int n2=snprintf(s1,n1,s2.ptr,x);
 
 check(gte(n2,0));

 return to_str(s1);
}

str to_str(const char* x)
{
 check(neq(x,nullptr));
 
 str r;
 
 const int n=strlen(x);
 
 allocate(r,n);
 memcpy(r.ptr,x,n);
 
 return r;
}

tpl arr str to_str(const T& x)
{
 arr_str a;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  
  append(s3,"#");
  append(s3,s1);
  append(s3," ");
  append(s3,s2);
  
  push(a,s3);
 }
 
 return join(a);
}

str to_str(const str& x)
{
 return x;
}

str to_str(const var& x)
{
 if(is_bool(x))
 {
  const bool v=at_bool(x);
  
  return to_str(v);
 }
 else if(is_char(x))
 {
  const char v=at_char(x);
  
  return to_str(v);
 }
 else if(is_int(x))
 {
  const int v=at_int(x);
  
  return to_str(v);
 }
 else if(is_double(x))
 {
  const int v=at_double(x);
  
  return to_str(v);
 }
 else if(is_str(x))
  return at_str(x);
 else if(is_arr(x))
 {
  const arr& v=at_arr(x);
  
  return to_str(v);
 }
 else if(is_obj(x))
 {
  const obj& v=at_obj(x);
  
  return to_str(v);
 }
 else
  stop();
 
 return {};
}

str to_str(const obj& x)
{
 arr_str a;
 
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v=at(x.vs,i);
  const str s1=to_lit(v);
  
  str s2;
  
  append(s2,k);
  append(s2," ");
  append(s2,s1);
  
  push(a,s2);
 }

 return join(a);
}
