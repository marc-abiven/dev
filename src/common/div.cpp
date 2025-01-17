tpl numeric T div_(const T x,const T y)
char div_(const char x,const int y)
double div_(const double x,const int y)
{
 check(neq(y,0));
 
 return x/y;
}
