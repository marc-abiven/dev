tpl arr void allocate(T& x,const int y)
{
 check(gte(y,0));
 
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(U));
  U* ptr=(U*)malloc(n);

  check(neq(ptr,nullptr));
  
  assign(x.ptr,ptr);
  assign(x.len,y);
  
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    U* p=x.ptr+i;
    
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   U* p=x.ptr+i;

   destruct(p);
  }
  
  free(x.ptr);
  
  U* ptr=nullptr;
  
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);

   U* p=x.ptr+n2;
   
   destruct(p);
  }

  const int n2=mul(y,sizeof(U));
  U* ptr=(U*)realloc(x.ptr,n2);

  check(neq(ptr,nullptr));

  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(U));
  U* ptr=(U*)realloc(x.ptr,n1);
  
  check(neq(ptr,nullptr));

  assign(x.ptr,ptr);

  const int n2=sub(y,x.len);
   
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);

    U* p=x.ptr+n;
    
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(U));
   
   U* p=x.ptr+x.len;
   
   memset(p,0,n3);
  }

  assign(x.len,y);
 }
 else
  stop();
}
