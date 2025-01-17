tpl integral bool neq(const T x,const T y)
bool neq(const char x,const int y)
bool neq(const double x,const int y)
bool neq(const void* x,const void* y)
{
 return x!=y;
}

tpl composite bool neq(const T& x,const T& y)
{
 stop();
 
 return false;
}

tpl arr bool neq(const T& x,const T& y)
{
 const int n=cmp(x,y);
 
 return neq(n,0);
}

bool neq(const var& x,const var& y)
bool neq(const obj& x,const obj& y)
{
 const bool b=eq(x,y);
 
 return not(b);
}

