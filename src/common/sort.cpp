tpl arr void sort(T& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  
  const U& ptr1=*(U*)x;
  const U& ptr2=*(U*)y;
  
  return cmp(ptr1,ptr2);
 };
 
 qsort(x.ptr,x.len,sizeof(U),compare);
}
