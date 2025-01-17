double time_get()
{
 timespec data; 
 const int n=clock_gettime(CLOCK_REALTIME,&data);
 
 check(eq(n,0));
 
 const double billion=1e9;
 const double nano1=data.tv_nsec;
 const double nano2=div_(nano1,billion);
 const double second=data.tv_sec;
 
 return add(second,nano2);
}

