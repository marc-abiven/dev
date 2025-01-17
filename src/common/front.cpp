tpl arr U& front(T& x)
tpl arr const U& front(const T& x)
{
 return at(x,0);
}

tpl arr void front(T& x,const U& y)
{
 at(x,0,y);
}
