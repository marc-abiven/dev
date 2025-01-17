str escape(const char x)
{
 str r;
 
 if(eq(x,'\\'))
  append(r,"\\\\");
 else if(eq(x,'\''))
  append(r,"\\'");
 else if(eq(x,'"'))
  append(r,"\\\"");
 else if(eq(x,'\n'))
  append(r,"\\n");
 else if(eq(x,'\r'))
  append(r,"\\r");
 else if(eq(x,'\t'))
  append(r,"\\t");
 else if(between(x,32,126))
  push(r,x);
 else
 {   
  const int n1=64;
  const int n2=inc(n1);
  const int n3=(unsigned char)x;
  char s1[n1]={};
  const str s2=to_c("\\x%02X");
  const int n4=snprintf(s1,n1,s2.ptr,n3);
  
  check(gte(n4,0));
  
  const str s3=to_str(s1);
  
  append(r,s3);
 }  
 
 return r;
}

