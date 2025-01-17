arr_str split(const str& x)
{
 return split(x,"\n");
}

arr_str split(const str& x,const str& y)
{
 arr_str r;
 str s1=x;
 str s2;
 
 while(is_full(s1))
 {
  if(match_l(s1,y))
  {
   shift(s1,y.len);
   push(r,s2);
   clear(s2);
   
   continue;
  }
  
  const char c=shift(s1);
  
  push(s2,c);
 }
 
 push(r,s2);
 
 return r;
}

arr_str split(const arr_str& x,const str& y)
{
 arr_str r;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  const arr_str a=split(v,y);
  
  append(r,a);
 }
 
 return r;
}
