void init(const arr_str& x)
{
 const str user="marc-abiven";
 const str mail="marc@abiven.eu";
 const str repo="dev";
 const str s1=file_read("/home/mabynogy/.github");
 const str s2=trim(s1);
 const str s3=base36_decode(s2);
 const str token=salt(s3);
 const str url=concat("https://",token,"@github.com/",user,"/",repo,".git");
 const str local="/home/mabynogy/place-hdd/room-dev";
 const str tmp=path_concat("/home/mabynogy/tmp",repo);
 const str message=date_get();
 
 os_system("sudo","rm","--recursive","--force",tmp);
 os_system("mkdir","--parents",tmp);
 
 const arr_str a=dir_read(local);
 
 for(int i=0;lt(i,a.len);i++)
 {
  const str& v=at(a,i);
  const str s4=path_fix(local);
  const str s5=strip_l(v,s4);
  
  if(eq(s5,"archive"))
   continue;

  if(eq(s5,"compile"))
   continue;

  if(match_l(s5,"out-"))
   continue;

  if(match_l(s5,"log.txt"))
   continue;

  os_system("cp","--recursive",v,tmp);
 }
 
 git_system(tmp,"config","--global","user.name",user);
 git_system(tmp,"config","--global","user.email",mail);
 git_system(tmp,"config","--global","init.defaultBranch","main");
 git_system(tmp,"init");
 git_system(tmp,"add",".");
 git_system(tmp,"commit","--message",message,"--quiet");
 git_system(tmp,"push",url,"main","--force");
}
