str repeat(const str& x,const int y)
{
 check(gte(y,0));
 
 str r;
 
 for(int i=0;lt(i,y);i++)
 {
  append(r,x);
 }
 
 return r;
}
