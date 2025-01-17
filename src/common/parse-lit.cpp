bool parse_lit(str& x,const str& y)
{
 clear(x);
 
 str input=y;
 str output;

 if(!match_l(input,"\""))
  return false;

 shift(input);
 
 while(is_full(input))
 {
  if(match_l(input,"\""))
   break;  
  else if(match_l(input,"\\n"))
  {
   push(output,'\n');
   shift(input,2);
  }
  else if(match_l(input,"\\r"))
  {
   push(output,'\r');
   shift(input,2);
  }
  else if(match_l(input,"\\t"))
  {
   push(output,'\t');
   shift(input,2);
  }
  else if(match_l(input,"\\x"))
  {
   shift(input,2);

   if(lt(input.len,2))
    return false;
    
   const str s=slice_l(input,2);

   shift(input,2);
   
   const int n=to_int(s);
   
   check(between(n,0,255));
   
   const char c=n;
   
   push(output,c);
  }
  else if(match_l(input,"\\"))
  {
   shift(input);

   if(is_empty(input))
    return false;
       
   const char c=shift(input);
   
   push(output,c);
  }
  else
  {
   const char c=shift(input);
   
   push(output,c);
  }
 }

 if(!match_l(input,"\""))
  return false;
  
 shift(input);
 
 if(is_full(input))
  return false;
  
 swap(x,output);
 
 return true;
}
