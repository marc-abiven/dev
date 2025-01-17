str date_get()
{
 const time_t now=time(nullptr);
 const tm o=*gmtime(&now);
 const str day=to_str(o.tm_mday);
 const int n1=inc(o.tm_mon);
 const str month=to_str(n1);
 const int n2=add(o.tm_year,1900);
 const str year=to_str(n2);
 
 return concat(year,"/",month,"/",day);
}
