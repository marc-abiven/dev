arr cpl_flatten(const arr& x)
{
 fn obj parse(const obj& x,int& y)
 {
  const arr& a1=get_arr(x,"body");
  arr a2=copy(a1);
  obj caller;
  arr callees;
  const str signature=get_str(x,"signature");
  arr body;
  
  put(caller,"signature",signature);
  
  while(is_full(a2))
  {
   const var& v1=shift(a2);
   const str& s1=at_str(v1);
   const arr_str a3=split(s1," ");
   arr_str a4=reject(a3,"");
   const str fn=shift(a4);
   
   if(neq(fn,"fn"))
   {
    push(body,s1);
    
    continue;
   }

   const str s2=join(a4," ");
   arr_str a5;
   
   for(int i=0;lt(i,a4.len);i++)
   {
    const str& s=at(a4,i);
    const arr_str a=split(s,"(");
    
    append(a5,a);
   }
   
   shift(a5);
   
   const str local=shift(a5);
   const str s3=to_str(y);
   const str global=concat(local,"_",s3);
   const int n=inc(y);
   
   assign(y,n);
   
   const str signature=replace(s2,local,global);
   arr body2;
   const var v2=shift(a2);
   const str& s4=at_str(v2);
   
   check(eq(s4," {"));
   
   push(body2,"{");
   
   while(is_full(a2))
   {
    const var v3=shift(a2);
    const str& s1=at_str(v3);
    const int n=get_indent(s1);
    
    if(eq(n,1))
    {
     check(eq(s1," }"));
     
     push(body2,"}");
     
     break;
    }
    
    const str s2=unindent(s1);
    
    push(body2,s2);
   }
   
   obj o;
   
   put(o,"global",global);
   put(o,"local",local);
   put(o,"signature",signature);
   put(o,"body",body2);
   
   push(callees,o);
  }

  put(caller,"body",body);
  
  obj r;
  
  put(r,"caller",caller);
  put(r,"callees",callees);
  
  return r;
 }

 fn arr instantiate(const arr& x,const arr& y)
 {
  arr r;
  
  for(int i=0;lt(i,x.len);i++)
  {
   const var& v=at(x,i);
   str s1=at_str(v);
   
   for(int i=0;lt(i,y.len);i++)
   {
    const var& v=at(y,i);
    const obj& o=at_obj(v);
    const str& local=get_str(o,"local");
    const str& global=get_str(o,"global");
    const str s2=replace(s1,local,global);
    
    assign(s1,s2);
   }
   
   push(r,s1);
  }
  
  return r;
 }
 
 fn obj lift(const obj& x)
 {
  obj r;
  const str signature=get_str(x,"signature");
  const arr body=get_arr(x,"body");
  
  put(r,"signature",signature);
  put(r,"body",body);
  
  return r;
 }
 
 arr r;
 int id=x.len;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_str(v))
  {
   push(r,v);
   
   continue;
  }
  
  const obj& o1=at_obj(v);
  obj o2=parse(o1,id);
  obj caller=get_obj(o2,"caller");
  arr callees=get_arr(o2,"callees");
  
  if(is_empty(callees))
  {
   push(r,caller);
   
   continue;
  }
  
  const arr body=get_arr(caller,"body");
  const arr a1=instantiate(body,callees);
  
  set(caller,"body",a1);
  
  for(int i=0;lt(i,callees.len);i++)
  {
   var& v=at(callees,i);
   obj& o3=at_obj(v);
   const arr body=get_arr(o3,"body");
   const arr a1=instantiate(body,callees);
   
   set(o3,"body",a1);
  }
  
  const obj o3=lift(caller);

  push(r,o3);

  for(int i=0;lt(i,callees.len);i++)
  {
   const var& v=at(callees,i);
   const obj& o1=at_obj(v);
   const obj o2=lift(o1);
   
   push(r,o2);
  }
 }
  
 return r;
}
