arr_str cpl_code(const arr& x)
{
 fn arr_str inline_code(const arr& x)
 {
  arr_str r;
  
  for(int i=0;lt(i,x.len);i++)
  {
   const var& v=at(x,i);
   
   if(is_str(v))
    continue;
    
   if(is_struct(v))
    continue;
   
   if(is_inline(v))
   {
    const obj& o=at_obj(v);
    const arr& body=get_arr(o,"body");
    
    for(int j=0;lt(j,body.len);j++)
    {
     const var& v=at(body,j);
     const str& s1=at_str(v);
     const str s2=unindent(s1);
     
     push(r,s2);
    }
    
    continue;
   }
   
   const obj& o=at_obj(v);
   const str& signature=get_str(o,"signature");
   const arr& body=get_arr(o,"body");
    
   push(r,signature);
   append(r,body);
  }
  
  return r;
 }
 
 fn arr_str replace_lit(const arr_str& x)
 {
  arr_str r;
  arr_str strings;
  arr_str lines;
  
  for(int i=0;lt(i,x.len);i++)
  {
   const str& v=at(x,i);
   const arr_str inputs=scan(v);
   arr_str outputs;
   
   for(int j=0;lt(j,inputs.len);j++)
   {
    const str& v=at(inputs,j);
    
    if(is_lit(v))
    {
     int n=find(strings,v);
     
     if(lt(n,0))
     {
      assign(n,strings.len);
      push(strings,v);
     }
     
     str key="_s";
     const str s=to_str(n);
     
     append(key,s);
     
     push(outputs,key);
    }
    else
     push(outputs,v);
   }
   
   const str line=join(outputs,"");
   
   push(lines,line);   
  }
  
  for(int i=0;lt(i,strings.len);i++)
  {
   const str& v=at(strings,i);
   
   str key="_s";
   const str s1=to_str(i);
   
   append(key,s1);
   
   const str s2=concat("const str ",key,"=to_str(",v,");");
   
   push(r,s2);
  }
  
  append(r,lines);
  
  return r;
 }
 
 const arr_str a=inline_code(x);
 
 return replace_lit(a);
}

