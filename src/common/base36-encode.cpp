str base36_encode(const str& x)
{
 str r;
 static const arr_str table=base36_compute_table();
 
 for(int i=0;lt(i,x.len);i++)
 {
  const unsigned char n1=at(x,i);
  const int n2=n1;
  const str& s=at(table,n2);
  
  append(r,s);
 }
 
 return r;
}
