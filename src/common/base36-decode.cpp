str base36_decode(const str& x)
{
 str r;
 str s1=x;
 static const arr_str table=base36_compute_table(); 
 
 while(is_full(s1))
 {
  const str s2=slice_l(s1,2);
  const int n=find(table,s2);
  
  check(between(n,0,255));
  
  push(r,n);
  shift(s1,2);
 }

 return r;
}
