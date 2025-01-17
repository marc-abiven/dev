bool is_tpl(const str& x)
{
 const arr_str a=split(x," ");
 const str s=front(a);
 
 return eq(s,"tpl");
}
