tpl integral str to_dump(const T x)
str to_dump(const void* x)
{
 return to_lit(x);
}

tpl composite str to_dump(const T& x)
{
 stop();
 
 return {};
}

tpl arr str to_dump(const T& x)
{
 if(is_empty(x))
  return "[]";
 
 if(is_single(x))
 {
  const U& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  
  if(eq(n,1))  
   return concat("[",s,"]");
 }
  
 arr_str a1;
 
 push(a1,"[");
 
 for(int i=0;lt(i,x.len);i++)
 {
  const U& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   
   append(s3," ");
   append(s3,"#");
   append(s3,s2);
   append(s3," ");
   append(s3,v2);
   push(a1,s3);
  }
 }
 
 push(a1,"]");
 
 return join(a1);
}

str to_dump(const str& x)
{
 return to_lit(x);
}

str to_dump(const var& x)
{
 if(is_bool(x))
 {  
  const bool v=at_bool(x);
  
  return to_dump(v);
 }
 
 if(is_char(x))
 {  
  const char v=at_char(x);
  
  return to_dump(v);
 }
 
 if(is_int(x))
 {  
  const int v=at_int(x);
  
  return to_dump(v);
 }
 
 if(is_double(x))
 {  
  const double v=at_double(x);
  
  return to_dump(v);
 }
 
 if(is_str(x))
 {  
  const str& v=at_str(x);
  
  return to_dump(v);
 }
 
 if(is_arr(x))
 {  
  const arr& v=at_arr(x);
  
  return to_dump(v);
 }
 
 if(is_obj(x))
 {  
  const obj& v=at_obj(x);
  
  return to_dump(v);
 }

 stop();
 
 return {};
}

str to_dump(const obj& x)
{
 if(is_empty(x))
  return "{}";

 if(is_single(x))
 {
  const str& k=front(x.ks);
  const var& v=front(x.vs);
  const str s1=to_dump(v);
  const int n=count_line(s1);
  
  if(eq(n,1))
  {  
   str s2;
   
   if(is_key(k))
    assign(s2,k);
   else
   {
    const str s3=to_lit(k);
    
    assign(s2,s3);
   }
   
   return concat("{",s2,":",s1,"}");
  }
 }
  
 arr_str a1;
 
 push(a1,"{");
 
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v1=at(x.vs,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  str s2;
  
  if(is_key(k))
   assign(s2,k);
  else
  {
   const str s3=to_lit(k);
   
   assign(s2,s3);
  }
  
  if(is_single(a2))
  {
   str s3;
   
   append(s3," ");
   append(s3,s2);
   append(s3," ");
   append(s3,s1);
   push(a1,s3);
   
   continue;
  }
  
  const str s3=concat(" ",s2);
  
  push(a1,s3);
  
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   str s3;

   append(s3," ");
   append(s3,v2);
   push(a1,s3);
  }
 }

 push(a1,"}");
 
 return join(a1);
}
