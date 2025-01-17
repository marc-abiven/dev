int cpl_count_tpl(const arr& x)
{
 int r=0;
 
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  
  if(is_str(v))
   continue;
   
  const obj& o=at_obj(v);
  const arr& signatures=get_arr(o,"signatures");
   
  for(int j=0;lt(j,signatures.len);j++)
  {
   const var& v=at(signatures,j);
   const str& s=at_str(v);
   
   if(is_tpl(s))
    r=inc(r);
  }
 }
 
 return r;
}

