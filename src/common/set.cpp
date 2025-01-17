tpl convertible void set(obj& x,const str& y,const T& z)
{
 arr a;
 
 for(int i=0;lt(i,z.len);i++)
 {
  const U& v1=at(z,i);
  const var v2=to_var(v1);
  
  push(a,v2);
 }
 
 set(x,y,a);
}

tpl cell void set(obj& x,const str& y,const T& z)
{
 const var v=to_var(z);
 
 set(x,y,v);
}

void set(obj& x,const str& y,const var& z)
{
 bool done=false;
 
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  var& v=at(x.vs,i);

  if(eq(k,y))
  {
   check(!done);
   
   at(x.vs,i,z);
   
   assign(done,true);
   
   break;
  }
 }
 
 if(!done)
  put(x,y,z);
}
