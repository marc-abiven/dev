void init(const arr_str& x)
{
 if(is_empty(x))
 {
  arr_str a;
  
  push(a,"compile");
  
  return init(a);
 }
 
 arr_str a1=copy(x);
 const str name=shift(a1);
 
 bool run=false;
 str compiler="gcc";
 
 if(extract(a1,"--run"))
  run=true;
  
 if(extract(a1,"--gcc"))
  assign(compiler,"gcc");

 if(extract(a1,"--clang"))
  assign(compiler,"clang");
  
 if(is_full(a1))
 {
  print("unhandled!");
  dump(a1);
  
  return;
 }
 
 const str s1=path_concat("src",name);
 
 check(is_dir(s1));

 arr_str a2=cpl_import("src/common"); 
 const arr_str a3=cpl_import(s1);

 append(a2,a3);
 
 arr a4;
 
 for(int i=0;lt(i,a2.len);i++)
 {
  const str& v=at(a2,i);
  const str s1=to_lit(v);
  
  echo("file");
  space();
  print(s1);
  
  const str s2=file_read(v);
  const arr a=cpl_parse(s2);
  
  append(a4,a);
 }
 
 const arr a5=cpl_implement(a4);
 const arr a6=cpl_deduplicate(a5);
 const arr a7=cpl_flatten(a6);
 const arr_str a8=cpl_forward(a7);
 const arr_str a9=cpl_include(a7);
 const arr_str a10=cpl_prototype(a7);
 const arr_str a11=cpl_struct(a7);
 const arr_str a12=cpl_code(a7);
 const str out=concat("out-",name,".cpp");
 const str binary=concat("out-",name);
 const arr_str a13=to_arr("g++",out,"-o",binary,"-std=c++23","-fmax-errors=5","-g","-O3","-rdynamic","-no-pie");
 const str gcc=join(a13," ");
 const str gcc_instruction=concat("//",gcc);
 const arr_str a14=to_arr("clang++",out,"-o",binary,"-std=c++2b","-ferror-limit=5","-gdwarf-4","-O3","-rdynamic","-no-pie");
  //Clang Generates DWARF Info That Valgrind Can't Read
   //https://github.com/llvm/llvm-project/issues/56550
 const str clang=join(a14," ");
 const str clang_instruction=concat("//",clang);
 const str date=date_get();
 const str generate=concat("//generated ",date);
 const int generic=cpl_count_tpl(a4);
 arr_str result;
 
 push(result,gcc_instruction);
 push(result,clang_instruction);
 push(result,generate);

 push(result,"//source");
 push(result,"extern const char* source;");

 push(result,"//forward");
 append(result,a8);

 push(result,"//include");
 append(result,a9);

 push(result,"//prototype");
 append(result,a10);

 push(result,"//struct");
 append(result,a11);

 push(result,"//code");
 append(result,a12);
 
 const str source=join(result);
 const str s2=to_lit(source);
 const str s3=concat("const char* source=",s2,";");
 
 push(result,"//definition");
 push(result,s3); 
 
 echo("file");
 space();
 print(a2.len);
 
 echo("struct");
 space();
 print(a8.len);
 
 echo("fn");
 space();
 print(a10.len);
 
 echo("generic");
 space();
 print(generic);
 
 echo("sloc");
 space();
 print(result.len);

 const str content=join(result);
 
 file_save(out,content);

 const double n1=time_now();
 const str s4=to_str(n1);
 const str s5=concat(s4,"s");
 
 echo("generate");
 space();
 print(s5);

 if(is_file(binary))
  path_unlink(binary);
 
 const double n2=time_now();
 
 if(eq(compiler,"gcc")) 
  os_system(gcc);
 else if(eq(compiler,"clang"))
  os_system(clang);
 else
  stop();
  
 
 const double n3=time_now();
 const double n4=sub(n3,n2);
 const str s6=to_str(n4);
 const str s7=concat(s6,"s");
 
 echo("compile");
 space();
 print(s7);

 if(is_file(binary))
 {
  const int n1=file_size(binary);
  const int n2=div_(n1,1024);
  const str s1=to_str(n2);
  const str s2=concat(s2,"Kb");
  
  echo("binary");
  space();
  print(s2);
  
  if(run)
  { 
   const str path=path_real(binary);
   
   os_system("valgrind","-s","--track-origins=yes","--leak-check=full","--show-leak-kinds=all",path);
  }
 } 
}
