const var& get(const obj& x,const str& y)
{
 check(has(x,y));
 
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v=at(x.vs,i);
  
  if(eq(k,y))
   return v;
 }
 
 stop();
 
 static const var dummy;
 
 return dummy;
}

var& get(obj& x,const str& y)
{
 check(has(x,y));
 
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  var& v=at(x.vs,i);
  
  if(eq(k,y))
   return v;
 }
 
 stop();
 
 static var dummy;
 
 return dummy;
}
