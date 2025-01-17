arr cpl_parse(const str& x)
{
 fn arr preprocess(const str& x)
 {
  arr r;
  const arr_str a=split(x);
  
  for(int i=0;lt(i,a.len);i++)
  {
   const str& v1=at(a,i);
   const str s1=trim_r(v1);
   
   if(is_empty(s1))
    continue;
   
   const str s2=trim(s1);
   
   if(match_l(s2,"//"))
    continue;
    
   const var v2=to_var(s1);
    
   push(r,v2);
  }
  
  return r;
 }
 
 fn arr agglomerate(const arr& x)
 {
  arr r;
  arr a=x;
  
  while(is_full(a))
  {
   const var v1=shift(a);
   const str& s1=at_str(v1);
   const int n1=get_indent(s1);

   if(neq(n1,0))
   {
    push(r,v1);
    
    continue;
   }
   
   if(match_l(s1,"#"))
   {
    push(r,v1);
    
    continue;
   }

   arr signatures;
   
   push(signatures,v1);
   
   while(is_full(a))
   {
    const var v=front(a);
    const str& s=at_str(v);
    const int n=get_indent(s);
    
    if(neq(n,0))
     break;
    
    if(eq(s,"{"))
     break;
     
    shift(a);
    push(signatures,v);
   }
   
   arr body;
   const var v2=front(a);
   const str& s2=at_str(v2);
   
   if(eq(s2,"{"))
   {
    push(body,v2);
    shift(a);
   }
   
   while(is_full(a))
   {
    const var v=front(a);
    const str& s=at_str(v);
    
    if(match_l(s,"}"))
    {
     shift(a);
     push(body,v);
     
     break;
    }
    
    const int n=get_indent(s);
    
    if(eq(n,0))
     break;

    shift(a);
    push(body,v);
   }
   
   obj o;
   
   const var v3=to_var(signatures);
   const var v4=to_var(body);

   put(o,"signatures",signatures);
   put(o,"body",body);
   
   const var v5=to_var(o);
   
   push(r,v5);
  }
  
  return r;
 }

 const arr a=preprocess(x);
 
 return agglomerate(a);
}

