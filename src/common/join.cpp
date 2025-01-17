str join(const arr_str& x)
{
 return join(x,"\n");
}

str join(const arr_str& x,const str& y)
{
 str r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  
  append(r,v);

  if(!is_last(x,i))
   append(r,y);
 }
 
 return r;
}
