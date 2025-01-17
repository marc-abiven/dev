arr_str base36_compute_table()
{
 arr_str r;
 const str s1="abcdefghijklmnopqrstuvwxyz0123456789";
 
 for(int i=0;lt(i,256);i++)
 {
  const int n1=div_(i,36);
  const int n2=mod(i,36);
  const char c1=at(s1,n1);
  const char c2=at(s1,n2);
  
  str s2;
  
  push(s2,c1);
  push(s2,c2);
  push(r,s2);
 }
 
 return r;
}
 
