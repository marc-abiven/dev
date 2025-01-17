arr cpl_deduplicate(const arr& x)
{
 fn bool defined(const arr& x,const str& y)
 {
  for(int i=0;lt(i,x.len);i++)
  {
   const var& v=at(x,i);
   
   if(is_str(v))
    continue;
   
   const obj& o=at_obj(v);
   const str& s=get_str(o,"signature");
   
   if(eq(s,y))
    return true;
  }
  
  return false;
 }
 
 fn arr discard(const arr& x,const str& y)
 {
  arr r;

  for(int i=0;lt(i,x.len);i++)
  {
   const var& v=at(x,i);
   
   if(is_str(v))
   {
    push(r,v);
    
    continue;
   }

   const obj& o=at_obj(v);
   const str& s=get_str(o,"signature");
   
   if(eq(s,y))
   {
   }
   else
    push(r,v);
  }
  
  return r;
 }
 
 arr r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_str(v))
  {
   push(r,v);
   
   continue;
  }
  
  if(is_inline(v))
  {
   push(r,v);
   
   continue;
  }

  const obj& o=at_obj(v);
  const str signature=get_str(o,"signature");

  if(defined(r,signature))
  {
   echo("overload");
   space();
   dump(signature);
   
   const arr a=discard(r,signature);
   
   clear(r);
   append(r,a);
  }

  push(r,v);
 }
 
 return r;
}
