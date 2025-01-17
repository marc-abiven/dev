arr_str scan(const str& x)
{
 fn arr_str delimit(const str& x)
 {
  arr_str r;
  
  for(int i=0;lt(i,x.len);i++)
  {
   const char v=at(x,i);
   
   str right;
   
   push(right,v);
   
   if(is_empty(r))
   {
    push(r,right);
    
    continue;
   }
   
   const str left=back(r);
   
   str fragment;
   
   append(fragment,left);
   append(fragment,right);
   
   if(is_fragment(fragment))
   {
    drop(r);
    push(r,fragment);
   } 
   else
    push(r,right);
  }
  
  return r;
 }
 
 fn arr_str group(const arr_str& x)
 {
  arr_str r;
  arr_str a1=copy(x);
  
  while(is_full(a1))
  {
   const arr_str a2=reduce(a1);
   
   if(is_full(a2))
   {
    const str s=join(a2,"");
    
    push(r,s);
    shift(a1,a2.len);
   }
   else
   {
    const str s=shift(a1);
    
    push(r,s);
   }   
  }
  
  return r;
 }
 
 fn arr_str reduce(const arr_str& x)
 {
  check(is_full(x));
  
  arr_str r=copy(x);
  
  while(is_full(r))
  {
   const str s=join(r,"");
   
   if(is_token(s))
    break;
   
   drop(r);
  }
  
  return r;
 }

 const arr_str a=delimit(x);
 
 return group(a);
}
