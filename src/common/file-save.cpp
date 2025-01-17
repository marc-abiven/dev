void file_save(const str& x,const str& y)
{
 if(is_file(x))
 {
  const str s=file_read(x);
  
  if(eq(s,y))
   return;
 }
 
 file_write(x,y);
}


