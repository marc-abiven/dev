tpl convertible void put(obj& x,const str& y,const T& z)
{
 arr a;
 
 for(int i=0;lt(i,z.len);i++)
 {
  const U& v1=at(z,i);
  const var v2=to_var(v1);
  
  push(a,v2);
 }
 
 put(x,y,a);
}

tpl cell void put(obj& x,const str& y,const T& z)
{
 const var v=to_var(z);
 
 put(x,y,v);
}

void put(obj& x,const str& y,const var& z)
{
 check(!has(x,y));

 push(x.ks,y);
 push(x.vs,z);
}
