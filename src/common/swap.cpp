void swap(void*& x,void*& y)
{
 void* v=x;
 
 x=y;
 y=v;
}

tpl ptr void swap(T*& x,T*& y)
{
 T* v=x;
 
 x=y;
 y=v;
}

tpl integral void swap(T& x,T& y)
{
 T v=x;
 
 x=y;
 y=v;
}

tpl arr void swap(T& x,T& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}

void swap(obj& x,obj& y)
{
 swap(x.ks,y.ks);
 swap(x.vs,y.vs);
}

void swap(var& x,var& y)
{
 swap((char&)x.t,(char&)y.t);
 
 for(int i=0;lt(i,sizeof(x.b));i++)
 {
  swap(x.b[i],y.b[i]);
 }
}
