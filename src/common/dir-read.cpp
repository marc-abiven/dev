arr_str dir_read(const str& x)
{
 arr_str r;
 const str path=to_c(x);
 DIR* dir=opendir(path.ptr);
 
 check(neq(dir,nullptr));
 
 while(true)
 {
  const dirent* entry=readdir(dir);
  
  if(eq(entry,nullptr))
   break;
  
  const str base=to_str(entry->d_name);
  
  if(eq(base,"."))
   continue;

  if(eq(base,".."))
   continue;
  
  const str path=path_concat(x,base);
  
  push(r,path);
 }
 
 const int n=closedir(dir);
 
 check(eq(n,0));
 
 sort(r);
 
 return r;
}
