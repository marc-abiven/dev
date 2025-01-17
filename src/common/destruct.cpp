tpl integral void destruct(T* x)
{
}

tpl composite void destruct(T* x)
{
 x->~T();
}
