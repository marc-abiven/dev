//g++ out.cpp -o compile -std=c++20 -fmax-errors=5 -g
//clang++ out.cpp -o compile -g

#include "new"

#include "dirent.h"
#include "errno.h"
#include "execinfo.h"
#include "fcntl.h"
#include "libgen.h"
#include "limits.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "unistd.h"
#include "sys/stat.h"

impl numeric
 char
 int
 double

impl integral
 bool
 char
 int
 double

impl arr
 arr_bool bool
 str char
 arr_int int
 arr_double double
 arr_str str
 arr_obj obj
 arr var

impl convertible
 arr_bool bool
 str char
 arr_int int
 arr_double double
 arr_str str
 arr_obj obj
 arr var
 
impl cell
 bool
 char
 int
 double
 str
 arr 
 obj
 
impl composite
 arr_bool
 str
 arr_int
 arr_double
 arr_str
 arr_obj
 arr
 obj
 var
 fd

impl ptr
 bool
 char
 int
 double
 arr_bool
 str
 arr_int
 arr_double
 arr_str
 arr_obj
 arr
 obj
 var
 fd

tpl arr struct T
{
 U* ptr=nullptr;
 int len=0;
 
 T()
 {
 }
 
 T(const T& x)
 {
  assign(*this,x);
 }

 T(T&& x)
 {
  swap(*this,x);
 }
 
 ~T()
 {
  deinit(*this);
 }
 
 void operator=(const T& x)
 {
  assign(*this,x);
 }
};

enum struct type:char
{
 _empty,
 _bool,
 _char,
 _int,
 _double,
 _str,
 _arr,
 _obj,
};

struct var
{
 type t=type::_empty;
 char b[32]={};
 
 var()
 {
 }
 
 var(const var& x)
 {
  assign(*this,x);
 }

 var(var&& x)
 {
  swap(*this,x);
 }
 
 ~var()
 {
  deinit(*this);
 } 

 void operator=(const var& x)
 {
  assign(*this,x);
 }
};

struct obj
{
 arr_str ks;
 arr vs;
};

struct fd
{
 int n=-1;
 
 fd()
 {
 }
 
 fd(const fd& x)
 {
  stop();
 }
 
 ~fd()
 {
  deinit(*this);
 }

 void operator=(const fd& x)
 {
  stop();
 }
};

inline
 const double start=time_get();
 str process;
