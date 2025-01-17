tpl arr T detach(T& x)
{
 T r;
 
 swap(r,x);
 
 return r;
}

int detach(fd& x)
{
 int r=-1;
 
 swap(r,x.n);
 
 return r;
}
