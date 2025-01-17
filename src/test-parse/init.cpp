void init(const arr_str& x)
{
 const str s=to_str(source);
 const arr_str a=split(s);
 
 for(int i=0;lt(i,a.len);i++)
 {
  const str& v=at(a,i);
  const arr_str a=scan(v);
  
  for(int j=0;lt(j,a.len);j++)
  {
   const str& v=at(a,j);
   
   if(is_lit_char(v))
    dump(v);
  }
  
  //dump(v);
  //dump(a);
 }
 
 print("ok");
}
