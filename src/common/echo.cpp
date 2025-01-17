tpl integral void echo(const T x)
{
 const str s=to_str(x);
 
 echo(s);
}

void echo(const str& x)
{
 const str s1=to_c("%s");
 const str s2=to_c(x);
 
 check(gte(printf(s1.ptr,s2.ptr),0));
}
