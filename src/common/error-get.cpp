obj error_get()
{
 obj r;
 const char* ptr=strerror(errno);
 const str message=to_str(ptr);
 
 put(r,"number",errno);
 put(r,"message",message);
 
 return r;
}
