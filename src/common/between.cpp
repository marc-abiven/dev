bool between(const int x,const int y,const int z)
{
 check(lte(y,z));
 
 if(lt(x,y))
  return false;

 if(gt(x,z))
  return false;
  
 return true;
}
