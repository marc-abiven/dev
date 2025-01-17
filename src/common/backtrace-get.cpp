arr backtrace_get()
{
 arr r;
 const int n1=1024;
 void* a[n1]={};
 const int n2=backtrace(a,n1);
 
 check(gte(n2,0));
 
 char** ptr=backtrace_symbols(a,n2);
 
 check(neq(ptr,nullptr));
 
 const str s=to_str(source);
 const arr_str lines=split(s);
 
 for(int i=0;lt(i,n2);i++)
 {
  const char* v=ptr[i];
  const str s1=to_str(v);
  const arr_str a1=split(s1,"(");
  const arr_str a2=split(a1,")");
  const arr_str a3=split(a2,"+");

  const str& s2=front(a3);
  const str path=path_real(s2);
  
  if(neq(path,process))
   continue;
   
  const str& mangled=at(a3,1);

  const arr_str a4=to_arr("c++filt",mangled);
  const str s3=join(a4," ");
  const str fn=os_execute(s3);
  const void* ptr=a[i];
  const str s4=to_str(ptr);
  const arr_str a5=to_arr("addr2line","--exe",process,s4);
  const str s5=join(a5," ");
  const str marker=os_execute(s5);
  
  if(match_l(marker,"?"))
   continue;
  
  const arr_str a6=split(marker,":");
  const arr_str a7=split(a6," ");
  const str& number=at(a7,1);

  obj o;

  put(o,"fn",fn);
  
  if(!match_l(number,"?"))
  {
   const int n1=to_int(number);
   const int n2=dec(n1);
   const str line=at(lines,n2);
   const str s6=trim(line);

   put(o,"number",n1);
   put(o,"code",s6);
  }
  
  push(r,o);
 }
 
 free(ptr);
 
 return r;
}
