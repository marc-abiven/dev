arr cpl_implement(const arr& x)
{
 fn obj parse(const arr& x)
 {
  obj r;
  
  for(int i=0;lt(i,x.len);i++)
  {
   const var& v1=at(x,i);
   const obj& o1=at_obj(v1);
   const arr& signatures=get_arr(o1,"signatures");
   
   check(is_single(signatures));
   
   const arr& body=get_arr(o1,"body");
   const var& v2=front(signatures);
   const str& s1=at_str(v2);
   arr_str a=split(s1," ");
   const str s2=shift(a);
   
   check(eq(s2,"impl"));
   
   const str name=shift(a);
   
   check(is_empty(a));
   
   obj values;
   
   for(int i=0;lt(i,body.len);i++)
   {
    const var& v=at(body,i);
    const str& s1=at_str(v);    
    const str s2=trim(s1);
    arr_str a=split(s2," "); 
    str key=shift(a);
        
    put(values,key,a);
   }
   
   if(has(r,name))
   {
    obj& o=get_obj(r,name);

    for(int i=0;lt(i,values.ks.len);i++)
    {
     const str& k=at(values.ks,i);
     const var& v=at(values.vs,i);
     const arr& a=at_arr(v);
     
     if(has(o,k))
     {
      var& v2=get(o,k);
      arr& a2=at_arr(v2);
      
      append(a2,a);
     }
     else
      put(o,k,v);
    }
   }
   else
    put(r,name,values);
  }
  
  return r;
 }
 
 fn arr generate(const obj& x,const obj& y)
 {
  arr r;
  const arr& signatures=get_arr(x,"signatures");
  
  for(int i=0;lt(i,signatures.len);i++)
  {
   const var& v=at(signatures,i);
   const var& body=get(x,"body");
   obj o;
   
   put(o,"signature",v);
   put(o,"body",body);
   
   const str& s=at_str(v);
   
   if(is_tpl(s))
   {
    const arr a=implement(o,y);
    
    append(r,a);
    
    continue;
   }

   push(r,o);
  }

  return r;
 }
 
 fn arr implement(const obj& x,const obj& y)
 {
  arr r;
  
  const str& signature=get_str(x,"signature");
  arr_str a=split(signature," ");
  const str tpl=shift(a);
  const str name=shift(a);
  const str s1=join(a," ");
  const obj& values=get_obj(y,name);
  
  for(int i=0;lt(i,values.ks.len);i++)
  {
   const str& k=at(values.ks,i);
   const var& v1=at(values.vs,i);
   arr pairs=at_arr(v1);
   
   unshift(pairs,k);
   
   const str signature=substitute(s1,pairs);   
   const arr& a=get_arr(x,"body");
   arr body;
   
   for(int i=0;lt(i,a.len);i++)
   {
    const var& v1=at(a,i);
    const str& s1=at_str(v1);
    const str s2=substitute(s1,pairs);
    const var v2=to_var(s2);
    
    push(body,v2);
   }
   
   obj o;
   
   put(o,"signature",signature);
   put(o,"body",body);
   
   push(r,o);
  }
  
  return r;
 }
 
 fn str substitute(const str& x,const arr& y)
 {
  str r=x;
  
  for(int i=0;lt(i,y.len);i++)
  {
   const var& v=at(y,i);
   const str& s1=at_str(v);
   const char c1='T';
   const char c2=add(c1,i);
   
   str s2;
   
   push(s2,c2);
   
   const str s3=replace(r,s2,s1);
   
   assign(r,s3);
  }
  
  return r;
 }
  
 fn bool is_impl(const var& x)
 {
  if(!is_obj(x))
   return false;
   
  const obj& o=at_obj(x);
  const arr& signatures=get_arr(o,"signatures");
  
  if(is_many(signatures))
   return false;

  const var& v=front(signatures);
  const str& s=at_str(v);
  arr_str a=split(s," ");
  const str impl=shift(a);
  
  if(neq(impl,"impl"))
   return false;

  if(is_empty(a))
   return false;
   
  const str name=shift(a);
  
  return is_empty(a);
 }
 
 arr r;
 arr a1;
 arr a2;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_impl(v))
  {
   push(a1,v);
   
   continue;
  }
  
  push(a2,v);
 }
 
 const obj impls=parse(a1);
 
 for(int i=0;lt(i,a2.len);i++)
 {
  const var& v=at(a2,i);
  
  if(is_str(v))
  {
   push(r,v);
   
   continue;
  }
  
  const obj& o=at_obj(v);
  const arr a=generate(o,impls);
  
  append(r,a);
 }
 
 return r;
}
