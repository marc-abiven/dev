//g++ out-compile.cpp -o out-compile -std=c++23 -fmax-errors=5 -g -O3 -rdynamic -no-pie
//clang++ out-compile.cpp -o out-compile -std=c++2b -ferror-limit=5 -gdwarf-4 -O3 -rdynamic -no-pie
//generated 2025/1/17
//source
extern const char* source;
//forward
struct arr_bool;
struct str;
struct arr_int;
struct arr_double;
struct arr_str;
struct arr_obj;
struct arr;
enum struct type:char;
struct var;
struct obj;
struct fd;
//include
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
//prototype
char add(const char x,const char y);
int add(const int x,const int y);
double add(const double x,const double y);
char add(const char x,const int y);
double add(const double x,const int y);
void allocate(arr_bool& x,const int y);
void allocate(str& x,const int y);
void allocate(arr_int& x,const int y);
void allocate(arr_double& x,const int y);
void allocate(arr_str& x,const int y);
void allocate(arr_obj& x,const int y);
void allocate(arr& x,const int y);
void append(arr_bool& x,const arr_bool& y);
void append(str& x,const str& y);
void append(arr_int& x,const arr_int& y);
void append(arr_double& x,const arr_double& y);
void append(arr_str& x,const arr_str& y);
void append(arr_obj& x,const arr_obj& y);
void append(arr& x,const arr& y);
void append(arr_str& x,const arr& y);
void assign(void*& x,void*& y);
void assign(bool*& x,bool*& y);
void assign(char*& x,char*& y);
void assign(int*& x,int*& y);
void assign(double*& x,double*& y);
void assign(arr_bool*& x,arr_bool*& y);
void assign(str*& x,str*& y);
void assign(arr_int*& x,arr_int*& y);
void assign(arr_double*& x,arr_double*& y);
void assign(arr_str*& x,arr_str*& y);
void assign(arr_obj*& x,arr_obj*& y);
void assign(arr*& x,arr*& y);
void assign(obj*& x,obj*& y);
void assign(var*& x,var*& y);
void assign(fd*& x,fd*& y);
void assign(bool& x,const bool y);
void assign(char& x,const char y);
void assign(int& x,const int y);
void assign(double& x,const double y);
void assign(arr_bool& x,const arr_bool& y);
void assign(str& x,const str& y);
void assign(arr_int& x,const arr_int& y);
void assign(arr_double& x,const arr_double& y);
void assign(arr_str& x,const arr_str& y);
void assign(arr_obj& x,const arr_obj& y);
void assign(arr& x,const arr& y);
void assign(var& x,const var& y);
void assign(obj& x,const obj& y);
arr& at_arr(var& x);
const arr& at_arr(const var& x);
bool& at_bool(var& x);
const bool& at_bool(const var& x);
char& at_char(var& x);
const char& at_char(const var& x);
double& at_double(var& x);
const double& at_double(const var& x);
int& at_int(var& x);
const int& at_int(const var& x);
obj& at_obj(var& x);
const obj& at_obj(const var& x);
str& at_str(var& x);
const str& at_str(const var& x);
bool& at(arr_bool& x,const int y);
char& at(str& x,const int y);
int& at(arr_int& x,const int y);
double& at(arr_double& x,const int y);
str& at(arr_str& x,const int y);
obj& at(arr_obj& x,const int y);
var& at(arr& x,const int y);
const bool& at(const arr_bool& x,const int y);
const char& at(const str& x,const int y);
const int& at(const arr_int& x,const int y);
const double& at(const arr_double& x,const int y);
const str& at(const arr_str& x,const int y);
const obj& at(const arr_obj& x,const int y);
const var& at(const arr& x,const int y);
void at(arr_bool& x,const int y,const bool& z);
void at(str& x,const int y,const char& z);
void at(arr_int& x,const int y,const int& z);
void at(arr_double& x,const int y,const double& z);
void at(arr_str& x,const int y,const str& z);
void at(arr_obj& x,const int y,const obj& z);
void at(arr& x,const int y,const var& z);
bool& back(arr_bool& x);
char& back(str& x);
int& back(arr_int& x);
double& back(arr_double& x);
str& back(arr_str& x);
obj& back(arr_obj& x);
var& back(arr& x);
const bool& back(const arr_bool& x);
const char& back(const str& x);
const int& back(const arr_int& x);
const double& back(const arr_double& x);
const str& back(const arr_str& x);
const obj& back(const arr_obj& x);
const var& back(const arr& x);
void back(arr_bool& x,const bool& y);
void back(str& x,const char& y);
void back(arr_int& x,const int& y);
void back(arr_double& x,const double& y);
void back(arr_str& x,const str& y);
void back(arr_obj& x,const obj& y);
void back(arr& x,const var& y);
arr backtrace_get();
bool between(const int x,const int y,const int z);
void check(const bool x);
void clear(bool& x);
void clear(char& x);
void clear(int& x);
void clear(double& x);
void clear(arr_bool& x);
void clear(str& x);
void clear(arr_int& x);
void clear(arr_double& x);
void clear(arr_str& x);
void clear(arr_obj& x);
void clear(arr& x);
void clear(var& x);
void clear(obj& x);
void clear(fd& x);
int cmp(const fd& x,const fd& y);
int cmp(const bool x,const bool y);
int cmp(const char x,const char y);
int cmp(const int x,const int y);
int cmp(const double x,const double y);
int cmp(const var& x,const var& y);
int cmp(const arr_bool& x,const arr_bool& y);
int cmp(const arr_int& x,const arr_int& y);
int cmp(const arr_double& x,const arr_double& y);
int cmp(const arr_str& x,const arr_str& y);
int cmp(const arr_obj& x,const arr_obj& y);
int cmp(const arr& x,const arr& y);
int cmp(const str& x,const str& y);
int cmp(const obj& x,const obj& y);
str concat(const str& x,const str& y);
str concat(const str& x,const str& y,const str& z);
str concat(const str& x,const str& y,const str& z,const str& a);
str concat(const str& x,const str& y,const str& z,const str& a,const str& b);
str concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c);
str concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d);
void construct(bool* x);
void construct(char* x);
void construct(int* x);
void construct(double* x);
void construct(arr_bool* x);
void construct(str* x);
void construct(arr_int* x);
void construct(arr_double* x);
void construct(arr_str* x);
void construct(arr_obj* x);
void construct(arr* x);
void construct(obj* x);
void construct(var* x);
void construct(fd* x);
bool contain(const arr_bool& x,const bool& y);
bool contain(const str& x,const char& y);
bool contain(const arr_int& x,const int& y);
bool contain(const arr_double& x,const double& y);
bool contain(const arr_str& x,const str& y);
bool contain(const arr_obj& x,const obj& y);
bool contain(const arr& x,const var& y);
bool contain(const str& x,const str& y);
arr_bool copy(const arr_bool& x);
str copy(const str& x);
arr_int copy(const arr_int& x);
arr_double copy(const arr_double& x);
arr_str copy(const arr_str& x);
arr_obj copy(const arr_obj& x);
arr copy(const arr& x);
void copy(arr_bool& x,const arr_bool& y);
void copy(str& x,const str& y);
void copy(arr_int& x,const arr_int& y);
void copy(arr_double& x,const arr_double& y);
void copy(arr_str& x,const arr_str& y);
void copy(arr_obj& x,const arr_obj& y);
void copy(arr& x,const arr& y);
void copy(arr_bool& x,const int y,const arr_bool& z,const int a,const int b);
void copy(str& x,const int y,const str& z,const int a,const int b);
void copy(arr_int& x,const int y,const arr_int& z,const int a,const int b);
void copy(arr_double& x,const int y,const arr_double& z,const int a,const int b);
void copy(arr_str& x,const int y,const arr_str& z,const int a,const int b);
void copy(arr_obj& x,const int y,const arr_obj& z,const int a,const int b);
void copy(arr& x,const int y,const arr& z,const int a,const int b);
int count_line(const str& x);
str date_get();
char dec(const char x);
int dec(const int x);
double dec(const double x);
void deinit(arr_bool& x);
void deinit(str& x);
void deinit(arr_int& x);
void deinit(arr_double& x);
void deinit(arr_str& x);
void deinit(arr_obj& x);
void deinit(arr& x);
void deinit(obj& x);
void deinit(var& x);
void deinit(fd& x);
void destruct(bool* x);
void destruct(char* x);
void destruct(int* x);
void destruct(double* x);
void destruct(arr_bool* x);
void destruct(str* x);
void destruct(arr_int* x);
void destruct(arr_double* x);
void destruct(arr_str* x);
void destruct(arr_obj* x);
void destruct(arr* x);
void destruct(obj* x);
void destruct(var* x);
void destruct(fd* x);
arr_bool detach(arr_bool& x);
str detach(str& x);
arr_int detach(arr_int& x);
arr_double detach(arr_double& x);
arr_str detach(arr_str& x);
arr_obj detach(arr_obj& x);
arr detach(arr& x);
int detach(fd& x);
void dir_change(const str& x);
str dir_current();
arr_str dir_read(const str& x);
char div_(const char x,const char y);
int div_(const int x,const int y);
double div_(const double x,const double y);
char div_(const char x,const int y);
double div_(const double x,const int y);
void drop(arr_bool& x);
void drop(str& x);
void drop(arr_int& x);
void drop(arr_double& x);
void drop(arr_str& x);
void drop(arr_obj& x);
void drop(arr& x);
void drop(arr_bool& x,const int y);
void drop(str& x,const int y);
void drop(arr_int& x,const int y);
void drop(arr_double& x,const int y);
void drop(arr_str& x,const int y);
void drop(arr_obj& x,const int y);
void drop(arr& x,const int y);
void dump(const bool x);
void dump(const char x);
void dump(const int x);
void dump(const double x);
void dump(const void* x);
void dump(const arr_bool& x);
void dump(const str& x);
void dump(const arr_int& x);
void dump(const arr_double& x);
void dump(const arr_str& x);
void dump(const arr_obj& x);
void dump(const arr& x);
void dump(const var& x);
void dump(const obj& x);
void echo(const bool x);
void echo(const char x);
void echo(const int x);
void echo(const double x);
void echo(const str& x);
bool eq(const bool x,const bool y);
bool eq(const char x,const char y);
bool eq(const int x,const int y);
bool eq(const double x,const double y);
bool eq(const char x,const int y);
bool eq(const double x,const int y);
bool eq(const void* x,const void* y);
bool eq(const fd& x,const fd& y);
bool eq(const arr_bool& x,const arr_bool& y);
bool eq(const str& x,const str& y);
bool eq(const arr_int& x,const arr_int& y);
bool eq(const arr_double& x,const arr_double& y);
bool eq(const arr_str& x,const arr_str& y);
bool eq(const arr_obj& x,const arr_obj& y);
bool eq(const arr& x,const arr& y);
bool eq(const var& x,const var& y);
bool eq(const obj& x,const obj& y);
obj error_get();
str escape(const char x);
bool every(const arr_bool& x,bool (*const y)(const bool& x));
bool every(const str& x,bool (*const y)(const char& x));
bool every(const arr_int& x,bool (*const y)(const int& x));
bool every(const arr_double& x,bool (*const y)(const double& x));
bool every(const arr_str& x,bool (*const y)(const str& x));
bool every(const arr_obj& x,bool (*const y)(const obj& x));
bool every(const arr& x,bool (*const y)(const var& x));
bool extract(arr_bool& x,const bool& y);
bool extract(str& x,const char& y);
bool extract(arr_int& x,const int& y);
bool extract(arr_double& x,const double& y);
bool extract(arr_str& x,const str& y);
bool extract(arr_obj& x,const obj& y);
bool extract(arr& x,const var& y);
str file_read(const str& x);
void file_save(const str& x,const str& y);
int file_size(const str& x);
void file_write(const str& x,const str& y);
int find(const arr_bool& x,const bool& y);
int find(const str& x,const char& y);
int find(const arr_int& x,const int& y);
int find(const arr_double& x,const double& y);
int find(const arr_str& x,const str& y);
int find(const arr_obj& x,const obj& y);
int find(const arr& x,const var& y);
bool& front(arr_bool& x);
char& front(str& x);
int& front(arr_int& x);
double& front(arr_double& x);
str& front(arr_str& x);
obj& front(arr_obj& x);
var& front(arr& x);
const bool& front(const arr_bool& x);
const char& front(const str& x);
const int& front(const arr_int& x);
const double& front(const arr_double& x);
const str& front(const arr_str& x);
const obj& front(const arr_obj& x);
const var& front(const arr& x);
void front(arr_bool& x,const bool& y);
void front(str& x,const char& y);
void front(arr_int& x,const int& y);
void front(arr_double& x,const double& y);
void front(arr_str& x,const str& y);
void front(arr_obj& x,const obj& y);
void front(arr& x,const var& y);
const arr& get_arr(const obj& x,const str& y);
arr& get_arr(obj& x,const str& y);
bool get_bool(const obj& x,const str& y);
char get_char(const obj& x,const str& y);
double get_double(const obj& x,const str& y);
int get_indent(const str& x);
int get_int(const obj& x,const str& y);
const obj& get_obj(const obj& x,const str& y);
obj& get_obj(obj& x,const str& y);
const str& get_str(const obj& x,const str& y);
str& get_str(obj& x,const str& y);
const var& get(const obj& x,const str& y);
var& get(obj& x,const str& y);
bool gt(const bool x,const bool y);
bool gt(const char x,const char y);
bool gt(const int x,const int y);
bool gt(const double x,const double y);
bool gt(const char x,const int y);
bool gt(const double x,const int y);
bool gt(const arr_bool& x,const arr_bool& y);
bool gt(const str& x,const str& y);
bool gt(const arr_int& x,const arr_int& y);
bool gt(const arr_double& x,const arr_double& y);
bool gt(const arr_str& x,const arr_str& y);
bool gt(const arr_obj& x,const arr_obj& y);
bool gt(const arr& x,const arr& y);
bool gt(const var& x,const var& y);
bool gt(const obj& x,const obj& y);
bool gte(const bool x,const bool y);
bool gte(const char x,const char y);
bool gte(const int x,const int y);
bool gte(const double x,const double y);
bool gte(const char x,const int y);
bool gte(const double x,const int y);
bool gte(const arr_bool& x,const arr_bool& y);
bool gte(const str& x,const str& y);
bool gte(const arr_int& x,const arr_int& y);
bool gte(const arr_double& x,const arr_double& y);
bool gte(const arr_str& x,const arr_str& y);
bool gte(const arr_obj& x,const arr_obj& y);
bool gte(const arr& x,const arr& y);
bool gte(const var& x,const var& y);
bool gte(const obj& x,const obj& y);
bool has(const obj& x,const str& y);
arr_bool head(const arr_bool& x,const int y);
str head(const str& x,const int y);
arr_int head(const arr_int& x,const int y);
arr_double head(const arr_double& x,const int y);
arr_str head(const arr_str& x,const int y);
arr_obj head(const arr_obj& x,const int y);
arr head(const arr& x,const int y);
char inc(const char x);
int inc(const int x);
double inc(const double x);
bool is_access(const str& x);
bool is_alnum(const char x);
bool is_alnum(const str& x);
bool is_alpha(const char x);
bool is_alpha(const str& x);
bool is_arr(const var& x);
bool is_blank(const char x);
bool is_blank(const str& x);
bool is_bool(const var& x);
bool is_char(const var& x);
bool is_comment(const str& x);
bool is_composite(const bool& x);
bool is_composite(const char& x);
bool is_composite(const int& x);
bool is_composite(const double& x);
bool is_composite(const arr_bool& x);
bool is_composite(const str& x);
bool is_composite(const arr_int& x);
bool is_composite(const arr_double& x);
bool is_composite(const arr_str& x);
bool is_composite(const arr_obj& x);
bool is_composite(const arr& x);
bool is_composite(const obj& x);
bool is_composite(const var& x);
bool is_composite(const fd& x);
bool is_digit(const char x);
bool is_digit(const str& x);
bool is_dir(const str& x);
bool is_double(const var& x);
bool is_empty(const arr_bool& x);
bool is_empty(const str& x);
bool is_empty(const arr_int& x);
bool is_empty(const arr_double& x);
bool is_empty(const arr_str& x);
bool is_empty(const arr_obj& x);
bool is_empty(const arr& x);
bool is_empty(const var& x);
bool is_empty(const obj& x);
bool is_empty(const fd& x);
bool is_file(const str& x);
bool is_fragment(const str& x);
bool is_full(const arr_bool& x);
bool is_full(const str& x);
bool is_full(const arr_int& x);
bool is_full(const arr_double& x);
bool is_full(const arr_str& x);
bool is_full(const arr_obj& x);
bool is_full(const arr& x);
bool is_full(const var& x);
bool is_full(const obj& x);
bool is_full(const fd& x);
bool is_identifier(const str& x);
bool is_int(const var& x);
bool is_integral(const bool& x);
bool is_integral(const char& x);
bool is_integral(const int& x);
bool is_integral(const double& x);
bool is_integral(const arr_bool& x);
bool is_integral(const str& x);
bool is_integral(const arr_int& x);
bool is_integral(const arr_double& x);
bool is_integral(const arr_str& x);
bool is_integral(const arr_obj& x);
bool is_integral(const arr& x);
bool is_integral(const obj& x);
bool is_integral(const var& x);
bool is_integral(const fd& x);
bool is_key(const str& x);
bool is_last(const arr_bool& x,const int y);
bool is_last(const str& x,const int y);
bool is_last(const arr_int& x,const int y);
bool is_last(const arr_double& x,const int y);
bool is_last(const arr_str& x,const int y);
bool is_last(const arr_obj& x,const int y);
bool is_last(const arr& x,const int y);
bool is_line(const str& x);
bool is_lit_char(const str& x);
bool is_lit(const str& x);
bool is_many(const arr_bool& x);
bool is_many(const str& x);
bool is_many(const arr_int& x);
bool is_many(const arr_double& x);
bool is_many(const arr_str& x);
bool is_many(const arr_obj& x);
bool is_many(const arr& x);
bool is_many(const obj& x);
bool is_numeric(const str& x);
bool is_obj(const var& x);
bool is_single(const arr_bool& x);
bool is_single(const str& x);
bool is_single(const arr_int& x);
bool is_single(const arr_double& x);
bool is_single(const arr_str& x);
bool is_single(const arr_obj& x);
bool is_single(const arr& x);
bool is_single(const obj& x);
bool is_space(const char x);
bool is_space(const str& x);
bool is_str(const var& x);
bool is_text(const str& x);
bool is_token(const str& x);
bool is_tuple(const str& x);
bool is_var_integral(const var& x);
str join(const arr_str& x);
str join(const arr_str& x,const str& y);
void ln();
bool lt(const bool x,const bool y);
bool lt(const char x,const char y);
bool lt(const int x,const int y);
bool lt(const double x,const double y);
bool lt(const char x,const int y);
bool lt(const double x,const int y);
bool lt(const arr_bool& x,const arr_bool& y);
bool lt(const str& x,const str& y);
bool lt(const arr_int& x,const arr_int& y);
bool lt(const arr_double& x,const arr_double& y);
bool lt(const arr_str& x,const arr_str& y);
bool lt(const arr_obj& x,const arr_obj& y);
bool lt(const arr& x,const arr& y);
bool lt(const var& x,const var& y);
bool lt(const obj& x,const obj& y);
bool lte(const bool x,const bool y);
bool lte(const char x,const char y);
bool lte(const int x,const int y);
bool lte(const double x,const double y);
bool lte(const char x,const int y);
bool lte(const double x,const int y);
bool lte(const arr_bool& x,const arr_bool& y);
bool lte(const str& x,const str& y);
bool lte(const arr_int& x,const arr_int& y);
bool lte(const arr_double& x,const arr_double& y);
bool lte(const arr_str& x,const arr_str& y);
bool lte(const arr_obj& x,const arr_obj& y);
bool lte(const arr& x,const arr& y);
bool lte(const var& x,const var& y);
bool lte(const obj& x,const obj& y);
int main(const int x,const char** y);
void on_main_890(const arr_str& x);
bool match_l(const str& x,const str& y);
bool match_r(const str& x,const str& y);
char max(const char x,const char y);
int max(const int x,const int y);
double max(const double x,const double y);
char min(const char x,const char y);
int min(const int x,const int y);
double min(const double x,const double y);
void move(arr_bool& x,const int y,const int z,const int a);
void move(str& x,const int y,const int z,const int a);
void move(arr_int& x,const int y,const int z,const int a);
void move(arr_double& x,const int y,const int z,const int a);
void move(arr_str& x,const int y,const int z,const int a);
void move(arr_obj& x,const int y,const int z,const int a);
void move(arr& x,const int y,const int z,const int a);
void move(arr_bool& x,const int y,arr_bool& z,const int a,const int b);
void move(str& x,const int y,str& z,const int a,const int b);
void move(arr_int& x,const int y,arr_int& z,const int a,const int b);
void move(arr_double& x,const int y,arr_double& z,const int a,const int b);
void move(arr_str& x,const int y,arr_str& z,const int a,const int b);
void move(arr_obj& x,const int y,arr_obj& z,const int a,const int b);
void move(arr& x,const int y,arr& z,const int a,const int b);
char mul(const char x,const char y);
int mul(const int x,const int y);
double mul(const double x,const double y);
char mul(const char x,const int y);
double mul(const double x,const int y);
bool neq(const bool x,const bool y);
bool neq(const char x,const char y);
bool neq(const int x,const int y);
bool neq(const double x,const double y);
bool neq(const char x,const int y);
bool neq(const double x,const int y);
bool neq(const void* x,const void* y);
bool neq(const fd& x,const fd& y);
bool neq(const arr_bool& x,const arr_bool& y);
bool neq(const str& x,const str& y);
bool neq(const arr_int& x,const arr_int& y);
bool neq(const arr_double& x,const arr_double& y);
bool neq(const arr_str& x,const arr_str& y);
bool neq(const arr_obj& x,const arr_obj& y);
bool neq(const arr& x,const arr& y);
bool neq(const var& x,const var& y);
bool neq(const obj& x,const obj& y);
str os_execute(const str& x);
int os_system(const str& x);
int os_system(const str& x,const str& y);
int os_system(const str& x,const str& y,const str& z);
int os_system(const str& x,const str& y,const str& z,const str& a);
int os_system(const str& x,const str& y,const str& z,const str& a,const str& b);
int os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c);
int os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d);
bool parse_int(int& x,const str& y);
bool parse_lit_char(str& x,const str& y);
bool parse_lit(str& x,const str& y);
str path_base(const str& x);
str path_concat(const str& x,const str& y);
str path_dir(const str& x);
str path_fix(const str& x);
str path_real(const str& x);
void path_unlink(const str& x);
bool pop(arr_bool& x);
char pop(str& x);
int pop(arr_int& x);
double pop(arr_double& x);
str pop(arr_str& x);
obj pop(arr_obj& x);
var pop(arr& x);
void pop(arr_bool& x,const int y);
void pop(str& x,const int y);
void pop(arr_int& x,const int y);
void pop(arr_double& x,const int y);
void pop(arr_str& x,const int y);
void pop(arr_obj& x,const int y);
void pop(arr& x,const int y);
void prepend(arr_bool& x,const arr_bool& y);
void prepend(str& x,const str& y);
void prepend(arr_int& x,const arr_int& y);
void prepend(arr_double& x,const arr_double& y);
void prepend(arr_str& x,const arr_str& y);
void prepend(arr_obj& x,const arr_obj& y);
void prepend(arr& x,const arr& y);
void prepend(arr_str& x,const arr& y);
void print(const bool x);
void print(const char x);
void print(const int x);
void print(const double x);
void print(const void* x);
void print(const str& x);
void push(arr_bool& x,const bool& y);
void push(str& x,const char& y);
void push(arr_int& x,const int& y);
void push(arr_double& x,const double& y);
void push(arr_str& x,const str& y);
void push(arr_obj& x,const obj& y);
void push(arr& x,const var& y);
void push(arr& x,const bool& y);
void push(arr& x,const char& y);
void push(arr& x,const int& y);
void push(arr& x,const double& y);
void push(arr& x,const str& y);
void push(arr& x,const arr& y);
void push(arr& x,const obj& y);
void put(obj& x,const str& y,const arr_bool& z);
void put(obj& x,const str& y,const arr_int& z);
void put(obj& x,const str& y,const arr_double& z);
void put(obj& x,const str& y,const arr_str& z);
void put(obj& x,const str& y,const arr_obj& z);
void put(obj& x,const str& y,const bool& z);
void put(obj& x,const str& y,const char& z);
void put(obj& x,const str& y,const int& z);
void put(obj& x,const str& y,const double& z);
void put(obj& x,const str& y,const str& z);
void put(obj& x,const str& y,const arr& z);
void put(obj& x,const str& y,const obj& z);
void put(obj& x,const str& y,const var& z);
str read(const fd& x);
str read(const fd& x,const int y);
arr_bool reject(const arr_bool& x,const bool& y);
str reject(const str& x,const char& y);
arr_int reject(const arr_int& x,const int& y);
arr_double reject(const arr_double& x,const double& y);
arr_str reject(const arr_str& x,const str& y);
arr_obj reject(const arr_obj& x,const obj& y);
arr reject(const arr& x,const var& y);
void remove(arr_bool& x,const int y);
void remove(str& x,const int y);
void remove(arr_int& x,const int y);
void remove(arr_double& x,const int y);
void remove(arr_str& x,const int y);
void remove(arr_obj& x,const int y);
void remove(arr& x,const int y);
str repeat(const str& x,const int y);
str replace(const str& x,const str& y,const str& z);
arr_str scan(const str& x);
arr_str delimit_891(const str& x);
arr_str group_892(const arr_str& x);
arr_str reduce_893(const arr_str& x);
void set(obj& x,const str& y,const arr_bool& z);
void set(obj& x,const str& y,const arr_int& z);
void set(obj& x,const str& y,const arr_double& z);
void set(obj& x,const str& y,const arr_str& z);
void set(obj& x,const str& y,const arr_obj& z);
void set(obj& x,const str& y,const bool& z);
void set(obj& x,const str& y,const char& z);
void set(obj& x,const str& y,const int& z);
void set(obj& x,const str& y,const double& z);
void set(obj& x,const str& y,const str& z);
void set(obj& x,const str& y,const arr& z);
void set(obj& x,const str& y,const obj& z);
void set(obj& x,const str& y,const var& z);
bool shift(arr_bool& x);
char shift(str& x);
int shift(arr_int& x);
double shift(arr_double& x);
str shift(arr_str& x);
obj shift(arr_obj& x);
var shift(arr& x);
void shift(arr_bool& x,const int y);
void shift(str& x,const int y);
void shift(arr_int& x,const int y);
void shift(arr_double& x,const int y);
void shift(arr_str& x,const int y);
void shift(arr_obj& x,const int y);
void shift(arr& x,const int y);
arr_bool slice_l(const arr_bool& x,const int y);
str slice_l(const str& x,const int y);
arr_int slice_l(const arr_int& x,const int y);
arr_double slice_l(const arr_double& x,const int y);
arr_str slice_l(const arr_str& x,const int y);
arr_obj slice_l(const arr_obj& x,const int y);
arr slice_l(const arr& x,const int y);
arr_bool slice_r(const arr_bool& x,const int y);
str slice_r(const str& x,const int y);
arr_int slice_r(const arr_int& x,const int y);
arr_double slice_r(const arr_double& x,const int y);
arr_str slice_r(const arr_str& x,const int y);
arr_obj slice_r(const arr_obj& x,const int y);
arr slice_r(const arr& x,const int y);
arr_bool slice(const arr_bool& x,const int y);
str slice(const str& x,const int y);
arr_int slice(const arr_int& x,const int y);
arr_double slice(const arr_double& x,const int y);
arr_str slice(const arr_str& x,const int y);
arr_obj slice(const arr_obj& x,const int y);
arr slice(const arr& x,const int y);
arr_bool slice(const arr_bool& x,const int y,const int z);
str slice(const str& x,const int y,const int z);
arr_int slice(const arr_int& x,const int y,const int z);
arr_double slice(const arr_double& x,const int y,const int z);
arr_str slice(const arr_str& x,const int y,const int z);
arr_obj slice(const arr_obj& x,const int y,const int z);
arr slice(const arr& x,const int y,const int z);
void sort(arr_bool& x);
void sort(str& x);
void sort(arr_int& x);
void sort(arr_double& x);
void sort(arr_str& x);
void sort(arr_obj& x);
void sort(arr& x);
void space();
arr_str split(const str& x);
arr_str split(const str& x,const str& y);
arr_str split(const arr_str& x,const str& y);
void stop();
str strip_l(const str& x,const str& y);
str strip_r(const str& x,const str& y);
char sub(const char x,const char y);
int sub(const int x,const int y);
double sub(const double x,const double y);
char sub(const char x,const int y);
double sub(const double x,const int y);
void swap(void*& x,void*& y);
void swap(bool*& x,bool*& y);
void swap(char*& x,char*& y);
void swap(int*& x,int*& y);
void swap(double*& x,double*& y);
void swap(arr_bool*& x,arr_bool*& y);
void swap(str*& x,str*& y);
void swap(arr_int*& x,arr_int*& y);
void swap(arr_double*& x,arr_double*& y);
void swap(arr_str*& x,arr_str*& y);
void swap(arr_obj*& x,arr_obj*& y);
void swap(arr*& x,arr*& y);
void swap(obj*& x,obj*& y);
void swap(var*& x,var*& y);
void swap(fd*& x,fd*& y);
void swap(bool& x,bool& y);
void swap(char& x,char& y);
void swap(int& x,int& y);
void swap(double& x,double& y);
void swap(arr_bool& x,arr_bool& y);
void swap(str& x,str& y);
void swap(arr_int& x,arr_int& y);
void swap(arr_double& x,arr_double& y);
void swap(arr_str& x,arr_str& y);
void swap(arr_obj& x,arr_obj& y);
void swap(arr& x,arr& y);
void swap(obj& x,obj& y);
void swap(var& x,var& y);
arr_bool tail(const arr_bool& x,const int y);
str tail(const str& x,const int y);
arr_int tail(const arr_int& x,const int y);
arr_double tail(const arr_double& x,const int y);
arr_str tail(const arr_str& x,const int y);
arr_obj tail(const arr_obj& x,const int y);
arr tail(const arr& x,const int y);
double time_get();
double time_now();
arr_str to_arr(const str& x);
arr_str to_arr(const str& x,const str& y);
arr_str to_arr(const str& x,const str& y,const str& z);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g);
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g,const str& h);
str to_c(const str& x);
str to_dump(const bool x);
str to_dump(const char x);
str to_dump(const int x);
str to_dump(const double x);
str to_dump(const void* x);
str to_dump(const fd& x);
str to_dump(const arr_bool& x);
str to_dump(const arr_int& x);
str to_dump(const arr_double& x);
str to_dump(const arr_str& x);
str to_dump(const arr_obj& x);
str to_dump(const arr& x);
str to_dump(const str& x);
str to_dump(const var& x);
str to_dump(const obj& x);
int to_int(const str& x);
str to_lit(const bool x);
str to_lit(const int x);
str to_lit(const double x);
str to_lit(const void* x);
str to_lit(const fd& x);
str to_lit(const char x);
str to_lit(const arr_bool& x);
str to_lit(const arr_int& x);
str to_lit(const arr_double& x);
str to_lit(const arr_str& x);
str to_lit(const arr_obj& x);
str to_lit(const arr& x);
str to_lit(const str& x);
str to_lit(const var& x);
str to_lit(const obj& x);
str to_str(const bool x);
str to_str(const char x);
str to_str(const int x);
str to_str(const double x);
str to_str(const double x,const int y);
str to_str(const void* x);
str to_str(const char* x);
str to_str(const arr_bool& x);
str to_str(const arr_int& x);
str to_str(const arr_double& x);
str to_str(const arr_str& x);
str to_str(const arr_obj& x);
str to_str(const arr& x);
str to_str(const str& x);
str to_str(const var& x);
str to_str(const obj& x);
var to_var(const bool x);
var to_var(const char x);
var to_var(const int x);
var to_var(const double x);
var to_var(const str& x);
var to_var(const arr& x);
var to_var(const obj& x);
str trim_l(const str& x);
str trim_r(const str& x);
str trim(const str& x);
str unindent(const str& x);
void unshift(arr_bool& x,const bool& y);
void unshift(str& x,const char& y);
void unshift(arr_int& x,const int& y);
void unshift(arr_double& x,const double& y);
void unshift(arr_str& x,const str& y);
void unshift(arr_obj& x,const obj& y);
void unshift(arr& x,const var& y);
void unshift(arr& x,const bool& y);
void unshift(arr& x,const char& y);
void unshift(arr& x,const int& y);
void unshift(arr& x,const double& y);
void unshift(arr& x,const str& y);
void unshift(arr& x,const arr& y);
void unshift(arr& x,const obj& y);
void write(const fd& x,const str& y);
arr_str cpl_code(const arr& x);
arr_str inline_code_894(const arr& x);
arr_str replace_lit_895(const arr_str& x);
int cpl_count_tpl(const arr& x);
arr cpl_deduplicate(const arr& x);
bool defined_896(const arr& x,const str& y);
arr discard_897(const arr& x,const str& y);
arr cpl_flatten(const arr& x);
obj parse_898(const obj& x,int& y);
arr instantiate_899(const arr& x,const arr& y);
obj lift_900(const obj& x);
arr_str cpl_forward(const arr& x);
arr cpl_implement(const arr& x);
obj parse_901(const arr& x);
arr generate_902(const obj& x,const obj& y);
arr implement_903(const obj& x,const obj& y);
str substitute_904(const str& x,const arr& y);
bool is_impl_905(const var& x);
arr_str cpl_import(const str& x);
arr_str cpl_include(const arr& x);
arr cpl_parse(const str& x);
arr preprocess_906(const str& x);
arr agglomerate_907(const arr& x);
arr_str cpl_prototype(const arr& x);
arr_str cpl_struct(const arr& x);
void init(const arr_str& x);
bool is_inline(const var& x);
bool is_struct(const str& x);
bool is_struct(const var& x);
bool is_tpl(const str& x);
//struct
struct arr_bool
{
 bool* ptr=nullptr;
 int len=0;
 arr_bool()
 {
 }
 arr_bool(const arr_bool& x)
 {
  assign(*this,x);
 }
 arr_bool(arr_bool&& x)
 {
  swap(*this,x);
 }
 ~arr_bool()
 {
  deinit(*this);
 }
 void operator=(const arr_bool& x)
 {
  assign(*this,x);
 }
};
struct str
{
 char* ptr=nullptr;
 int len=0;
 str()
 {
 }
 str(const str& x)
 {
  assign(*this,x);
 }
 str(str&& x)
 {
  swap(*this,x);
 }
 ~str()
 {
  deinit(*this);
 }
 void operator=(const str& x)
 {
  assign(*this,x);
 }
};
struct arr_int
{
 int* ptr=nullptr;
 int len=0;
 arr_int()
 {
 }
 arr_int(const arr_int& x)
 {
  assign(*this,x);
 }
 arr_int(arr_int&& x)
 {
  swap(*this,x);
 }
 ~arr_int()
 {
  deinit(*this);
 }
 void operator=(const arr_int& x)
 {
  assign(*this,x);
 }
};
struct arr_double
{
 double* ptr=nullptr;
 int len=0;
 arr_double()
 {
 }
 arr_double(const arr_double& x)
 {
  assign(*this,x);
 }
 arr_double(arr_double&& x)
 {
  swap(*this,x);
 }
 ~arr_double()
 {
  deinit(*this);
 }
 void operator=(const arr_double& x)
 {
  assign(*this,x);
 }
};
struct arr_str
{
 str* ptr=nullptr;
 int len=0;
 arr_str()
 {
 }
 arr_str(const arr_str& x)
 {
  assign(*this,x);
 }
 arr_str(arr_str&& x)
 {
  swap(*this,x);
 }
 ~arr_str()
 {
  deinit(*this);
 }
 void operator=(const arr_str& x)
 {
  assign(*this,x);
 }
};
struct arr_obj
{
 obj* ptr=nullptr;
 int len=0;
 arr_obj()
 {
 }
 arr_obj(const arr_obj& x)
 {
  assign(*this,x);
 }
 arr_obj(arr_obj&& x)
 {
  swap(*this,x);
 }
 ~arr_obj()
 {
  deinit(*this);
 }
 void operator=(const arr_obj& x)
 {
  assign(*this,x);
 }
};
struct arr
{
 var* ptr=nullptr;
 int len=0;
 arr()
 {
 }
 arr(const arr& x)
 {
  assign(*this,x);
 }
 arr(arr&& x)
 {
  swap(*this,x);
 }
 ~arr()
 {
  deinit(*this);
 }
 void operator=(const arr& x)
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
//code
const str _s0=to_str("(");
const str _s1=to_str(")");
const str _s2=to_str("+");
const str _s3=to_str("c++filt");
const str _s4=to_str(" ");
const str _s5=to_str("addr2line");
const str _s6=to_str("--exe");
const str _s7=to_str("?");
const str _s8=to_str(":");
const str _s9=to_str("fn");
const str _s10=to_str("number");
const str _s11=to_str("code");
const str _s12=to_str("/");
const str _s13=to_str("catch!");
const str _s14=to_str(".");
const str _s15=to_str("..");
const str _s16=to_str("%s");
const str _s17=to_str("message");
const str _s18=to_str("\\\\");
const str _s19=to_str("\\'");
const str _s20=to_str("\\\"");
const str _s21=to_str("\\n");
const str _s22=to_str("\\r");
const str _s23=to_str("\\t");
const str _s24=to_str("\\x%02X");
const str _s25=to_str("//");
const str _s26=to_str("\n");
const str _s27=to_str("s");
const str _s28=to_str("profile");
const str _s29=to_str("var");
const str _s30=to_str("payload");
const str _s31=to_str("r");
const str _s32=to_str("system> ");
const str _s33=to_str("'");
const str _s34=to_str("\'");
const str _s35=to_str("\\x");
const str _s36=to_str("\\");
const str _s37=to_str("\"");
const str _s38=to_str("");
const str _s39=to_str("[]");
const str _s40=to_str("[");
const str _s41=to_str("]");
const str _s42=to_str("#");
const str _s43=to_str("{}");
const str _s44=to_str("{");
const str _s45=to_str("}");
const str _s46=to_str("true");
const str _s47=to_str("false");
const str _s48=to_str("%d");
const str _s49=to_str("%f");
const str _s50=to_str("%p");
const str _s51=to_str("body");
const str _s52=to_str("signature");
const str _s53=to_str("_s");
const str _s54=to_str("const str ");
const str _s55=to_str("=to_str(");
const str _s56=to_str(");");
const str _s57=to_str("signatures");
const str _s58=to_str("overload");
const str _s59=to_str("caller");
const str _s60=to_str("callees");
const str _s61=to_str("_");
const str _s62=to_str(" {");
const str _s63=to_str(" }");
const str _s64=to_str("global");
const str _s65=to_str("local");
const str _s66=to_str(";");
const str _s67=to_str("impl");
const str _s68=to_str("compile");
const str _s69=to_str("gcc");
const str _s70=to_str("--run");
const str _s71=to_str("--gcc");
const str _s72=to_str("--clang");
const str _s73=to_str("clang");
const str _s74=to_str("unhandled!");
const str _s75=to_str("src");
const str _s76=to_str("src/common");
const str _s77=to_str("file");
const str _s78=to_str("out-");
const str _s79=to_str(".cpp");
const str _s80=to_str("g++");
const str _s81=to_str("-o");
const str _s82=to_str("-std=c++23");
const str _s83=to_str("-fmax-errors=5");
const str _s84=to_str("-g");
const str _s85=to_str("-O3");
const str _s86=to_str("-rdynamic");
const str _s87=to_str("-no-pie");
const str _s88=to_str("clang++");
const str _s89=to_str("-std=c++2b");
const str _s90=to_str("-ferror-limit=5");
const str _s91=to_str("-gdwarf-4");
const str _s92=to_str("//generated ");
const str _s93=to_str("//source");
const str _s94=to_str("extern const char* source;");
const str _s95=to_str("//forward");
const str _s96=to_str("//include");
const str _s97=to_str("//prototype");
const str _s98=to_str("//struct");
const str _s99=to_str("//code");
const str _s100=to_str("const char* source=");
const str _s101=to_str("//definition");
const str _s102=to_str("struct");
const str _s103=to_str("generic");
const str _s104=to_str("sloc");
const str _s105=to_str("generate");
const str _s106=to_str("Kb");
const str _s107=to_str("binary");
const str _s108=to_str("valgrind");
const str _s109=to_str("-s");
const str _s110=to_str("--track-origins=yes");
const str _s111=to_str("--leak-check=full");
const str _s112=to_str("--show-leak-kinds=all");
const str _s113=to_str("inline");
const str _s114=to_str("struct ");
const str _s115=to_str("enum struct ");
const str _s116=to_str("tpl");
const double start=time_get();
str process;
char add(const char x,const char y)
{
 return x+y;
}
int add(const int x,const int y)
{
 return x+y;
}
double add(const double x,const double y)
{
 return x+y;
}
char add(const char x,const int y)
{
 return x+y;
}
double add(const double x,const int y)
{
 return x+y;
}
void allocate(arr_bool& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(bool));
  bool* ptr=(bool*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    bool* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   bool* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  bool* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   bool* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(bool));
  bool* ptr=(bool*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(bool));
  bool* ptr=(bool*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    bool* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(bool));
   bool* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void allocate(str& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(char));
  char* ptr=(char*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    char* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   char* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  char* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   char* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(char));
  char* ptr=(char*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(char));
  char* ptr=(char*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    char* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(char));
   char* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void allocate(arr_int& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(int));
  int* ptr=(int*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    int* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   int* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  int* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   int* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(int));
  int* ptr=(int*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(int));
  int* ptr=(int*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    int* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(int));
   int* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void allocate(arr_double& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(double));
  double* ptr=(double*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    double* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   double* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  double* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   double* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(double));
  double* ptr=(double*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(double));
  double* ptr=(double*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    double* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(double));
   double* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void allocate(arr_str& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(str));
  str* ptr=(str*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    str* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   str* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  str* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   str* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(str));
  str* ptr=(str*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(str));
  str* ptr=(str*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    str* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(str));
   str* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void allocate(arr_obj& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(obj));
  obj* ptr=(obj*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    obj* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   obj* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  obj* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   obj* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(obj));
  obj* ptr=(obj*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(obj));
  obj* ptr=(obj*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    obj* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(obj));
   obj* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void allocate(arr& x,const int y)
{
 check(gte(y,0));
 if(eq(x.len,y))
 {
 }
 else if(is_empty(x))
 {
  const int n=mul(y,sizeof(var));
  var* ptr=(var*)malloc(n);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,y);i++)
   {
    var* p=x.ptr+i;
    construct(p);
   }
  }
  else
   memset(x.ptr,0,n);
 }
 else if(eq(y,0))
 {
  for(int i=0;lt(i,x.len);i++)
  {
   var* p=x.ptr+i;
   destruct(p);
  }
  free(x.ptr);
  var* ptr=nullptr;
  assign(x.ptr,ptr);
  assign(x.len,0);
 }
 else if(lt(y,x.len))
 {
  const int n1=sub(x.len,y);
  for(int i=0;lt(i,n1);i++)
  {
   const int n2=add(y,i);
   var* p=x.ptr+n2;
   destruct(p);
  }
  const int n2=mul(y,sizeof(var));
  var* ptr=(var*)realloc(x.ptr,n2);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  assign(x.len,y);
 }
 else if(gt(y,x.len))
 {
  const int n1=mul(y,sizeof(var));
  var* ptr=(var*)realloc(x.ptr,n1);
  check(neq(ptr,nullptr));
  assign(x.ptr,ptr);
  const int n2=sub(y,x.len);
  if(is_composite(*x.ptr))
  {
   for(int i=0;lt(i,n2);i++)
   {
    const int n=add(x.len,i);
    var* p=x.ptr+n;
    construct(p);
   }
  }
  else
  {
   const int n3=mul(n2,sizeof(var));
   var* p=x.ptr+x.len;
   memset(p,0,n3);
  }
  assign(x.len,y);
 }
 else
  stop();
}
void append(arr_bool& x,const arr_bool& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(str& x,const str& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(arr_int& x,const arr_int& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(arr_double& x,const arr_double& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(arr_str& x,const arr_str& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(arr_obj& x,const arr_obj& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(arr& x,const arr& y)
{
 const int n1=x.len;
 const int n2=add(n1,y.len);
 allocate(x,n2);
 copy(x,n1,y,0,y.len);
}
void append(arr_str& x,const arr& y)
{
 for(int i=0;lt(i,y.len);i++)
 {
  const var& v=at(y,i);
  const str& s=at_str(v);
  push(x,s);
 }
}
void assign(void*& x,void*& y)
{
 x=y;
}
void assign(bool*& x,bool*& y)
{
 x=y;
}
void assign(char*& x,char*& y)
{
 x=y;
}
void assign(int*& x,int*& y)
{
 x=y;
}
void assign(double*& x,double*& y)
{
 x=y;
}
void assign(arr_bool*& x,arr_bool*& y)
{
 x=y;
}
void assign(str*& x,str*& y)
{
 x=y;
}
void assign(arr_int*& x,arr_int*& y)
{
 x=y;
}
void assign(arr_double*& x,arr_double*& y)
{
 x=y;
}
void assign(arr_str*& x,arr_str*& y)
{
 x=y;
}
void assign(arr_obj*& x,arr_obj*& y)
{
 x=y;
}
void assign(arr*& x,arr*& y)
{
 x=y;
}
void assign(obj*& x,obj*& y)
{
 x=y;
}
void assign(var*& x,var*& y)
{
 x=y;
}
void assign(fd*& x,fd*& y)
{
 x=y;
}
void assign(bool& x,const bool y)
{
 x=y;
}
void assign(char& x,const char y)
{
 x=y;
}
void assign(int& x,const int y)
{
 x=y;
}
void assign(double& x,const double y)
{
 x=y;
}
void assign(arr_bool& x,const arr_bool& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(str& x,const str& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(arr_int& x,const arr_int& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(arr_double& x,const arr_double& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(arr_str& x,const arr_str& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(arr_obj& x,const arr_obj& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(arr& x,const arr& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void assign(var& x,const var& y)
{
 clear(x);
 if(is_var_integral(y))
  memcpy(x.b,y.b,sizeof(x.b));
 else if(is_str(y))
 {
  str* ptr=(str*)x.b;
  const str& v=at_str(y);
  new (ptr) str;
  assign(*ptr,v);
 }
 else if(is_arr(y))
 {
  arr* ptr=(arr*)x.b;
  const arr& v=at_arr(y);
  new (ptr) arr;
  assign(*ptr,v);
 }
 else if(is_obj(y))
 {
  obj* ptr=(obj*)x.b;
  const obj& v=at_obj(y);
  new (ptr) obj;
  assign(*ptr,v);
 }
 else
  stop();
 x.t=y.t;
}
void assign(obj& x,const obj& y)
{
 assign(x.ks,y.ks);
 assign(x.vs,y.vs);
}
arr& at_arr(var& x)
{
 check(is_arr(x));
 return *(arr*)x.b;
}
const arr& at_arr(const var& x)
{
 check(is_arr(x));
 return *(arr*)x.b;
}
bool& at_bool(var& x)
{
 check(is_bool(x));
 return *(bool*)x.b;
}
const bool& at_bool(const var& x)
{
 check(is_bool(x));
 return *(bool*)x.b;
}
char& at_char(var& x)
{
 check(is_char(x));
 return *(char*)x.b;
}
const char& at_char(const var& x)
{
 check(is_char(x));
 return *(char*)x.b;
}
double& at_double(var& x)
{
 check(is_double(x));
 return *(double*)x.b;
}
const double& at_double(const var& x)
{
 check(is_double(x));
 return *(double*)x.b;
}
int& at_int(var& x)
{
 check(is_int(x));
 return *(int*)x.b;
}
const int& at_int(const var& x)
{
 check(is_int(x));
 return *(int*)x.b;
}
obj& at_obj(var& x)
{
 check(is_obj(x));
 return *(obj*)x.b;
}
const obj& at_obj(const var& x)
{
 check(is_obj(x));
 return *(obj*)x.b;
}
str& at_str(var& x)
{
 check(is_str(x));
 return *(str*)x.b;
}
const str& at_str(const var& x)
{
 check(is_str(x));
 return *(str*)x.b;
}
bool& at(arr_bool& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
char& at(str& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
int& at(arr_int& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
double& at(arr_double& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
str& at(arr_str& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
obj& at(arr_obj& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
var& at(arr& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const bool& at(const arr_bool& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const char& at(const str& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const int& at(const arr_int& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const double& at(const arr_double& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const str& at(const arr_str& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const obj& at(const arr_obj& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
const var& at(const arr& x,const int y)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 return x.ptr[y];
}
void at(arr_bool& x,const int y,const bool& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
void at(str& x,const int y,const char& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
void at(arr_int& x,const int y,const int& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
void at(arr_double& x,const int y,const double& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
void at(arr_str& x,const int y,const str& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
void at(arr_obj& x,const int y,const obj& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
void at(arr& x,const int y,const var& z)
{
 const int n=dec(x.len);
 check(between(y,0,n));
 assign(x.ptr[y],z);
}
bool& back(arr_bool& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
char& back(str& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
int& back(arr_int& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
double& back(arr_double& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
str& back(arr_str& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
obj& back(arr_obj& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
var& back(arr& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const bool& back(const arr_bool& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const char& back(const str& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const int& back(const arr_int& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const double& back(const arr_double& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const str& back(const arr_str& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const obj& back(const arr_obj& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
const var& back(const arr& x)
{
 const int n=dec(x.len);
 return at(x,n);
}
void back(arr_bool& x,const bool& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
void back(str& x,const char& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
void back(arr_int& x,const int& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
void back(arr_double& x,const double& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
void back(arr_str& x,const str& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
void back(arr_obj& x,const obj& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
void back(arr& x,const var& y)
{
 const int n=dec(x.len);
 at(x,n,y);
}
arr backtrace_get()
{
 arr r;
 const int n1=1024;
 void* a[n1]={};
 const int n2=backtrace(a,n1);
 check(gte(n2,0));
 char** ptr=backtrace_symbols(a,n2);
 check(neq(ptr,nullptr));
 const str s=to_str(source);
 const arr_str lines=split(s);
 for(int i=0;lt(i,n2);i++)
 {
  const char* v=ptr[i];
  const str s1=to_str(v);
  const arr_str a1=split(s1,_s0);
  const arr_str a2=split(a1,_s1);
  const arr_str a3=split(a2,_s2);
  const str& s2=front(a3);
  const str path=path_real(s2);
  if(neq(path,process))
   continue;
  const str& mangled=at(a3,1);
  const arr_str a4=to_arr(_s3,mangled);
  const str s3=join(a4,_s4);
  const str fn=os_execute(s3);
  const void* ptr=a[i];
  const str s4=to_str(ptr);
  const arr_str a5=to_arr(_s5,_s6,process,s4);
  const str s5=join(a5,_s4);
  const str marker=os_execute(s5);
  if(match_l(marker,_s7))
   continue;
  const arr_str a6=split(marker,_s8);
  const arr_str a7=split(a6,_s4);
  const str& number=at(a7,1);
  obj o;
  put(o,_s9,fn);
  if(!match_l(number,_s7))
  {
   const int n1=to_int(number);
   const int n2=dec(n1);
   const str line=at(lines,n2);
   const str s6=trim(line);
   put(o,_s10,n1);
   put(o,_s11,s6);
  }
  push(r,o);
 }
 free(ptr);
 return r;
}
bool between(const int x,const int y,const int z)
{
 check(lte(y,z));
 if(lt(x,y))
  return false;
 if(gt(x,z))
  return false;
 return true;
}
void check(const bool x)
{
 if(x)
  return;
 stop();
}
void clear(bool& x)
{
 assign(x,false);
}
void clear(char& x)
{
 assign(x,0);
}
void clear(int& x)
{
 assign(x,0);
}
void clear(double& x)
{
 assign(x,0);
}
void clear(arr_bool& x)
{
 allocate(x,0);
}
void clear(str& x)
{
 allocate(x,0);
}
void clear(arr_int& x)
{
 allocate(x,0);
}
void clear(arr_double& x)
{
 allocate(x,0);
}
void clear(arr_str& x)
{
 allocate(x,0);
}
void clear(arr_obj& x)
{
 allocate(x,0);
}
void clear(arr& x)
{
 allocate(x,0);
}
void clear(var& x)
{
 if(is_empty(x))
  return;
 if(is_var_integral(x))
 {
 }
 else if(is_str(x))
 {
  str& v=at_str(x);
  str* p=&v;
  destruct(p);
 }
 else if(is_arr(x))
 {
  arr& v=at_arr(x);
  arr* p=&v;
  destruct(p);
 }
 else if(is_obj(x))
 {
  obj& v=at_obj(x);
  obj* p=&v;
  destruct(p);
 }
 else
  stop();
 x.t=type::_empty;
}
void clear(obj& x)
{
 clear(x.ks);
 clear(x.vs);
}
void clear(fd& x)
{
 if(is_empty(x))
  return;
 const int n1=x.n;
 assign(x.n,0);
 const int n2=close(n1);
 check(eq(n2,0));
}
int cmp(const fd& x,const fd& y)
{
 stop();
 return 0;
}
int cmp(const bool x,const bool y)
{
 if(gt(x,y))
  return 1;
 if(lt(x,y))
  return -1;
 return 0;
}
int cmp(const char x,const char y)
{
 if(gt(x,y))
  return 1;
 if(lt(x,y))
  return -1;
 return 0;
}
int cmp(const int x,const int y)
{
 if(gt(x,y))
  return 1;
 if(lt(x,y))
  return -1;
 return 0;
}
int cmp(const double x,const double y)
{
 if(gt(x,y))
  return 1;
 if(lt(x,y))
  return -1;
 return 0;
}
int cmp(const var& x,const var& y)
{
 if(gt(x,y))
  return 1;
 if(lt(x,y))
  return -1;
 return 0;
}
int cmp(const arr_bool& x,const arr_bool& y)
{
 const int n=min(x.len,y.len);
 for(int i=0;lt(i,n);i++)
 {
  const bool& vx=at(x,i);
  const bool& vy=at(y,i);
  const int n=cmp(vx,vy);
  if(neq(n,0))
   return n;
 }
 return cmp(x.len,y.len);
}
int cmp(const arr_int& x,const arr_int& y)
{
 const int n=min(x.len,y.len);
 for(int i=0;lt(i,n);i++)
 {
  const int& vx=at(x,i);
  const int& vy=at(y,i);
  const int n=cmp(vx,vy);
  if(neq(n,0))
   return n;
 }
 return cmp(x.len,y.len);
}
int cmp(const arr_double& x,const arr_double& y)
{
 const int n=min(x.len,y.len);
 for(int i=0;lt(i,n);i++)
 {
  const double& vx=at(x,i);
  const double& vy=at(y,i);
  const int n=cmp(vx,vy);
  if(neq(n,0))
   return n;
 }
 return cmp(x.len,y.len);
}
int cmp(const arr_str& x,const arr_str& y)
{
 const int n=min(x.len,y.len);
 for(int i=0;lt(i,n);i++)
 {
  const str& vx=at(x,i);
  const str& vy=at(y,i);
  const int n=cmp(vx,vy);
  if(neq(n,0))
   return n;
 }
 return cmp(x.len,y.len);
}
int cmp(const arr_obj& x,const arr_obj& y)
{
 const int n=min(x.len,y.len);
 for(int i=0;lt(i,n);i++)
 {
  const obj& vx=at(x,i);
  const obj& vy=at(y,i);
  const int n=cmp(vx,vy);
  if(neq(n,0))
   return n;
 }
 return cmp(x.len,y.len);
}
int cmp(const arr& x,const arr& y)
{
 const int n=min(x.len,y.len);
 for(int i=0;lt(i,n);i++)
 {
  const var& vx=at(x,i);
  const var& vy=at(y,i);
  const int n=cmp(vx,vy);
  if(neq(n,0))
   return n;
 }
 return cmp(x.len,y.len);
}
int cmp(const str& x,const str& y)
{
 const int n=min(x.len,y.len);
 const int r=memcmp(x.ptr,y.ptr,n);
 if(eq(r,0))
  return cmp(x.len,y.len);
 return r;
}
int cmp(const obj& x,const obj& y)
{
 const int n=min(x.ks.len,y.ks.len);
 for(int i=0;lt(i,n);i++)
 {
  const str& kx=at(x.ks,i);
  const var& vx=at(x.vs,i);
  const str& ky=at(y.ks,i);
  const var& vy=at(y.vs,i);
  const int n1=cmp(kx,ky);
  if(neq(n1,0))
   return n1;
  const int n2=cmp(vx,vy);
  if(neq(n2,0))
   return n2;
 }
 return cmp(x.ks.len,y.ks.len);
}
str concat(const str& x,const str& y)
{
 str r;
 append(r,x);
 append(r,y);
 return r;
}
str concat(const str& x,const str& y,const str& z)
{
 str r;
 append(r,x);
 append(r,y);
 append(r,z);
 return r;
}
str concat(const str& x,const str& y,const str& z,const str& a)
{
 str r;
 append(r,x);
 append(r,y);
 append(r,z);
 append(r,a);
 return r;
}
str concat(const str& x,const str& y,const str& z,const str& a,const str& b)
{
 str r;
 append(r,x);
 append(r,y);
 append(r,z);
 append(r,a);
 append(r,b);
 return r;
}
str concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)
{
 str r;
 append(r,x);
 append(r,y);
 append(r,z);
 append(r,a);
 append(r,b);
 append(r,c);
 return r;
}
str concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)
{
 str r;
 append(r,x);
 append(r,y);
 append(r,z);
 append(r,a);
 append(r,b);
 append(r,c);
 append(r,d);
 return r;
}
void construct(bool* x)
{
}
void construct(char* x)
{
}
void construct(int* x)
{
}
void construct(double* x)
{
}
void construct(arr_bool* x)
{
 new (x) arr_bool;
}
void construct(str* x)
{
 new (x) str;
}
void construct(arr_int* x)
{
 new (x) arr_int;
}
void construct(arr_double* x)
{
 new (x) arr_double;
}
void construct(arr_str* x)
{
 new (x) arr_str;
}
void construct(arr_obj* x)
{
 new (x) arr_obj;
}
void construct(arr* x)
{
 new (x) arr;
}
void construct(obj* x)
{
 new (x) obj;
}
void construct(var* x)
{
 new (x) var;
}
void construct(fd* x)
{
 new (x) fd;
}
bool contain(const arr_bool& x,const bool& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const str& x,const char& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const char& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const arr_int& x,const int& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const arr_double& x,const double& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const arr_str& x,const str& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const arr_obj& x,const obj& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const arr& x,const var& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(eq(v,y))
   return true;
 }
 return false;
}
bool contain(const str& x,const str& y)
{
 const void* p=memmem(x.ptr,x.len,y.ptr,y.len);
 return neq(p,nullptr);
}
arr_bool copy(const arr_bool& x)
{
 return x;
}
str copy(const str& x)
{
 return x;
}
arr_int copy(const arr_int& x)
{
 return x;
}
arr_double copy(const arr_double& x)
{
 return x;
}
arr_str copy(const arr_str& x)
{
 return x;
}
arr_obj copy(const arr_obj& x)
{
 return x;
}
arr copy(const arr& x)
{
 return x;
}
void copy(arr_bool& x,const arr_bool& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(str& x,const str& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(arr_int& x,const arr_int& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(arr_double& x,const arr_double& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(arr_str& x,const arr_str& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(arr_obj& x,const arr_obj& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(arr& x,const arr& y)
{
 allocate(x,y.len);
 copy(x,0,y,0,y.len);
}
void copy(arr_bool& x,const int y,const arr_bool& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(bool));
  bool* ptr1=x.ptr+y;
  const bool* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const bool& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
void copy(str& x,const int y,const str& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(char));
  char* ptr1=x.ptr+y;
  const char* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const char& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
void copy(arr_int& x,const int y,const arr_int& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(int));
  int* ptr1=x.ptr+y;
  const int* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const int& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
void copy(arr_double& x,const int y,const arr_double& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(double));
  double* ptr1=x.ptr+y;
  const double* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const double& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
void copy(arr_str& x,const int y,const arr_str& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(str));
  str* ptr1=x.ptr+y;
  const str* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const str& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
void copy(arr_obj& x,const int y,const arr_obj& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(obj));
  obj* ptr1=x.ptr+y;
  const obj* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const obj& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
void copy(arr& x,const int y,const arr& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(var));
  var* ptr1=x.ptr+y;
  const var* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   const var& v=at(z,n2);
   at(x,n1,v);
  }
 }
}
int count_line(const str& x)
{
 const arr_str a=split(x);
 return a.len;
}
str date_get()
{
 const time_t now=time(nullptr);
 const tm o=*gmtime(&now);
 const str day=to_str(o.tm_mday);
 const int n1=inc(o.tm_mon);
 const str month=to_str(n1);
 const int n2=add(o.tm_year,1900);
 const str year=to_str(n2);
 return concat(year,_s12,month,_s12,day);
}
char dec(const char x)
{
 return sub(x,1);
}
int dec(const int x)
{
 return sub(x,1);
}
double dec(const double x)
{
 return sub(x,1);
}
void deinit(arr_bool& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(str& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(arr_int& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(arr_double& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(arr_str& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(arr_obj& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(arr& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(obj& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(var& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void deinit(fd& x)
{
 try
 {
  clear(x);
 }
 catch(...)
 {
  print(_s13);
 }
}
void destruct(bool* x)
{
}
void destruct(char* x)
{
}
void destruct(int* x)
{
}
void destruct(double* x)
{
}
void destruct(arr_bool* x)
{
 x->~arr_bool();
}
void destruct(str* x)
{
 x->~str();
}
void destruct(arr_int* x)
{
 x->~arr_int();
}
void destruct(arr_double* x)
{
 x->~arr_double();
}
void destruct(arr_str* x)
{
 x->~arr_str();
}
void destruct(arr_obj* x)
{
 x->~arr_obj();
}
void destruct(arr* x)
{
 x->~arr();
}
void destruct(obj* x)
{
 x->~obj();
}
void destruct(var* x)
{
 x->~var();
}
void destruct(fd* x)
{
 x->~fd();
}
arr_bool detach(arr_bool& x)
{
 arr_bool r;
 swap(r,x);
 return r;
}
str detach(str& x)
{
 str r;
 swap(r,x);
 return r;
}
arr_int detach(arr_int& x)
{
 arr_int r;
 swap(r,x);
 return r;
}
arr_double detach(arr_double& x)
{
 arr_double r;
 swap(r,x);
 return r;
}
arr_str detach(arr_str& x)
{
 arr_str r;
 swap(r,x);
 return r;
}
arr_obj detach(arr_obj& x)
{
 arr_obj r;
 swap(r,x);
 return r;
}
arr detach(arr& x)
{
 arr r;
 swap(r,x);
 return r;
}
int detach(fd& x)
{
 int r=-1;
 swap(r,x.n);
 return r;
}
void dir_change(const str& x)
{
 const str s=to_c(x);
 const int n=chdir(s.ptr);
 check(eq(n,0));
}
str dir_current()
{
 const int n=PATH_MAX;
 char s[n]={};
 const char* ptr=getcwd(s,n);
 check(neq(ptr,nullptr));
 return to_str(s);
}
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
  if(eq(base,_s14))
   continue;
  if(eq(base,_s15))
   continue;
  const str path=path_concat(x,base);
  push(r,path);
 }
 const int n=closedir(dir);
 check(eq(n,0));
 sort(r);
 return r;
}
char div_(const char x,const char y)
{
 check(neq(x,0));
 return x/y;
}
int div_(const int x,const int y)
{
 check(neq(x,0));
 return x/y;
}
double div_(const double x,const double y)
{
 check(neq(x,0));
 return x/y;
}
char div_(const char x,const int y)
{
 check(neq(x,0));
 return x/y;
}
double div_(const double x,const int y)
{
 check(neq(x,0));
 return x/y;
}
void drop(arr_bool& x)
{
 drop(x,1);
}
void drop(str& x)
{
 drop(x,1);
}
void drop(arr_int& x)
{
 drop(x,1);
}
void drop(arr_double& x)
{
 drop(x,1);
}
void drop(arr_str& x)
{
 drop(x,1);
}
void drop(arr_obj& x)
{
 drop(x,1);
}
void drop(arr& x)
{
 drop(x,1);
}
void drop(arr_bool& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void drop(str& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void drop(arr_int& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void drop(arr_double& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void drop(arr_str& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void drop(arr_obj& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void drop(arr& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 allocate(x,n);
}
void dump(const bool x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const char x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const int x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const double x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const void* x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const arr_bool& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const str& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const arr_int& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const arr_double& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const arr_str& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const arr_obj& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const arr& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const var& x)
{
 const str s=to_dump(x);
 print(s);
}
void dump(const obj& x)
{
 const str s=to_dump(x);
 print(s);
}
void echo(const bool x)
{
 const str s=to_str(x);
 echo(s);
}
void echo(const char x)
{
 const str s=to_str(x);
 echo(s);
}
void echo(const int x)
{
 const str s=to_str(x);
 echo(s);
}
void echo(const double x)
{
 const str s=to_str(x);
 echo(s);
}
void echo(const str& x)
{
 const str s1=to_c(_s16);
 const str s2=to_c(x);
 check(gte(printf(s1.ptr,s2.ptr),0));
}
bool eq(const bool x,const bool y)
{
 return x==y;
}
bool eq(const char x,const char y)
{
 return x==y;
}
bool eq(const int x,const int y)
{
 return x==y;
}
bool eq(const double x,const double y)
{
 return x==y;
}
bool eq(const char x,const int y)
{
 return x==y;
}
bool eq(const double x,const int y)
{
 return x==y;
}
bool eq(const void* x,const void* y)
{
 return x==y;
}
bool eq(const fd& x,const fd& y)
{
 stop();
 return false;
}
bool eq(const arr_bool& x,const arr_bool& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const str& x,const str& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const arr_int& x,const arr_int& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const arr_double& x,const arr_double& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const arr_str& x,const arr_str& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const arr_obj& x,const arr_obj& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const arr& x,const arr& y)
{
 const int n=cmp(x,y);
 return eq(n,0);
}
bool eq(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;
 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  return eq(v1,v2);
 }
 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  return eq(v1,v2);
 }
 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  return eq(v1,v2);
 }
 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  return eq(v1,v2);
 }
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  return eq(v1,v2);
 }
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  return eq(v1,v2);
 }
 stop();
 return false;
}
bool eq(const obj& x,const obj& y)
{
 const int n=eq(x,y);
 return eq(n,0);
}
obj error_get()
{
 obj r;
 const char* ptr=strerror(errno);
 const str message=to_str(ptr);
 put(r,_s10,errno);
 put(r,_s17,message);
 return r;
}
str escape(const char x)
{
 str r;
 if(eq(x,'\\'))
  append(r,_s18);
 else if(eq(x,'\''))
  append(r,_s19);
 else if(eq(x,'"'))
  append(r,_s20);
 else if(eq(x,'\n'))
  append(r,_s21);
 else if(eq(x,'\r'))
  append(r,_s22);
 else if(eq(x,'\t'))
  append(r,_s23);
 else if(between(x,32,126))
  push(r,x);
 else
 {
  const int n1=64;
  const int n2=inc(n1);
  const int n3=(unsigned char)x;
  char s1[n1]={};
  const str s2=to_c(_s24);
  const int n4=snprintf(s1,n1,s2.ptr,n3);
  check(gte(n4,0));
  const str s3=to_str(s1);
  append(r,s3);
 }
 return r;
}
bool every(const arr_bool& x,bool (*const y)(const bool& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool every(const str& x,bool (*const y)(const char& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const char& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool every(const arr_int& x,bool (*const y)(const int& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool every(const arr_double& x,bool (*const y)(const double& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool every(const arr_str& x,bool (*const y)(const str& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool every(const arr_obj& x,bool (*const y)(const obj& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool every(const arr& x,bool (*const y)(const var& x))
{
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(!y(v))
   return false;
 }
 return true;
}
bool extract(arr_bool& x,const bool& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
bool extract(str& x,const char& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const char& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
bool extract(arr_int& x,const int& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
bool extract(arr_double& x,const double& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
bool extract(arr_str& x,const str& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
bool extract(arr_obj& x,const obj& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
bool extract(arr& x,const var& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(eq(v,y))
  {
   remove(x,i);
   return true;
  }
 }
 return false;
}
str file_read(const str& x)
{
 const str s=to_c(x);
 const int n=open(s.ptr,O_RDONLY);
 check(gte(n,0));
 fd file;
 assign(file.n,n);
 return read(file);
}
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
int file_size(const str& x)
{
 const str s=to_c(x);
 struct stat data;
 const int n=stat(s.ptr,&data);
 check(eq(n,0));
 return data.st_size;
}
void file_write(const str& x,const str& y)
{
 const str s1=to_c(x);
 const int n=creat(s1.ptr,0777);
 check(gte(n,0));
 fd file;
 assign(file.n,n);
 str s2=y;
 while(is_full(s2))
 {
  const str s3=head(s2,1024);
  shift(s2,s3.len);
  write(file,s3);
 }
}
int find(const arr_bool& x,const bool& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
int find(const str& x,const char& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const char& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
int find(const arr_int& x,const int& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
int find(const arr_double& x,const double& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
int find(const arr_str& x,const str& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
int find(const arr_obj& x,const obj& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
int find(const arr& x,const var& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(eq(v,y))
   return i;
 }
 return -1;
}
bool& front(arr_bool& x)
{
 return at(x,0);
}
char& front(str& x)
{
 return at(x,0);
}
int& front(arr_int& x)
{
 return at(x,0);
}
double& front(arr_double& x)
{
 return at(x,0);
}
str& front(arr_str& x)
{
 return at(x,0);
}
obj& front(arr_obj& x)
{
 return at(x,0);
}
var& front(arr& x)
{
 return at(x,0);
}
const bool& front(const arr_bool& x)
{
 return at(x,0);
}
const char& front(const str& x)
{
 return at(x,0);
}
const int& front(const arr_int& x)
{
 return at(x,0);
}
const double& front(const arr_double& x)
{
 return at(x,0);
}
const str& front(const arr_str& x)
{
 return at(x,0);
}
const obj& front(const arr_obj& x)
{
 return at(x,0);
}
const var& front(const arr& x)
{
 return at(x,0);
}
void front(arr_bool& x,const bool& y)
{
 at(x,0,y);
}
void front(str& x,const char& y)
{
 at(x,0,y);
}
void front(arr_int& x,const int& y)
{
 at(x,0,y);
}
void front(arr_double& x,const double& y)
{
 at(x,0,y);
}
void front(arr_str& x,const str& y)
{
 at(x,0,y);
}
void front(arr_obj& x,const obj& y)
{
 at(x,0,y);
}
void front(arr& x,const var& y)
{
 at(x,0,y);
}
const arr& get_arr(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_arr(v);
}
arr& get_arr(obj& x,const str& y)
{
 var& v=get(x,y);
 return at_arr(v);
}
bool get_bool(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_bool(v);
}
char get_char(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_char(v);
}
double get_double(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_double(v);
}
int get_indent(const str& x)
{
 const str s=trim_l(x);
 return sub(x.len,s.len);
}
int get_int(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_int(v);
}
const obj& get_obj(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_obj(v);
}
obj& get_obj(obj& x,const str& y)
{
 var& v=get(x,y);
 return at_obj(v);
}
const str& get_str(const obj& x,const str& y)
{
 const var& v=get(x,y);
 return at_str(v);
}
str& get_str(obj& x,const str& y)
{
 var& v=get(x,y);
 return at_str(v);
}
const var& get(const obj& x,const str& y)
{
 check(has(x,y));
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v=at(x.vs,i);
  if(eq(k,y))
   return v;
 }
 stop();
 static const var dummy;
 return dummy;
}
var& get(obj& x,const str& y)
{
 check(has(x,y));
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  var& v=at(x.vs,i);
  if(eq(k,y))
   return v;
 }
 stop();
 static var dummy;
 return dummy;
}
bool gt(const bool x,const bool y)
{
 return x>y;
}
bool gt(const char x,const char y)
{
 return x>y;
}
bool gt(const int x,const int y)
{
 return x>y;
}
bool gt(const double x,const double y)
{
 return x>y;
}
bool gt(const char x,const int y)
{
 return x>y;
}
bool gt(const double x,const int y)
{
 return x>y;
}
bool gt(const arr_bool& x,const arr_bool& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const str& x,const str& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const arr_int& x,const arr_int& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const arr_double& x,const arr_double& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const arr_str& x,const arr_str& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const arr_obj& x,const arr_obj& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const arr& x,const arr& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gt(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;
 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  return gt(v1,v2);
 }
 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  return gt(v1,v2);
 }
 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  return gt(v1,v2);
 }
 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  return gt(v1,v2);
 }
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  return gt(v1,v2);
 }
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  return gt(v1,v2);
 }
 stop();
 return false;
}
bool gt(const obj& x,const obj& y)
{
 const int n=cmp(x,y);
 return gt(n,0);
}
bool gte(const bool x,const bool y)
{
 return x>=y;
}
bool gte(const char x,const char y)
{
 return x>=y;
}
bool gte(const int x,const int y)
{
 return x>=y;
}
bool gte(const double x,const double y)
{
 return x>=y;
}
bool gte(const char x,const int y)
{
 return x>=y;
}
bool gte(const double x,const int y)
{
 return x>=y;
}
bool gte(const arr_bool& x,const arr_bool& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const str& x,const str& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const arr_int& x,const arr_int& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const arr_double& x,const arr_double& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const arr_str& x,const arr_str& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const arr_obj& x,const arr_obj& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const arr& x,const arr& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool gte(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;
 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  return gte(v1,v2);
 }
 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  return gte(v1,v2);
 }
 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  return gte(v1,v2);
 }
 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  return gte(v1,v2);
 }
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  return gte(v1,v2);
 }
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  return gte(v1,v2);
 }
 stop();
 return false;
}
bool gte(const obj& x,const obj& y)
{
 const int n=cmp(x,y);
 return gte(n,0);
}
bool has(const obj& x,const str& y)
{
 return contain(x.ks,y);
}
arr_bool head(const arr_bool& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
str head(const str& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
arr_int head(const arr_int& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
arr_double head(const arr_double& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
arr_str head(const arr_str& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
arr_obj head(const arr_obj& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
arr head(const arr& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_l(x,y);
}
char inc(const char x)
{
 return add(x,1);
}
int inc(const int x)
{
 return add(x,1);
}
double inc(const double x)
{
 return add(x,1);
}
bool is_access(const str& x)
{
 if(is_empty(x))
  return false;
 const arr_str a=split(x,_s14);
 if(is_single(a))
  return false;
 return every(a,is_identifier);
}
bool is_alnum(const char x)
{
 if(is_alpha(x))
  return true;
 if(is_digit(x))
  return true;
 return false;
}
bool is_alnum(const str& x)
{
 if(is_empty(x))
  return false;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  if(!is_alnum(v))
   return false;
 }
 return true;
}
bool is_alpha(const char x)
{
 if(eq(x,'_'))
  return true;
 if(between(x,'a','z'))
  return true;
 if(between(x,'A','Z'))
  return true;
 return false;
}
bool is_alpha(const str& x)
{
 if(is_empty(x))
  return false;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  if(!is_alpha(v))
   return false;
 }
 return true;
}
bool is_arr(const var& x)
{
 return x.t==type::_arr;
}
bool is_blank(const char x)
{
 if(eq(x,' '))
  return true;
 if(eq(x,'\n'))
  return true;
 if(eq(x,'\r'))
  return true;
 if(eq(x,'\t'))
  return true;
 return false;
}
bool is_blank(const str& x)
{
 if(is_empty(x))
  return false;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  if(!is_blank(v))
   return false;
 }
 return true;
}
bool is_bool(const var& x)
{
 return x.t==type::_bool;
}
bool is_char(const var& x)
{
 return x.t==type::_char;
}
bool is_comment(const str& x)
{
 if(!is_line(x))
  return false;
 return match_l(x,_s25);
}
bool is_composite(const bool& x)
{
 return false;
}
bool is_composite(const char& x)
{
 return false;
}
bool is_composite(const int& x)
{
 return false;
}
bool is_composite(const double& x)
{
 return false;
}
bool is_composite(const arr_bool& x)
{
 return true;
}
bool is_composite(const str& x)
{
 return true;
}
bool is_composite(const arr_int& x)
{
 return true;
}
bool is_composite(const arr_double& x)
{
 return true;
}
bool is_composite(const arr_str& x)
{
 return true;
}
bool is_composite(const arr_obj& x)
{
 return true;
}
bool is_composite(const arr& x)
{
 return true;
}
bool is_composite(const obj& x)
{
 return true;
}
bool is_composite(const var& x)
{
 return true;
}
bool is_composite(const fd& x)
{
 return true;
}
bool is_digit(const char x)
{
 return between(x,'0','9');
}
bool is_digit(const str& x)
{
 if(is_empty(x))
  return false;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  if(!is_digit(v))
   return false;
 }
 return true;
}
bool is_dir(const str& x)
{
 const str s=to_c(x);
 struct stat data;
 const int n=stat(s.ptr,&data);
 if(neq(n,0))
  return false;
 return S_ISDIR(data.st_mode);
}
bool is_double(const var& x)
{
 return x.t==type::_double;
}
bool is_empty(const arr_bool& x)
{
 return eq(x.len,0);
}
bool is_empty(const str& x)
{
 return eq(x.len,0);
}
bool is_empty(const arr_int& x)
{
 return eq(x.len,0);
}
bool is_empty(const arr_double& x)
{
 return eq(x.len,0);
}
bool is_empty(const arr_str& x)
{
 return eq(x.len,0);
}
bool is_empty(const arr_obj& x)
{
 return eq(x.len,0);
}
bool is_empty(const arr& x)
{
 return eq(x.len,0);
}
bool is_empty(const var& x)
{
 return x.t==type::_empty;
}
bool is_empty(const obj& x)
{
 return is_empty(x.ks);
}
bool is_empty(const fd& x)
{
 return lt(x.n,0);
}
bool is_file(const str& x)
{
 const str s=to_c(x);
 struct stat data;
 const int n=stat(s.ptr,&data);
 if(neq(n,0))
  return false;
 return S_ISREG(data.st_mode);
}
bool is_fragment(const str& x)
{
 if(is_alnum(x))
  return true;
 if(is_space(x))
  return true;
 return false;
}
bool is_full(const arr_bool& x)
{
 return !is_empty(x);
}
bool is_full(const str& x)
{
 return !is_empty(x);
}
bool is_full(const arr_int& x)
{
 return !is_empty(x);
}
bool is_full(const arr_double& x)
{
 return !is_empty(x);
}
bool is_full(const arr_str& x)
{
 return !is_empty(x);
}
bool is_full(const arr_obj& x)
{
 return !is_empty(x);
}
bool is_full(const arr& x)
{
 return !is_empty(x);
}
bool is_full(const var& x)
{
 return !is_empty(x);
}
bool is_full(const obj& x)
{
 return !is_empty(x);
}
bool is_full(const fd& x)
{
 return !is_empty(x);
}
bool is_identifier(const str& x)
{
 if(is_empty(x))
  return false;
 const char c=front(x);
 if(!is_alpha(c))
  return false;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  if(!is_alnum(v))
   return false;
 }
 return true;
}
bool is_int(const var& x)
{
 return x.t==type::_int;
}
bool is_integral(const bool& x)
{
 return true;
}
bool is_integral(const char& x)
{
 return true;
}
bool is_integral(const int& x)
{
 return true;
}
bool is_integral(const double& x)
{
 return true;
}
bool is_integral(const arr_bool& x)
{
 return false;
}
bool is_integral(const str& x)
{
 return false;
}
bool is_integral(const arr_int& x)
{
 return false;
}
bool is_integral(const arr_double& x)
{
 return false;
}
bool is_integral(const arr_str& x)
{
 return false;
}
bool is_integral(const arr_obj& x)
{
 return false;
}
bool is_integral(const arr& x)
{
 return false;
}
bool is_integral(const obj& x)
{
 return false;
}
bool is_integral(const var& x)
{
 return false;
}
bool is_integral(const fd& x)
{
 return false;
}
bool is_key(const str& x)
{
 if(is_digit(x))
  return false;
 return is_alnum(x);
}
bool is_last(const arr_bool& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_last(const str& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_last(const arr_int& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_last(const arr_double& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_last(const arr_str& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_last(const arr_obj& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_last(const arr& x,const int y)
{
 const int n=dec(x.len);
 return eq(y,n);
}
bool is_line(const str& x)
{
 return !is_text(x);
}
bool is_lit_char(const str& x)
{
 if(is_empty(x))
  return false;
 str s;
 return parse_lit_char(s,x);
}
bool is_lit(const str& x)
{
 if(is_empty(x))
  return false;
 str s;
 return parse_lit(s,x);
}
bool is_many(const arr_bool& x)
{
 return gt(x.len,1);
}
bool is_many(const str& x)
{
 return gt(x.len,1);
}
bool is_many(const arr_int& x)
{
 return gt(x.len,1);
}
bool is_many(const arr_double& x)
{
 return gt(x.len,1);
}
bool is_many(const arr_str& x)
{
 return gt(x.len,1);
}
bool is_many(const arr_obj& x)
{
 return gt(x.len,1);
}
bool is_many(const arr& x)
{
 return gt(x.len,1);
}
bool is_many(const obj& x)
{
 return is_many(x.ks);
}
bool is_numeric(const str& x)
{
 if(is_empty(x))
  return false;
 const str s=trim(x);
 if(neq(s,x))
  return false;
 int n=0;
 return parse_int(n,x);
}
bool is_obj(const var& x)
{
 return x.t==type::_obj;
}
bool is_single(const arr_bool& x)
{
 return eq(x.len,1);
}
bool is_single(const str& x)
{
 return eq(x.len,1);
}
bool is_single(const arr_int& x)
{
 return eq(x.len,1);
}
bool is_single(const arr_double& x)
{
 return eq(x.len,1);
}
bool is_single(const arr_str& x)
{
 return eq(x.len,1);
}
bool is_single(const arr_obj& x)
{
 return eq(x.len,1);
}
bool is_single(const arr& x)
{
 return eq(x.len,1);
}
bool is_single(const obj& x)
{
 return is_single(x.ks);
}
bool is_space(const char x)
{
 return eq(x,' ');
}
bool is_space(const str& x)
{
 if(is_empty(x))
  return false;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  if(!is_space(v))
   return false;
 }
 return true;
}
bool is_str(const var& x)
{
 return x.t==type::_str;
}
bool is_text(const str& x)
{
 return contain(x,_s26);
}
bool is_token(const str& x)
{
 if(is_alnum(x))
  return true;
 if(is_access(x))
  return true;
 if(is_tuple(x))
  return true;
 if(is_numeric(x))
  return true;
 if(is_lit(x))
  return true;
 if(is_lit_char(x))
  return true;
 if(is_comment(x))
  return true;
 return false;
}
bool is_tuple(const str& x)
{
 if(is_empty(x))
  return false;
 const arr_str a=split(x,_s8);
 if(is_single(a))
  return false;
 return every(a,is_identifier);
}
bool is_var_integral(const var& x)
{
 if(is_bool(x))
  return true;
 if(is_char(x))
  return true;
 if(is_int(x))
  return true;
 if(is_double(x))
  return true;
 return false;
}
str join(const arr_str& x)
{
 return join(x,_s26);
}
str join(const arr_str& x,const str& y)
{
 str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  append(r,v);
  if(!is_last(x,i))
   append(r,y);
 }
 return r;
}
void ln()
{
 echo(_s26);
}
bool lt(const bool x,const bool y)
{
 return x<y;
}
bool lt(const char x,const char y)
{
 return x<y;
}
bool lt(const int x,const int y)
{
 return x<y;
}
bool lt(const double x,const double y)
{
 return x<y;
}
bool lt(const char x,const int y)
{
 return x<y;
}
bool lt(const double x,const int y)
{
 return x<y;
}
bool lt(const arr_bool& x,const arr_bool& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const str& x,const str& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const arr_int& x,const arr_int& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const arr_double& x,const arr_double& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const arr_str& x,const arr_str& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const arr_obj& x,const arr_obj& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const arr& x,const arr& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lt(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;
 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  return lt(v1,v2);
 }
 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  return lt(v1,v2);
 }
 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  return lt(v1,v2);
 }
 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  return lt(v1,v2);
 }
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  return lt(v1,v2);
 }
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  return lt(v1,v2);
 }
 stop();
 return false;
}
bool lt(const obj& x,const obj& y)
{
 const int n=cmp(x,y);
 return lt(n,0);
}
bool lte(const bool x,const bool y)
{
 return x<=y;
}
bool lte(const char x,const char y)
{
 return x<=y;
}
bool lte(const int x,const int y)
{
 return x<=y;
}
bool lte(const double x,const double y)
{
 return x<=y;
}
bool lte(const char x,const int y)
{
 return x<=y;
}
bool lte(const double x,const int y)
{
 return x<=y;
}
bool lte(const arr_bool& x,const arr_bool& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const str& x,const str& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const arr_int& x,const arr_int& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const arr_double& x,const arr_double& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const arr_str& x,const arr_str& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const arr_obj& x,const arr_obj& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const arr& x,const arr& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
bool lte(const var& x,const var& y)
{
 if(x.t!=y.t)
  return false;
 if(is_bool(x))
 {
  const bool v1=at_bool(x);
  const bool v2=at_bool(y);
  return lte(v1,v2);
 }
 if(is_char(x))
 {
  const char v1=at_char(x);
  const char v2=at_char(y);
  return lte(v1,v2);
 }
 if(is_int(x))
 {
  const int v1=at_int(x);
  const int v2=at_int(y);
  return lte(v1,v2);
 }
 if(is_double(x))
 {
  const double v1=at_double(x);
  const double v2=at_double(y);
  return lte(v1,v2);
 }
 if(is_arr(x))
 {
  const arr& v1=at_arr(x);
  const arr& v2=at_arr(y);
  return lte(v1,v2);
 }
 if(is_obj(x))
 {
  const obj& v1=at_obj(x);
  const obj& v2=at_obj(y);
  return lte(v1,v2);
 }
 stop();
 return false;
}
bool lte(const obj& x,const obj& y)
{
 const int n=cmp(x,y);
 return lte(n,0);
}
int main(const int x,const char** y)
{
 try
 {
  const char* ptr=y[0];
  const str s1=to_str(ptr);
  const str s2=path_real(s1);
  assign(process,s2);
  arr_str a;
  for(int i=1;lt(i,x);i++)
  {
   const char* ptr=y[i];
   const str s=to_str(ptr);
   push(a,s);
  }
  on_main_890(a);
  const double n=time_now();
  const str s3=to_str(n);
  const str s4=concat(s3,_s27);
  echo(_s28);
  space();
  print(s4);
 }
 catch(...)
 {
  print(_s13);
 }
 return 0;
}
void on_main_890(const arr_str& x)
{
 const int n1=sizeof(bool);
 const int n2=max(n1,sizeof(char));
 const int n3=max(n2,sizeof(int));
 const int n4=max(n3,sizeof(double));
 const int n5=max(n4,sizeof(arr));
 const int n6=max(n5,sizeof(obj));
 const var c;
 const int n7=sizeof(c.b);
 if(neq(n6,n7))
 {
  echo(_s29);
  space();
  print(n6);
  echo(_s30);
  space();
  print(n7);
  return;
 }
 init(x);
}
bool match_l(const str& x,const str& y)
{
 if(is_empty(x))
  return false;
 if(is_empty(y))
  return false;
 if(gt(y.len,x.len))
  return false;
 const int n=memcmp(x.ptr,y.ptr,y.len);
 return eq(n,0);
}
bool match_r(const str& x,const str& y)
{
 if(is_empty(x))
  return false;
 if(is_empty(y))
  return false;
 if(gt(y.len,x.len))
  return false;
 const int n1=sub(x.len,y.len);
 const char* ptr=x.ptr+n1;
 const int n2=memcmp(ptr,y.ptr,y.len);
 return eq(n2,0);
}
char max(const char x,const char y)
{
 if(gt(x,y))
  return x;
 return y;
}
int max(const int x,const int y)
{
 if(gt(x,y))
  return x;
 return y;
}
double max(const double x,const double y)
{
 if(gt(x,y))
  return x;
 return y;
}
char min(const char x,const char y)
{
 if(lt(x,y))
  return x;
 return y;
}
int min(const int x,const int y)
{
 if(lt(x,y))
  return x;
 return y;
}
double min(const double x,const double y)
{
 if(lt(x,y))
  return x;
 return y;
}
void move(arr_bool& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(bool));
  bool* ptr1=x.ptr+y;
  const bool* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   bool& v1=at(x,n1);
   bool& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   bool& v1=at(x,n3);
   bool& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(str& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(char));
  char* ptr1=x.ptr+y;
  const char* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   char& v1=at(x,n1);
   char& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   char& v1=at(x,n3);
   char& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(arr_int& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(int));
  int* ptr1=x.ptr+y;
  const int* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   int& v1=at(x,n1);
   int& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   int& v1=at(x,n3);
   int& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(arr_double& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(double));
  double* ptr1=x.ptr+y;
  const double* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   double& v1=at(x,n1);
   double& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   double& v1=at(x,n3);
   double& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(arr_str& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(str));
  str* ptr1=x.ptr+y;
  const str* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   str& v1=at(x,n1);
   str& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   str& v1=at(x,n3);
   str& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(arr_obj& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(obj));
  obj* ptr1=x.ptr+y;
  const obj* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   obj& v1=at(x,n1);
   obj& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   obj& v1=at(x,n3);
   obj& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(arr& x,const int y,const int z,const int a)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 check(between(a,0,x.len));
 const int n1=add(y,a);
 check(lte(n1,x.len));
 const int n2=add(z,a);
 check(lte(n2,x.len));
 if(eq(a,0))
  return;
 if(eq(y,z))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(a,sizeof(var));
  var* ptr1=x.ptr+y;
  const var* ptr2=x.ptr+z;
  memmove(ptr1,ptr2,n);
 }
 else if(gt(z,y))
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=add(y,i);
   const int n2=add(z,i);
   var& v1=at(x,n1);
   var& v2=at(x,n2);
   swap(v1,v2);
  }
 }
 else
 {
  for(int i=0;lt(i,a);i++)
  {
   const int n1=dec(a);
   const int n2=sub(n1,i);
   const int n3=add(y,n2);
   const int n4=add(z,n2);
   var& v1=at(x,n3);
   var& v2=at(x,n4);
   swap(v1,v2);
  }
 }
}
void move(arr_bool& x,const int y,arr_bool& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(bool));
  bool* ptr1=x.ptr+y;
  const bool* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   bool& v1=at(x,n1);
   bool& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
void move(str& x,const int y,str& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(char));
  char* ptr1=x.ptr+y;
  const char* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   char& v1=at(x,n1);
   char& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
void move(arr_int& x,const int y,arr_int& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(int));
  int* ptr1=x.ptr+y;
  const int* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   int& v1=at(x,n1);
   int& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
void move(arr_double& x,const int y,arr_double& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(double));
  double* ptr1=x.ptr+y;
  const double* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   double& v1=at(x,n1);
   double& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
void move(arr_str& x,const int y,arr_str& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(str));
  str* ptr1=x.ptr+y;
  const str* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   str& v1=at(x,n1);
   str& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
void move(arr_obj& x,const int y,arr_obj& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(obj));
  obj* ptr1=x.ptr+y;
  const obj* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   obj& v1=at(x,n1);
   obj& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
void move(arr& x,const int y,arr& z,const int a,const int b)
{
 check(between(y,0,x.len));
 check(between(a,0,z.len));
 check(between(b,0,x.len));
 check(between(b,0,z.len));
 const int n1=add(y,b);
 check(lte(n1,x.len));
 const int n2=add(a,b);
 check(lte(n2,z.len));
 if(eq(b,0))
  return;
 if(is_integral(*x.ptr))
 {
  const int n=mul(b,sizeof(var));
  var* ptr1=x.ptr+y;
  const var* ptr2=z.ptr+a;
  memcpy(ptr1,ptr2,n);
 }
 else
 {
  for(int i=0;lt(i,b);i++)
  {
   const int n1=add(y,i);
   const int n2=add(a,i);
   var& v1=at(x,n1);
   var& v2=at(z,n2);
   swap(v1,v2);
  }
 }
}
char mul(const char x,const char y)
{
 return x*y;
}
int mul(const int x,const int y)
{
 return x*y;
}
double mul(const double x,const double y)
{
 return x*y;
}
char mul(const char x,const int y)
{
 return x*y;
}
double mul(const double x,const int y)
{
 return x*y;
}
bool neq(const bool x,const bool y)
{
 return x!=y;
}
bool neq(const char x,const char y)
{
 return x!=y;
}
bool neq(const int x,const int y)
{
 return x!=y;
}
bool neq(const double x,const double y)
{
 return x!=y;
}
bool neq(const char x,const int y)
{
 return x!=y;
}
bool neq(const double x,const int y)
{
 return x!=y;
}
bool neq(const void* x,const void* y)
{
 return x!=y;
}
bool neq(const fd& x,const fd& y)
{
 stop();
 return false;
}
bool neq(const arr_bool& x,const arr_bool& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const str& x,const str& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const arr_int& x,const arr_int& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const arr_double& x,const arr_double& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const arr_str& x,const arr_str& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const arr_obj& x,const arr_obj& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const arr& x,const arr& y)
{
 const int n=cmp(x,y);
 return neq(n,0);
}
bool neq(const var& x,const var& y)
{
 const bool b=eq(x,y);
 return not(b);
}
bool neq(const obj& x,const obj& y)
{
 const bool b=eq(x,y);
 return not(b);
}
str os_execute(const str& x)
{
 const str s1=to_c(x);
 const str s2=to_c(_s31);
 FILE* ptr=popen(s1.ptr,s2.ptr);
 const int n1=fileno(ptr);
 fd f;
 f.n=n1;
 const str s3=read(f);
 detach(f);
 const str r=trim_r(s3);
 const int n2=pclose(ptr);
 check(eq(n2,0));
 return r;
}
int os_system(const str& x)
{
 const str s1=to_c(x);
 const str s2=concat(_s32,x);
 print(s2);
 return system(s1.ptr);
}
int os_system(const str& x,const str& y)
{
 arr_str a1;
 push(a1,x);
 push(a1,y);
 const str s=join(a1,_s4);
 return os_system(s);
}
int os_system(const str& x,const str& y,const str& z)
{
 arr_str a1;
 push(a1,x);
 push(a1,y);
 push(a1,z);
 const str s=join(a1,_s4);
 return os_system(s);
}
int os_system(const str& x,const str& y,const str& z,const str& a)
{
 arr_str a1;
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 const str s=join(a1,_s4);
 return os_system(s);
}
int os_system(const str& x,const str& y,const str& z,const str& a,const str& b)
{
 arr_str a1;
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 const str s=join(a1,_s4);
 return os_system(s);
}
int os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)
{
 arr_str a1;
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 push(a1,c);
 const str s=join(a1,_s4);
 return os_system(s);
}
int os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)
{
 arr_str a1;
 push(a1,x);
 push(a1,y);
 push(a1,z);
 push(a1,a);
 push(a1,b);
 push(a1,c);
 push(a1,d);
 const str s=join(a1,_s4);
 return os_system(s);
}
bool parse_int(int& x,const str& y)
{
 const str s1=to_c(y);
 const long n1=strtol(s1.ptr,nullptr,10);
 if(n1==LONG_MIN)
  return false;
 if(n1==LONG_MAX)
  return false;
 const int n2=n1;
 const str s2=to_str(n2);
 if(neq(s2,y))
  return false;
 assign(x,n2);
 return true;
}
bool parse_lit_char(str& x,const str& y)
{
 clear(x);
 str input=y;
 str output;
 if(!match_l(input,_s33))
  return false;
 shift(input);
 while(is_full(input))
 {
  if(match_l(input,_s34))
   break;
  else if(match_l(input,_s21))
  {
   push(output,'\n');
   shift(input,2);
  }
  else if(match_l(input,_s22))
  {
   push(output,'\r');
   shift(input,2);
  }
  else if(match_l(input,_s23))
  {
   push(output,'\t');
   shift(input,2);
  }
  else if(match_l(input,_s35))
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
  else if(match_l(input,_s36))
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
 if(!match_l(input,_s33))
  return false;
 shift(input);
 if(is_full(input))
  return false;
 swap(x,output);
 return true;
}
bool parse_lit(str& x,const str& y)
{
 clear(x);
 str input=y;
 str output;
 if(!match_l(input,_s37))
  return false;
 shift(input);
 while(is_full(input))
 {
  if(match_l(input,_s37))
   break;
  else if(match_l(input,_s21))
  {
   push(output,'\n');
   shift(input,2);
  }
  else if(match_l(input,_s22))
  {
   push(output,'\r');
   shift(input,2);
  }
  else if(match_l(input,_s23))
  {
   push(output,'\t');
   shift(input,2);
  }
  else if(match_l(input,_s35))
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
  else if(match_l(input,_s36))
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
 if(!match_l(input,_s37))
  return false;
 shift(input);
 if(is_full(input))
  return false;
 swap(x,output);
 return true;
}
str path_base(const str& x)
{
 const str s=to_c(x);
 const char* ptr=basename(s.ptr);
 check(neq(ptr,nullptr));
 return to_str(ptr);
}
str path_concat(const str& x,const str& y)
{
 const str s1=strip_r(x,_s12);
 const str s2=strip_l(y,_s12);
 return concat(s1,_s12,s2);
}
str path_dir(const str& x)
{
 const str s=to_c(x);
 const char* ptr=dirname(s.ptr);
 check(neq(ptr,nullptr));
 return to_str(ptr);
}
str path_fix(const str& x)
{
 check(is_full(x));
 const str s=strip_r(x,_s12);
 return concat(s,_s12);
}
str path_real(const str& x)
{
 const str s1=to_c(x);
 char s2[PATH_MAX]={};
 const char* ptr=realpath(s1.ptr,s2);
 check(neq(ptr,nullptr));
 return to_str(ptr);
}
void path_unlink(const str& x)
{
 const str s=to_c(x);
 unlink(s.ptr);
}
bool pop(arr_bool& x)
{
 const bool r=back(x);
 drop(x);
 return r;
}
char pop(str& x)
{
 const char r=back(x);
 drop(x);
 return r;
}
int pop(arr_int& x)
{
 const int r=back(x);
 drop(x);
 return r;
}
double pop(arr_double& x)
{
 const double r=back(x);
 drop(x);
 return r;
}
str pop(arr_str& x)
{
 const str r=back(x);
 drop(x);
 return r;
}
obj pop(arr_obj& x)
{
 const obj r=back(x);
 drop(x);
 return r;
}
var pop(arr& x)
{
 const var r=back(x);
 drop(x);
 return r;
}
void pop(arr_bool& x,const int y)
{
 drop(x,y);
}
void pop(str& x,const int y)
{
 drop(x,y);
}
void pop(arr_int& x,const int y)
{
 drop(x,y);
}
void pop(arr_double& x,const int y)
{
 drop(x,y);
}
void pop(arr_str& x,const int y)
{
 drop(x,y);
}
void pop(arr_obj& x,const int y)
{
 drop(x,y);
}
void pop(arr& x,const int y)
{
 drop(x,y);
}
void prepend(arr_bool& x,const arr_bool& y)
{
 const arr_bool v=x;
 assign(x,y);
 append(x,v);
}
void prepend(str& x,const str& y)
{
 const str v=x;
 assign(x,y);
 append(x,v);
}
void prepend(arr_int& x,const arr_int& y)
{
 const arr_int v=x;
 assign(x,y);
 append(x,v);
}
void prepend(arr_double& x,const arr_double& y)
{
 const arr_double v=x;
 assign(x,y);
 append(x,v);
}
void prepend(arr_str& x,const arr_str& y)
{
 const arr_str v=x;
 assign(x,y);
 append(x,v);
}
void prepend(arr_obj& x,const arr_obj& y)
{
 const arr_obj v=x;
 assign(x,y);
 append(x,v);
}
void prepend(arr& x,const arr& y)
{
 const arr v=x;
 assign(x,y);
 append(x,v);
}
void prepend(arr_str& x,const arr& y)
{
 arr_str a;
 append(a,y);
 prepend(x,a);
}
void print(const bool x)
{
 dump(x);
}
void print(const char x)
{
 dump(x);
}
void print(const int x)
{
 dump(x);
}
void print(const double x)
{
 dump(x);
}
void print(const void* x)
{
 dump(x);
}
void print(const str& x)
{
 echo(x);
 ln();
}
void push(arr_bool& x,const bool& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(str& x,const char& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(arr_int& x,const int& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(arr_double& x,const double& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(arr_str& x,const str& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(arr_obj& x,const obj& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(arr& x,const var& y)
{
 const int n=inc(x.len);
 allocate(x,n);
 back(x,y);
}
void push(arr& x,const bool& y)
{
 const var v=to_var(y);
 push(x,v);
}
void push(arr& x,const char& y)
{
 const var v=to_var(y);
 push(x,v);
}
void push(arr& x,const int& y)
{
 const var v=to_var(y);
 push(x,v);
}
void push(arr& x,const double& y)
{
 const var v=to_var(y);
 push(x,v);
}
void push(arr& x,const str& y)
{
 const var v=to_var(y);
 push(x,v);
}
void push(arr& x,const arr& y)
{
 const var v=to_var(y);
 push(x,v);
}
void push(arr& x,const obj& y)
{
 const var v=to_var(y);
 push(x,v);
}
void put(obj& x,const str& y,const arr_bool& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const bool& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 put(x,y,a);
}
void put(obj& x,const str& y,const arr_int& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const int& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 put(x,y,a);
}
void put(obj& x,const str& y,const arr_double& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const double& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 put(x,y,a);
}
void put(obj& x,const str& y,const arr_str& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const str& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 put(x,y,a);
}
void put(obj& x,const str& y,const arr_obj& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const obj& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 put(x,y,a);
}
void put(obj& x,const str& y,const bool& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const char& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const int& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const double& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const str& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const arr& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const obj& z)
{
 const var v=to_var(z);
 put(x,y,v);
}
void put(obj& x,const str& y,const var& z)
{
 check(!has(x,y));
 push(x.ks,y);
 push(x.vs,z);
}
str read(const fd& x)
{
 str r;
 while(true)
 {
  const str s=read(x,1024);
  if(is_empty(s))
   break;
  append(r,s);
 }
 return r;
}
str read(const fd& x,const int y)
{
 check(is_full(x));
 check(gte(y,0));
 str r;
 if(eq(y,0))
  return r;
 allocate(r,y);
 const int n=read(x.n,r.ptr,r.len);
 check(gte(n,0));
 allocate(r,n);
 return r;
}
arr_bool reject(const arr_bool& x,const bool& y)
{
 arr_bool r;
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
str reject(const str& x,const char& y)
{
 str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const char& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
arr_int reject(const arr_int& x,const int& y)
{
 arr_int r;
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
arr_double reject(const arr_double& x,const double& y)
{
 arr_double r;
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
arr_str reject(const arr_str& x,const str& y)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
arr_obj reject(const arr_obj& x,const obj& y)
{
 arr_obj r;
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
arr reject(const arr& x,const var& y)
{
 arr r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(neq(v,y))
   push(r,v);
 }
 return r;
}
void remove(arr_bool& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
void remove(str& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
void remove(arr_int& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
void remove(arr_double& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
void remove(arr_str& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
void remove(arr_obj& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
void remove(arr& x,const int y)
{
 check(between(y,0,x.len));
 const int n1=inc(y);
 const int n2=sub(x.len,n1);
 const int n3=dec(x.len);
 move(x,y,n1,n2);
 allocate(x,n3);
}
str repeat(const str& x,const int y)
{
 check(gte(y,0));
 str r;
 for(int i=0;lt(i,y);i++)
 {
  append(r,x);
 }
 return r;
}
str replace(const str& x,const str& y,const str& z)
{
 const arr_str a=split(x,y);
 return join(a,z);
}
arr_str scan(const str& x)
{
 const arr_str a=delimit_891(x);
 return group_892(a);
}
arr_str delimit_891(const str& x)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const char v=at(x,i);
  str right;
  push(right,v);
  if(is_empty(r))
  {
   push(r,right);
   continue;
  }
  const str left=back(r);
  str fragment;
  append(fragment,left);
  append(fragment,right);
  if(is_fragment(fragment))
  {
   drop(r);
   push(r,fragment);
  }
  else
   push(r,right);
 }
 return r;
}
arr_str group_892(const arr_str& x)
{
 arr_str r;
 arr_str a1=copy(x);
 while(is_full(a1))
 {
  const arr_str a2=reduce_893(a1);
  if(is_full(a2))
  {
   const str s=join(a2,_s38);
   push(r,s);
   shift(a1,a2.len);
  }
  else
  {
   const str s=shift(a1);
   push(r,s);
  }
 }
 return r;
}
arr_str reduce_893(const arr_str& x)
{
 check(is_full(x));
 arr_str r=copy(x);
 while(is_full(r))
 {
  const str s=join(r,_s38);
  if(is_token(s))
   break;
  drop(r);
 }
 return r;
}
void set(obj& x,const str& y,const arr_bool& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const bool& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 set(x,y,a);
}
void set(obj& x,const str& y,const arr_int& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const int& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 set(x,y,a);
}
void set(obj& x,const str& y,const arr_double& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const double& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 set(x,y,a);
}
void set(obj& x,const str& y,const arr_str& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const str& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 set(x,y,a);
}
void set(obj& x,const str& y,const arr_obj& z)
{
 arr a;
 for(int i=0;lt(i,z.len);i++)
 {
  const obj& v1=at(z,i);
  const var v2=to_var(v1);
  push(a,v2);
 }
 set(x,y,a);
}
void set(obj& x,const str& y,const bool& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const char& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const int& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const double& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const str& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const arr& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const obj& z)
{
 const var v=to_var(z);
 set(x,y,v);
}
void set(obj& x,const str& y,const var& z)
{
 bool done=false;
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  var& v=at(x.vs,i);
  if(eq(k,y))
  {
   check(!done);
   at(x.vs,i,z);
   assign(done,true);
   break;
  }
 }
 if(!done)
  put(x,y,z);
}
bool shift(arr_bool& x)
{
 const bool r=front(x);
 shift(x,1);
 return r;
}
char shift(str& x)
{
 const char r=front(x);
 shift(x,1);
 return r;
}
int shift(arr_int& x)
{
 const int r=front(x);
 shift(x,1);
 return r;
}
double shift(arr_double& x)
{
 const double r=front(x);
 shift(x,1);
 return r;
}
str shift(arr_str& x)
{
 const str r=front(x);
 shift(x,1);
 return r;
}
obj shift(arr_obj& x)
{
 const obj r=front(x);
 shift(x,1);
 return r;
}
var shift(arr& x)
{
 const var r=front(x);
 shift(x,1);
 return r;
}
void shift(arr_bool& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
void shift(str& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
void shift(arr_int& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
void shift(arr_double& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
void shift(arr_str& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
void shift(arr_obj& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
void shift(arr& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 move(x,0,y,n);
 allocate(x,n);
}
arr_bool slice_l(const arr_bool& x,const int y)
{
 check(between(y,0,x.len));
 arr_bool r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
str slice_l(const str& x,const int y)
{
 check(between(y,0,x.len));
 str r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
arr_int slice_l(const arr_int& x,const int y)
{
 check(between(y,0,x.len));
 arr_int r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
arr_double slice_l(const arr_double& x,const int y)
{
 check(between(y,0,x.len));
 arr_double r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
arr_str slice_l(const arr_str& x,const int y)
{
 check(between(y,0,x.len));
 arr_str r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
arr_obj slice_l(const arr_obj& x,const int y)
{
 check(between(y,0,x.len));
 arr_obj r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
arr slice_l(const arr& x,const int y)
{
 check(between(y,0,x.len));
 arr r;
 allocate(r,y);
 copy(r,0,x,0,y);
 return r;
}
arr_bool slice_r(const arr_bool& x,const int y)
{
 check(between(y,0,x.len));
 arr_bool r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
str slice_r(const str& x,const int y)
{
 check(between(y,0,x.len));
 str r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
arr_int slice_r(const arr_int& x,const int y)
{
 check(between(y,0,x.len));
 arr_int r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
arr_double slice_r(const arr_double& x,const int y)
{
 check(between(y,0,x.len));
 arr_double r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
arr_str slice_r(const arr_str& x,const int y)
{
 check(between(y,0,x.len));
 arr_str r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
arr_obj slice_r(const arr_obj& x,const int y)
{
 check(between(y,0,x.len));
 arr_obj r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
arr slice_r(const arr& x,const int y)
{
 check(between(y,0,x.len));
 arr r;
 allocate(r,y);
 const int n=sub(x.len,y);
 copy(r,0,x,n,y);
 return r;
}
arr_bool slice(const arr_bool& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
str slice(const str& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
arr_int slice(const arr_int& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
arr_double slice(const arr_double& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
arr_str slice(const arr_str& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
arr_obj slice(const arr_obj& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
arr slice(const arr& x,const int y)
{
 check(between(y,0,x.len));
 const int n=sub(x.len,y);
 return slice(x,y,n);
}
arr_bool slice(const arr_bool& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 arr_bool r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
str slice(const str& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 str r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
arr_int slice(const arr_int& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 arr_int r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
arr_double slice(const arr_double& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 arr_double r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
arr_str slice(const arr_str& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 arr_str r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
arr_obj slice(const arr_obj& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 arr_obj r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
arr slice(const arr& x,const int y,const int z)
{
 check(between(y,0,x.len));
 check(between(z,0,x.len));
 const int n=add(y,z);
 check(lte(n,x.len));
 arr r;
 allocate(r,z);
 copy(r,0,x,y,z);
 return r;
}
void sort(arr_bool& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const bool& ptr1=*(bool*)x;
  const bool& ptr2=*(bool*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(bool),compare);
}
void sort(str& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const char& ptr1=*(char*)x;
  const char& ptr2=*(char*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(char),compare);
}
void sort(arr_int& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const int& ptr1=*(int*)x;
  const int& ptr2=*(int*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(int),compare);
}
void sort(arr_double& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const double& ptr1=*(double*)x;
  const double& ptr2=*(double*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(double),compare);
}
void sort(arr_str& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const str& ptr1=*(str*)x;
  const str& ptr2=*(str*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(str),compare);
}
void sort(arr_obj& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const obj& ptr1=*(obj*)x;
  const obj& ptr2=*(obj*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(obj),compare);
}
void sort(arr& x)
{
 const auto compare=[](const void* x,const void* y)
 {
  check(neq(x,nullptr));
  check(neq(y,nullptr));
  const var& ptr1=*(var*)x;
  const var& ptr2=*(var*)y;
  return cmp(ptr1,ptr2);
 };
 qsort(x.ptr,x.len,sizeof(var),compare);
}
void space()
{
 echo(_s4);
}
arr_str split(const str& x)
{
 return split(x,_s26);
}
arr_str split(const str& x,const str& y)
{
 arr_str r;
 str s1=x;
 str s2;
 while(is_full(s1))
 {
  if(match_l(s1,y))
  {
   shift(s1,y.len);
   push(r,s2);
   clear(s2);
   continue;
  }
  const char c=shift(s1);
  push(s2,c);
 }
 push(r,s2);
 return r;
}
arr_str split(const arr_str& x,const str& y)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  const arr_str a=split(v,y);
  append(r,a);
 }
 return r;
}
void stop()
{
 try
 {
  const arr a=backtrace_get();
  const obj o=error_get();
  dump(a);
  dump(o);
 }
 catch(...)
 {
  print(_s13);
 }
 throw 42;
}
str strip_l(const str& x,const str& y)
{
 if(!match_l(x,y))
  return x;
 const int n=sub(x.len,y.len);
 return slice_r(x,n);
}
str strip_r(const str& x,const str& y)
{
 if(!match_r(x,y))
  return x;
 const int n=sub(x.len,y.len);
 return slice_l(x,n);
}
char sub(const char x,const char y)
{
 return x-y;
}
int sub(const int x,const int y)
{
 return x-y;
}
double sub(const double x,const double y)
{
 return x-y;
}
char sub(const char x,const int y)
{
 return x-y;
}
double sub(const double x,const int y)
{
 return x-y;
}
void swap(void*& x,void*& y)
{
 void* v=x;
 x=y;
 y=v;
}
void swap(bool*& x,bool*& y)
{
 bool* v=x;
 x=y;
 y=v;
}
void swap(char*& x,char*& y)
{
 char* v=x;
 x=y;
 y=v;
}
void swap(int*& x,int*& y)
{
 int* v=x;
 x=y;
 y=v;
}
void swap(double*& x,double*& y)
{
 double* v=x;
 x=y;
 y=v;
}
void swap(arr_bool*& x,arr_bool*& y)
{
 arr_bool* v=x;
 x=y;
 y=v;
}
void swap(str*& x,str*& y)
{
 str* v=x;
 x=y;
 y=v;
}
void swap(arr_int*& x,arr_int*& y)
{
 arr_int* v=x;
 x=y;
 y=v;
}
void swap(arr_double*& x,arr_double*& y)
{
 arr_double* v=x;
 x=y;
 y=v;
}
void swap(arr_str*& x,arr_str*& y)
{
 arr_str* v=x;
 x=y;
 y=v;
}
void swap(arr_obj*& x,arr_obj*& y)
{
 arr_obj* v=x;
 x=y;
 y=v;
}
void swap(arr*& x,arr*& y)
{
 arr* v=x;
 x=y;
 y=v;
}
void swap(obj*& x,obj*& y)
{
 obj* v=x;
 x=y;
 y=v;
}
void swap(var*& x,var*& y)
{
 var* v=x;
 x=y;
 y=v;
}
void swap(fd*& x,fd*& y)
{
 fd* v=x;
 x=y;
 y=v;
}
void swap(bool& x,bool& y)
{
 bool v=x;
 x=y;
 y=v;
}
void swap(char& x,char& y)
{
 char v=x;
 x=y;
 y=v;
}
void swap(int& x,int& y)
{
 int v=x;
 x=y;
 y=v;
}
void swap(double& x,double& y)
{
 double v=x;
 x=y;
 y=v;
}
void swap(arr_bool& x,arr_bool& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(str& x,str& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(arr_int& x,arr_int& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(arr_double& x,arr_double& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(arr_str& x,arr_str& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(arr_obj& x,arr_obj& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(arr& x,arr& y)
{
 swap(x.ptr,y.ptr);
 swap(x.len,y.len);
}
void swap(obj& x,obj& y)
{
 swap(x.ks,y.ks);
 swap(x.vs,y.vs);
}
void swap(var& x,var& y)
{
 swap((char&)x.t,(char&)y.t);
 for(int i=0;lt(i,sizeof(x.b));i++)
 {
  swap(x.b[i],y.b[i]);
 }
}
arr_bool tail(const arr_bool& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
str tail(const str& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
arr_int tail(const arr_int& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
arr_double tail(const arr_double& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
arr_str tail(const arr_str& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
arr_obj tail(const arr_obj& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
arr tail(const arr& x,const int y)
{
 check(gte(y,0));
 if(gte(y,x.len))
  return x;
 return slice_r(x,y);
}
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
double time_now()
{
 const double n=time_get();
 return sub(n,start);
}
arr_str to_arr(const str& x)
{
 arr_str r;
 push(r,x);
 return r;
}
arr_str to_arr(const str& x,const str& y)
{
 arr_str r;
 push(r,x);
 push(r,y);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 push(r,c);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 push(r,c);
 push(r,d);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 push(r,c);
 push(r,d);
 push(r,e);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 push(r,c);
 push(r,d);
 push(r,e);
 push(r,f);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 push(r,c);
 push(r,d);
 push(r,e);
 push(r,f);
 push(r,g);
 return r;
}
arr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g,const str& h)
{
 arr_str r;
 push(r,x);
 push(r,y);
 push(r,z);
 push(r,a);
 push(r,b);
 push(r,c);
 push(r,d);
 push(r,e);
 push(r,f);
 push(r,g);
 push(r,h);
 return r;
}
str to_c(const str& x)
{
 str r=x;
 push(r,0);
 return r;
}
str to_dump(const bool x)
{
 return to_lit(x);
}
str to_dump(const char x)
{
 return to_lit(x);
}
str to_dump(const int x)
{
 return to_lit(x);
}
str to_dump(const double x)
{
 return to_lit(x);
}
str to_dump(const void* x)
{
 return to_lit(x);
}
str to_dump(const fd& x)
{
 stop();
 return {};
}
str to_dump(const arr_bool& x)
{
 if(is_empty(x))
  return _s39;
 if(is_single(x))
 {
  const bool& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  if(eq(n,1))
   return concat(_s40,s,_s41);
 }
 arr_str a1;
 push(a1,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   append(s3,_s4);
   append(s3,_s42);
   append(s3,s2);
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s41);
 return join(a1);
}
str to_dump(const arr_int& x)
{
 if(is_empty(x))
  return _s39;
 if(is_single(x))
 {
  const int& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  if(eq(n,1))
   return concat(_s40,s,_s41);
 }
 arr_str a1;
 push(a1,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   append(s3,_s4);
   append(s3,_s42);
   append(s3,s2);
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s41);
 return join(a1);
}
str to_dump(const arr_double& x)
{
 if(is_empty(x))
  return _s39;
 if(is_single(x))
 {
  const double& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  if(eq(n,1))
   return concat(_s40,s,_s41);
 }
 arr_str a1;
 push(a1,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   append(s3,_s4);
   append(s3,_s42);
   append(s3,s2);
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s41);
 return join(a1);
}
str to_dump(const arr_str& x)
{
 if(is_empty(x))
  return _s39;
 if(is_single(x))
 {
  const str& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  if(eq(n,1))
   return concat(_s40,s,_s41);
 }
 arr_str a1;
 push(a1,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   append(s3,_s4);
   append(s3,_s42);
   append(s3,s2);
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s41);
 return join(a1);
}
str to_dump(const arr_obj& x)
{
 if(is_empty(x))
  return _s39;
 if(is_single(x))
 {
  const obj& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  if(eq(n,1))
   return concat(_s40,s,_s41);
 }
 arr_str a1;
 push(a1,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   append(s3,_s4);
   append(s3,_s42);
   append(s3,s2);
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s41);
 return join(a1);
}
str to_dump(const arr& x)
{
 if(is_empty(x))
  return _s39;
 if(is_single(x))
 {
  const var& v=front(x);
  const str s=to_dump(v);
  const int n=count_line(s);
  if(eq(n,1))
   return concat(_s40,s,_s41);
 }
 arr_str a1;
 push(a1,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v1=at(x,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   const str s2=to_str(i);
   str s3;
   append(s3,_s4);
   append(s3,_s42);
   append(s3,s2);
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s41);
 return join(a1);
}
str to_dump(const str& x)
{
 return to_lit(x);
}
str to_dump(const var& x)
{
 if(is_bool(x))
 {
  const bool v=at_bool(x);
  return to_dump(v);
 }
 if(is_char(x))
 {
  const char v=at_char(x);
  return to_dump(v);
 }
 if(is_int(x))
 {
  const int v=at_int(x);
  return to_dump(v);
 }
 if(is_double(x))
 {
  const double v=at_double(x);
  return to_dump(v);
 }
 if(is_str(x))
 {
  const str& v=at_str(x);
  return to_dump(v);
 }
 if(is_arr(x))
 {
  const arr& v=at_arr(x);
  return to_dump(v);
 }
 if(is_obj(x))
 {
  const obj& v=at_obj(x);
  return to_dump(v);
 }
 stop();
 return {};
}
str to_dump(const obj& x)
{
 if(is_empty(x))
  return _s43;
 if(is_single(x))
 {
  const str& k=front(x.ks);
  const var& v=front(x.vs);
  const str s1=to_dump(v);
  const int n=count_line(s1);
  if(eq(n,1))
  {
   str s2;
   if(is_key(k))
    assign(s2,k);
   else
   {
    const str s3=to_lit(k);
    assign(s2,s3);
   }
   return concat(_s44,s2,_s8,s1,_s45);
  }
 }
 arr_str a1;
 push(a1,_s44);
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v1=at(x.vs,i);
  const str s1=to_dump(v1);
  const arr_str a2=split(s1);
  str s2;
  if(is_key(k))
   assign(s2,k);
  else
  {
   const str s3=to_lit(k);
   assign(s2,s3);
  }
  if(is_single(a2))
  {
   str s3;
   append(s3,_s4);
   append(s3,s2);
   append(s3,_s4);
   append(s3,s1);
   push(a1,s3);
   continue;
  }
  const str s3=concat(_s4,s2);
  push(a1,s3);
  for(int j=0;lt(j,a2.len);j++)
  {
   const str& v2=at(a2,j);
   str s3;
   append(s3,_s4);
   append(s3,v2);
   push(a1,s3);
  }
 }
 push(a1,_s45);
 return join(a1);
}
int to_int(const str& x)
{
 int r=0;
 const bool b=parse_int(r,x);
 check(b);
 return r;
}
str to_lit(const bool x)
{
 return to_str(x);
}
str to_lit(const int x)
{
 return to_str(x);
}
str to_lit(const double x)
{
 return to_str(x);
}
str to_lit(const void* x)
{
 return to_str(x);
}
str to_lit(const fd& x)
{
 stop();
 return {};
}
str to_lit(const char x)
{
 str r;
 const str s=escape(x);
 append(r,_s33);
 append(r,s);
 append(r,_s33);
 return r;
}
str to_lit(const arr_bool& x)
{
 str r;
 append(r,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  const str s=to_lit(v);
  append(r,s);
  if(!is_last(x,i))
   append(r,_s4);
 }
 append(r,_s41);
 return r;
}
str to_lit(const arr_int& x)
{
 str r;
 append(r,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  const str s=to_lit(v);
  append(r,s);
  if(!is_last(x,i))
   append(r,_s4);
 }
 append(r,_s41);
 return r;
}
str to_lit(const arr_double& x)
{
 str r;
 append(r,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  const str s=to_lit(v);
  append(r,s);
  if(!is_last(x,i))
   append(r,_s4);
 }
 append(r,_s41);
 return r;
}
str to_lit(const arr_str& x)
{
 str r;
 append(r,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  const str s=to_lit(v);
  append(r,s);
  if(!is_last(x,i))
   append(r,_s4);
 }
 append(r,_s41);
 return r;
}
str to_lit(const arr_obj& x)
{
 str r;
 append(r,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  const str s=to_lit(v);
  append(r,s);
  if(!is_last(x,i))
   append(r,_s4);
 }
 append(r,_s41);
 return r;
}
str to_lit(const arr& x)
{
 str r;
 append(r,_s40);
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  const str s=to_lit(v);
  append(r,s);
  if(!is_last(x,i))
   append(r,_s4);
 }
 append(r,_s41);
 return r;
}
str to_lit(const str& x)
{
 str r;
 push(r,'"');
 for(int i=0;lt(i,x.len);i++)
 {
  const char c=at(x,i);
  const str s=escape(c);
  append(r,s);
 }
 push(r,'"');
 return r;
}
str to_lit(const var& x)
{
 if(is_bool(x))
 {
  const bool v=at_bool(x);
  return to_lit(v);
 }
 if(is_char(x))
 {
  const char v=at_char(x);
  return to_lit(v);
 }
 if(is_int(x))
 {
  const int v=at_int(x);
  return to_lit(v);
 }
 if(is_double(x))
 {
  const double v=at_double(x);
  return to_lit(v);
 }
 if(is_str(x))
 {
  const str& v=at_str(x);
  return to_lit(v);
 }
 if(is_arr(x))
 {
  const arr& v=at_arr(x);
  return to_lit(v);
 }
 if(is_obj(x))
 {
  const obj& v=at_obj(x);
  return to_lit(v);
 }
 stop();
 return {};
}
str to_lit(const obj& x)
{
 str r;
 append(r,_s44);
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v=at(x.vs,i);
  const str s1=to_lit(v);
  str s2;
  if(is_key(k))
   assign(s2,k);
  else
  {
   const str s3=to_lit(k);
   assign(s2,s3);
  }
  append(r,s2);
  append(r,_s8);
  append(r,s1);
  if(!is_last(x.ks,i))
   append(r,_s4);
 }
 append(r,_s45);
 return r;
}
str to_str(const bool x)
{
 if(x)
  return _s46;
 return _s47;
}
str to_str(const char x)
{
 str r;
 push(r,x);
 return r;
}
str to_str(const int x)
{
 const int n1=64;
 char s1[n1]={};
 const str s2=to_c(_s48);
 const int n2=snprintf(s1,n1,s2.ptr,x);
 check(gte(n2,0));
 return to_str(s1);
}
str to_str(const double x)
{
 return to_str(x,2);
}
str to_str(const double x,const int y)
{
 check(gte(y,0));
 const int n1=64;
 char s1[n1]={};
 const str s2=to_c(_s49);
 const int n2=snprintf(s1,n1,s2.ptr,x);
 check(gte(n2,0));
 const str s3=to_str(s1);
 const arr_str a=split(s3,_s14);
 const str& s4=front(a);
 const str& s5=at(a,1);
 str s6=slice_r(s5,y);
 while(is_full(s6))
 {
  const char c=back(s6);
  if(neq(c,'0'))
   break;
  drop(s6);
 }
 if(is_empty(s6))
  return s4;
 if(eq(y,0))
  return s4;
 return concat(s4,_s14,s6);
}
str to_str(const void* x)
{
 const int n1=64;
 char s1[n1]={};
 const str s2=to_c(_s50);
 const int n2=snprintf(s1,n1,s2.ptr,x);
 check(gte(n2,0));
 return to_str(s1);
}
str to_str(const char* x)
{
 check(neq(x,nullptr));
 str r;
 const int n=strlen(x);
 allocate(r,n);
 memcpy(r.ptr,x,n);
 return r;
}
str to_str(const arr_bool& x)
{
 arr_str a;
 for(int i=0;lt(i,x.len);i++)
 {
  const bool& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  append(s3,_s42);
  append(s3,s1);
  append(s3,_s4);
  append(s3,s2);
  push(a,s3);
 }
 return join(a);
}
str to_str(const arr_int& x)
{
 arr_str a;
 for(int i=0;lt(i,x.len);i++)
 {
  const int& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  append(s3,_s42);
  append(s3,s1);
  append(s3,_s4);
  append(s3,s2);
  push(a,s3);
 }
 return join(a);
}
str to_str(const arr_double& x)
{
 arr_str a;
 for(int i=0;lt(i,x.len);i++)
 {
  const double& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  append(s3,_s42);
  append(s3,s1);
  append(s3,_s4);
  append(s3,s2);
  push(a,s3);
 }
 return join(a);
}
str to_str(const arr_str& x)
{
 arr_str a;
 for(int i=0;lt(i,x.len);i++)
 {
  const str& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  append(s3,_s42);
  append(s3,s1);
  append(s3,_s4);
  append(s3,s2);
  push(a,s3);
 }
 return join(a);
}
str to_str(const arr_obj& x)
{
 arr_str a;
 for(int i=0;lt(i,x.len);i++)
 {
  const obj& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  append(s3,_s42);
  append(s3,s1);
  append(s3,_s4);
  append(s3,s2);
  push(a,s3);
 }
 return join(a);
}
str to_str(const arr& x)
{
 arr_str a;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  const str s1=to_str(i);
  const str s2=to_lit(v);
  str s3;
  append(s3,_s42);
  append(s3,s1);
  append(s3,_s4);
  append(s3,s2);
  push(a,s3);
 }
 return join(a);
}
str to_str(const str& x)
{
 return x;
}
str to_str(const var& x)
{
 if(is_bool(x))
 {
  const bool v=at_bool(x);
  return to_str(v);
 }
 else if(is_char(x))
 {
  const char v=at_char(x);
  return to_str(v);
 }
 else if(is_int(x))
 {
  const int v=at_int(x);
  return to_str(v);
 }
 else if(is_double(x))
 {
  const int v=at_double(x);
  return to_str(v);
 }
 else if(is_str(x))
  return at_str(x);
 else if(is_arr(x))
 {
  const arr& v=at_arr(x);
  return to_str(v);
 }
 else if(is_obj(x))
 {
  const obj& v=at_obj(x);
  return to_str(v);
 }
 else
  stop();
 return {};
}
str to_str(const obj& x)
{
 arr_str a;
 for(int i=0;lt(i,x.ks.len);i++)
 {
  const str& k=at(x.ks,i);
  const var& v=at(x.vs,i);
  const str s1=to_lit(v);
  str s2;
  append(s2,k);
  append(s2,_s4);
  append(s2,s1);
  push(a,s2);
 }
 return join(a);
}
var to_var(const bool x)
{
 var r;
 r.t=type::_bool;
 bool& v=at_bool(r);
 assign(v,x);
 return r;
}
var to_var(const char x)
{
 var r;
 r.t=type::_char;
 char& v=at_char(r);
 assign(v,x);
 return r;
}
var to_var(const int x)
{
 var r;
 r.t=type::_int;
 int& v=at_int(r);
 assign(v,x);
 return r;
}
var to_var(const double x)
{
 var r;
 r.t=type::_double;
 double& v=at_double(r);
 assign(v,x);
 return r;
}
var to_var(const str& x)
{
 var r;
 r.t=type::_str;
 str& v=at_str(r);
 str* ptr=&v;
 new (ptr) str;
 assign(v,x);
 return r;
}
var to_var(const arr& x)
{
 var r;
 r.t=type::_arr;
 arr& v=at_arr(r);
 arr* ptr=&v;
 new (ptr) arr;
 assign(v,x);
 return r;
}
var to_var(const obj& x)
{
 var r;
 r.t=type::_obj;
 obj& v=at_obj(r);
 obj* ptr=&v;
 new (ptr) obj;
 assign(v,x);
 return r;
}
str trim_l(const str& x)
{
 str r=x;
 while(is_full(r))
 {
  const char c=front(r);
  if(is_blank(c))
   shift(r);
  else
   break;
 }
 return r;
}
str trim_r(const str& x)
{
 str r=x;
 while(is_full(r))
 {
  const char c=back(r);
  if(is_blank(c))
   pop(r);
  else
   break;
 }
 return r;
}
str trim(const str& x)
{
 const str s=trim_r(x);
 return trim_l(s);
}
str unindent(const str& x)
{
 const str r=trim_r(x);
 if(is_empty(r))
  return r;
 const char c=front(r);
 if(eq(c,' '))
  return slice(r,1);
 return r;
}
void unshift(arr_bool& x,const bool& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(str& x,const char& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(arr_int& x,const int& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(arr_double& x,const double& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(arr_str& x,const str& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(arr_obj& x,const obj& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(arr& x,const var& y)
{
 const int n1=x.len;
 const int n2=inc(n1);
 allocate(x,n2);
 move(x,1,0,n1);
 front(x,y);
}
void unshift(arr& x,const bool& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void unshift(arr& x,const char& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void unshift(arr& x,const int& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void unshift(arr& x,const double& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void unshift(arr& x,const str& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void unshift(arr& x,const arr& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void unshift(arr& x,const obj& y)
{
 const var v=to_var(y);
 unshift(x,v);
}
void write(const fd& x,const str& y)
{
 check(is_full(x));
 if(is_empty(y))
  return;
 const int n=write(x.n,y.ptr,y.len);
 check(eq(n,y.len));
}
arr_str cpl_code(const arr& x)
{
 const arr_str a=inline_code_894(x);
 return replace_lit_895(a);
}
arr_str inline_code_894(const arr& x)
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
   const arr& body=get_arr(o,_s51);
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
  const str& signature=get_str(o,_s52);
  const arr& body=get_arr(o,_s51);
  push(r,signature);
  append(r,body);
 }
 return r;
}
arr_str replace_lit_895(const arr_str& x)
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
    str key=_s53;
    const str s=to_str(n);
    append(key,s);
    push(outputs,key);
   }
   else
    push(outputs,v);
  }
  const str line=join(outputs,_s38);
  push(lines,line);
 }
 for(int i=0;lt(i,strings.len);i++)
 {
  const str& v=at(strings,i);
  str key=_s53;
  const str s1=to_str(i);
  append(key,s1);
  const str s2=concat(_s54,key,_s55,v,_s56);
  push(r,s2);
 }
 append(r,lines);
 return r;
}
int cpl_count_tpl(const arr& x)
{
 int r=0;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
   continue;
  const obj& o=at_obj(v);
  const arr& signatures=get_arr(o,_s57);
  for(int j=0;lt(j,signatures.len);j++)
  {
   const var& v=at(signatures,j);
   const str& s=at_str(v);
   if(is_tpl(s))
    r=inc(r);
  }
 }
 return r;
}
arr cpl_deduplicate(const arr& x)
{
 arr r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
  {
   push(r,v);
   continue;
  }
  if(is_inline(v))
  {
   push(r,v);
   continue;
  }
  const obj& o=at_obj(v);
  const str signature=get_str(o,_s52);
  if(defined_896(r,signature))
  {
   echo(_s58);
   space();
   dump(signature);
   const arr a=discard_897(r,signature);
   clear(r);
   append(r,a);
  }
  push(r,v);
 }
 return r;
}
bool defined_896(const arr& x,const str& y)
{
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
   continue;
  const obj& o=at_obj(v);
  const str& s=get_str(o,_s52);
  if(eq(s,y))
   return true;
 }
 return false;
}
arr discard_897(const arr& x,const str& y)
{
 arr r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
  {
   push(r,v);
   continue;
  }
  const obj& o=at_obj(v);
  const str& s=get_str(o,_s52);
  if(eq(s,y))
  {
  }
  else
   push(r,v);
 }
 return r;
}
arr cpl_flatten(const arr& x)
{
 arr r;
 int id=x.len;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
  {
   push(r,v);
   continue;
  }
  const obj& o1=at_obj(v);
  obj o2=parse_898(o1,id);
  obj caller=get_obj(o2,_s59);
  arr callees=get_arr(o2,_s60);
  if(is_empty(callees))
  {
   push(r,caller);
   continue;
  }
  const arr body=get_arr(caller,_s51);
  const arr a1=instantiate_899(body,callees);
  set(caller,_s51,a1);
  for(int i=0;lt(i,callees.len);i++)
  {
   var& v=at(callees,i);
   obj& o3=at_obj(v);
   const arr body=get_arr(o3,_s51);
   const arr a1=instantiate_899(body,callees);
   set(o3,_s51,a1);
  }
  const obj o3=lift_900(caller);
  push(r,o3);
  for(int i=0;lt(i,callees.len);i++)
  {
   const var& v=at(callees,i);
   const obj& o1=at_obj(v);
   const obj o2=lift_900(o1);
   push(r,o2);
  }
 }
 return r;
}
obj parse_898(const obj& x,int& y)
{
 const arr& a1=get_arr(x,_s51);
 arr a2=copy(a1);
 obj caller;
 arr callees;
 const str signature=get_str(x,_s52);
 arr body;
 put(caller,_s52,signature);
 while(is_full(a2))
 {
  const var& v1=shift(a2);
  const str& s1=at_str(v1);
  const arr_str a3=split(s1,_s4);
  arr_str a4=reject(a3,_s38);
  const str fn=shift(a4);
  if(neq(fn,_s9))
  {
   push(body,s1);
   continue;
  }
  const str s2=join(a4,_s4);
  arr_str a5;
  for(int i=0;lt(i,a4.len);i++)
  {
   const str& s=at(a4,i);
   const arr_str a=split(s,_s0);
   append(a5,a);
  }
  shift(a5);
  const str local=shift(a5);
  const str s3=to_str(y);
  const str global=concat(local,_s61,s3);
  const int n=inc(y);
  assign(y,n);
  const str signature=replace(s2,local,global);
  arr body2;
  const var v2=shift(a2);
  const str& s4=at_str(v2);
  check(eq(s4,_s62));
  push(body2,_s44);
  while(is_full(a2))
  {
   const var v3=shift(a2);
   const str& s1=at_str(v3);
   const int n=get_indent(s1);
   if(eq(n,1))
   {
    check(eq(s1,_s63));
    push(body2,_s45);
    break;
   }
   const str s2=unindent(s1);
   push(body2,s2);
  }
  obj o;
  put(o,_s64,global);
  put(o,_s65,local);
  put(o,_s52,signature);
  put(o,_s51,body2);
  push(callees,o);
 }
 put(caller,_s51,body);
 obj r;
 put(r,_s59,caller);
 put(r,_s60,callees);
 return r;
}
arr instantiate_899(const arr& x,const arr& y)
{
 arr r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  str s1=at_str(v);
  for(int i=0;lt(i,y.len);i++)
  {
   const var& v=at(y,i);
   const obj& o=at_obj(v);
   const str& local=get_str(o,_s65);
   const str& global=get_str(o,_s64);
   const str s2=replace(s1,local,global);
   assign(s1,s2);
  }
  push(r,s1);
 }
 return r;
}
obj lift_900(const obj& x)
{
 obj r;
 const str signature=get_str(x,_s52);
 const arr body=get_arr(x,_s51);
 put(r,_s52,signature);
 put(r,_s51,body);
 return r;
}
arr_str cpl_forward(const arr& x)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
   continue;
  const obj& o=at_obj(v);
  const str& signature=get_str(o,_s52);
  if(is_struct(signature))
  {
   const str s=concat(signature,_s66);
   push(r,s);
  }
 }
 return r;
}
arr cpl_implement(const arr& x)
{
 arr r;
 arr a1;
 arr a2;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_impl_905(v))
  {
   push(a1,v);
   continue;
  }
  push(a2,v);
 }
 const obj impls=parse_901(a1);
 for(int i=0;lt(i,a2.len);i++)
 {
  const var& v=at(a2,i);
  if(is_str(v))
  {
   push(r,v);
   continue;
  }
  const obj& o=at_obj(v);
  const arr a=generate_902(o,impls);
  append(r,a);
 }
 return r;
}
obj parse_901(const arr& x)
{
 obj r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v1=at(x,i);
  const obj& o1=at_obj(v1);
  const arr& signatures=get_arr(o1,_s57);
  check(is_single(signatures));
  const arr& body=get_arr(o1,_s51);
  const var& v2=front(signatures);
  const str& s1=at_str(v2);
  arr_str a=split(s1,_s4);
  const str s2=shift(a);
  check(eq(s2,_s67));
  const str name=shift(a);
  check(is_empty(a));
  obj values;
  for(int i=0;lt(i,body.len);i++)
  {
   const var& v=at(body,i);
   const str& s1=at_str(v);
   const str s2=trim(s1);
   arr_str a=split(s2,_s4);
   str key=shift(a);
   put(values,key,a);
  }
  if(has(r,name))
  {
   obj& o=get_obj(r,name);
   for(int i=0;lt(i,values.ks.len);i++)
   {
    const str& k=at(values.ks,i);
    const var& v=at(values.vs,i);
    const arr& a=at_arr(v);
    if(has(o,k))
    {
     var& v2=get(o,k);
     arr& a2=at_arr(v2);
     append(a2,a);
    }
    else
     put(o,k,v);
   }
  }
  else
   put(r,name,values);
 }
 return r;
}
arr generate_902(const obj& x,const obj& y)
{
 arr r;
 const arr& signatures=get_arr(x,_s57);
 for(int i=0;lt(i,signatures.len);i++)
 {
  const var& v=at(signatures,i);
  const var& body=get(x,_s51);
  obj o;
  put(o,_s52,v);
  put(o,_s51,body);
  const str& s=at_str(v);
  if(is_tpl(s))
  {
   const arr a=implement_903(o,y);
   append(r,a);
   continue;
  }
  push(r,o);
 }
 return r;
}
arr implement_903(const obj& x,const obj& y)
{
 arr r;
 const str& signature=get_str(x,_s52);
 arr_str a=split(signature,_s4);
 const str tpl=shift(a);
 const str name=shift(a);
 const str s1=join(a,_s4);
 const obj& values=get_obj(y,name);
 for(int i=0;lt(i,values.ks.len);i++)
 {
  const str& k=at(values.ks,i);
  const var& v1=at(values.vs,i);
  arr pairs=at_arr(v1);
  unshift(pairs,k);
  const str signature=substitute_904(s1,pairs);
  const arr& a=get_arr(x,_s51);
  arr body;
  for(int i=0;lt(i,a.len);i++)
  {
   const var& v1=at(a,i);
   const str& s1=at_str(v1);
   const str s2=substitute_904(s1,pairs);
   const var v2=to_var(s2);
   push(body,v2);
  }
  obj o;
  put(o,_s52,signature);
  put(o,_s51,body);
  push(r,o);
 }
 return r;
}
str substitute_904(const str& x,const arr& y)
{
 str r=x;
 for(int i=0;lt(i,y.len);i++)
 {
  const var& v=at(y,i);
  const str& s1=at_str(v);
  const char c1='T';
  const char c2=add(c1,i);
  str s2;
  push(s2,c2);
  const str s3=replace(r,s2,s1);
  assign(r,s3);
 }
 return r;
}
bool is_impl_905(const var& x)
{
 if(!is_obj(x))
  return false;
 const obj& o=at_obj(x);
 const arr& signatures=get_arr(o,_s57);
 if(is_many(signatures))
  return false;
 const var& v=front(signatures);
 const str& s=at_str(v);
 arr_str a=split(s,_s4);
 const str impl=shift(a);
 if(neq(impl,_s67))
  return false;
 if(is_empty(a))
  return false;
 const str name=shift(a);
 return is_empty(a);
}
arr_str cpl_import(const str& x)
{
 arr_str r;
 const arr_str a=dir_read(x);
 for(int i=0;lt(i,a.len);i++)
 {
  const str& v=at(a,i);
  if(is_dir(v))
  {
   const arr_str a=cpl_import(v);
   append(r,a);
  }
  else
   push(r,v);
 }
 return r;
}
arr_str cpl_include(const arr& x)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
  {
   const str& s=at_str(v);
   push(r,s);
  }
 }
 return r;
}
arr cpl_parse(const str& x)
{
 const arr a=preprocess_906(x);
 return agglomerate_907(a);
}
arr preprocess_906(const str& x)
{
 arr r;
 const arr_str a=split(x);
 for(int i=0;lt(i,a.len);i++)
 {
  const str& v1=at(a,i);
  const str s1=trim_r(v1);
  if(is_empty(s1))
   continue;
  const str s2=trim(s1);
  if(match_l(s2,_s25))
   continue;
  const var v2=to_var(s1);
  push(r,v2);
 }
 return r;
}
arr agglomerate_907(const arr& x)
{
 arr r;
 arr a=x;
 while(is_full(a))
 {
  const var v1=shift(a);
  const str& s1=at_str(v1);
  const int n1=get_indent(s1);
  if(neq(n1,0))
  {
   push(r,v1);
   continue;
  }
  if(match_l(s1,_s42))
  {
   push(r,v1);
   continue;
  }
  arr signatures;
  push(signatures,v1);
  while(is_full(a))
  {
   const var v=front(a);
   const str& s=at_str(v);
   const int n=get_indent(s);
   if(neq(n,0))
    break;
   if(eq(s,_s44))
    break;
   shift(a);
   push(signatures,v);
  }
  arr body;
  const var v2=front(a);
  const str& s2=at_str(v2);
  if(eq(s2,_s44))
  {
   push(body,v2);
   shift(a);
  }
  while(is_full(a))
  {
   const var v=front(a);
   const str& s=at_str(v);
   if(match_l(s,_s45))
   {
    shift(a);
    push(body,v);
    break;
   }
   const int n=get_indent(s);
   if(eq(n,0))
    break;
   shift(a);
   push(body,v);
  }
  obj o;
  const var v3=to_var(signatures);
  const var v4=to_var(body);
  put(o,_s57,signatures);
  put(o,_s51,body);
  const var v5=to_var(o);
  push(r,v5);
 }
 return r;
}
arr_str cpl_prototype(const arr& x)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(is_str(v))
   continue;
  if(is_inline(v))
   continue;
  const obj& o=at_obj(v);
  const str& signature=get_str(o,_s52);
  if(is_struct(signature))
   continue;
  const str s=concat(signature,_s66);
  push(r,s);
 }
 return r;
}
arr_str cpl_struct(const arr& x)
{
 arr_str r;
 for(int i=0;lt(i,x.len);i++)
 {
  const var& v=at(x,i);
  if(!is_struct(v))
   continue;
  const obj& o=at_obj(v);
  const str& signature=get_str(o,_s52);
  const arr& body=get_arr(o,_s51);
  push(r,signature);
  append(r,body);
 }
 return r;
}
void init(const arr_str& x)
{
 if(is_empty(x))
 {
  arr_str a;
  push(a,_s68);
  return init(a);
 }
 arr_str a1=copy(x);
 const str name=shift(a1);
 bool run=false;
 str compiler=_s69;
 if(extract(a1,_s70))
  run=true;
 if(extract(a1,_s71))
  assign(compiler,_s69);
 if(extract(a1,_s72))
  assign(compiler,_s73);
 if(is_full(a1))
 {
  print(_s74);
  dump(a1);
  return;
 }
 const str s1=path_concat(_s75,name);
 check(is_dir(s1));
 arr_str a2=cpl_import(_s76);
 const arr_str a3=cpl_import(s1);
 append(a2,a3);
 arr a4;
 for(int i=0;lt(i,a2.len);i++)
 {
  const str& v=at(a2,i);
  const str s1=to_lit(v);
  echo(_s77);
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
 const str out=concat(_s78,name,_s79);
 const str binary=concat(_s78,name);
 const arr_str a13=to_arr(_s80,out,_s81,binary,_s82,_s83,_s84,_s85,_s86,_s87);
 const str gcc=join(a13,_s4);
 const str gcc_instruction=concat(_s25,gcc);
 const arr_str a14=to_arr(_s88,out,_s81,binary,_s89,_s90,_s91,_s85,_s86,_s87);
 const str clang=join(a14,_s4);
 const str clang_instruction=concat(_s25,clang);
 const str date=date_get();
 const str generate=concat(_s92,date);
 const int generic=cpl_count_tpl(a4);
 arr_str result;
 push(result,gcc_instruction);
 push(result,clang_instruction);
 push(result,generate);
 push(result,_s93);
 push(result,_s94);
 push(result,_s95);
 append(result,a8);
 push(result,_s96);
 append(result,a9);
 push(result,_s97);
 append(result,a10);
 push(result,_s98);
 append(result,a11);
 push(result,_s99);
 append(result,a12);
 const str source=join(result);
 const str s2=to_lit(source);
 const str s3=concat(_s100,s2,_s66);
 push(result,_s101);
 push(result,s3);
 echo(_s77);
 space();
 print(a2.len);
 echo(_s102);
 space();
 print(a8.len);
 echo(_s9);
 space();
 print(a10.len);
 echo(_s103);
 space();
 print(generic);
 echo(_s104);
 space();
 print(result.len);
 const str content=join(result);
 file_save(out,content);
 const double n1=time_now();
 const str s4=to_str(n1);
 const str s5=concat(s4,_s27);
 echo(_s105);
 space();
 print(s5);
 if(is_file(binary))
  path_unlink(binary);
 const double n2=time_now();
 if(eq(compiler,_s69))
  os_system(gcc);
 else if(eq(compiler,_s73))
  os_system(clang);
 else
  stop();
 const double n3=time_now();
 const double n4=sub(n3,n2);
 const str s6=to_str(n4);
 const str s7=concat(s6,_s27);
 echo(_s68);
 space();
 print(s7);
 if(is_file(binary))
 {
  const int n1=file_size(binary);
  const int n2=div_(n1,1024);
  const str s1=to_str(n2);
  const str s2=concat(s2,_s106);
  echo(_s107);
  space();
  print(s2);
  if(run)
  {
   const str path=path_real(binary);
   os_system(_s108,_s109,_s110,_s111,_s112,path);
  }
 }
}
bool is_inline(const var& x)
{
 if(!is_obj(x))
  return false;
 const obj& o=at_obj(x);
 const str& signature=get_str(o,_s52);
 return eq(signature,_s113);
}
bool is_struct(const str& x)
{
 if(!is_line(x))
  return false;
 if(match_l(x,_s114))
  return true;
 if(match_l(x,_s115))
  return true;
 return false;
}
bool is_struct(const var& x)
{
 if(!is_obj(x))
  return false;
 const obj& o=at_obj(x);
 const str& signature=get_str(o,_s52);
 return is_struct(signature);
}
bool is_tpl(const str& x)
{
 const arr_str a=split(x,_s4);
 const str s=front(a);
 return eq(s,_s116);
}
//definition
const char* source="//g++ out-compile.cpp -o out-compile -std=c++23 -fmax-errors=5 -g -O3 -rdynamic -no-pie\n//clang++ out-compile.cpp -o out-compile -std=c++2b -ferror-limit=5 -gdwarf-4 -O3 -rdynamic -no-pie\n//generated 2025/1/17\n//source\nextern const char* source;\n//forward\nstruct arr_bool;\nstruct str;\nstruct arr_int;\nstruct arr_double;\nstruct arr_str;\nstruct arr_obj;\nstruct arr;\nenum struct type:char;\nstruct var;\nstruct obj;\nstruct fd;\n//include\n#include \"new\"\n#include \"dirent.h\"\n#include \"errno.h\"\n#include \"execinfo.h\"\n#include \"fcntl.h\"\n#include \"libgen.h\"\n#include \"limits.h\"\n#include \"stdio.h\"\n#include \"stdlib.h\"\n#include \"string.h\"\n#include \"time.h\"\n#include \"unistd.h\"\n#include \"sys/stat.h\"\n//prototype\nchar add(const char x,const char y);\nint add(const int x,const int y);\ndouble add(const double x,const double y);\nchar add(const char x,const int y);\ndouble add(const double x,const int y);\nvoid allocate(arr_bool& x,const int y);\nvoid allocate(str& x,const int y);\nvoid allocate(arr_int& x,const int y);\nvoid allocate(arr_double& x,const int y);\nvoid allocate(arr_str& x,const int y);\nvoid allocate(arr_obj& x,const int y);\nvoid allocate(arr& x,const int y);\nvoid append(arr_bool& x,const arr_bool& y);\nvoid append(str& x,const str& y);\nvoid append(arr_int& x,const arr_int& y);\nvoid append(arr_double& x,const arr_double& y);\nvoid append(arr_str& x,const arr_str& y);\nvoid append(arr_obj& x,const arr_obj& y);\nvoid append(arr& x,const arr& y);\nvoid append(arr_str& x,const arr& y);\nvoid assign(void*& x,void*& y);\nvoid assign(bool*& x,bool*& y);\nvoid assign(char*& x,char*& y);\nvoid assign(int*& x,int*& y);\nvoid assign(double*& x,double*& y);\nvoid assign(arr_bool*& x,arr_bool*& y);\nvoid assign(str*& x,str*& y);\nvoid assign(arr_int*& x,arr_int*& y);\nvoid assign(arr_double*& x,arr_double*& y);\nvoid assign(arr_str*& x,arr_str*& y);\nvoid assign(arr_obj*& x,arr_obj*& y);\nvoid assign(arr*& x,arr*& y);\nvoid assign(obj*& x,obj*& y);\nvoid assign(var*& x,var*& y);\nvoid assign(fd*& x,fd*& y);\nvoid assign(bool& x,const bool y);\nvoid assign(char& x,const char y);\nvoid assign(int& x,const int y);\nvoid assign(double& x,const double y);\nvoid assign(arr_bool& x,const arr_bool& y);\nvoid assign(str& x,const str& y);\nvoid assign(arr_int& x,const arr_int& y);\nvoid assign(arr_double& x,const arr_double& y);\nvoid assign(arr_str& x,const arr_str& y);\nvoid assign(arr_obj& x,const arr_obj& y);\nvoid assign(arr& x,const arr& y);\nvoid assign(var& x,const var& y);\nvoid assign(obj& x,const obj& y);\narr& at_arr(var& x);\nconst arr& at_arr(const var& x);\nbool& at_bool(var& x);\nconst bool& at_bool(const var& x);\nchar& at_char(var& x);\nconst char& at_char(const var& x);\ndouble& at_double(var& x);\nconst double& at_double(const var& x);\nint& at_int(var& x);\nconst int& at_int(const var& x);\nobj& at_obj(var& x);\nconst obj& at_obj(const var& x);\nstr& at_str(var& x);\nconst str& at_str(const var& x);\nbool& at(arr_bool& x,const int y);\nchar& at(str& x,const int y);\nint& at(arr_int& x,const int y);\ndouble& at(arr_double& x,const int y);\nstr& at(arr_str& x,const int y);\nobj& at(arr_obj& x,const int y);\nvar& at(arr& x,const int y);\nconst bool& at(const arr_bool& x,const int y);\nconst char& at(const str& x,const int y);\nconst int& at(const arr_int& x,const int y);\nconst double& at(const arr_double& x,const int y);\nconst str& at(const arr_str& x,const int y);\nconst obj& at(const arr_obj& x,const int y);\nconst var& at(const arr& x,const int y);\nvoid at(arr_bool& x,const int y,const bool& z);\nvoid at(str& x,const int y,const char& z);\nvoid at(arr_int& x,const int y,const int& z);\nvoid at(arr_double& x,const int y,const double& z);\nvoid at(arr_str& x,const int y,const str& z);\nvoid at(arr_obj& x,const int y,const obj& z);\nvoid at(arr& x,const int y,const var& z);\nbool& back(arr_bool& x);\nchar& back(str& x);\nint& back(arr_int& x);\ndouble& back(arr_double& x);\nstr& back(arr_str& x);\nobj& back(arr_obj& x);\nvar& back(arr& x);\nconst bool& back(const arr_bool& x);\nconst char& back(const str& x);\nconst int& back(const arr_int& x);\nconst double& back(const arr_double& x);\nconst str& back(const arr_str& x);\nconst obj& back(const arr_obj& x);\nconst var& back(const arr& x);\nvoid back(arr_bool& x,const bool& y);\nvoid back(str& x,const char& y);\nvoid back(arr_int& x,const int& y);\nvoid back(arr_double& x,const double& y);\nvoid back(arr_str& x,const str& y);\nvoid back(arr_obj& x,const obj& y);\nvoid back(arr& x,const var& y);\narr backtrace_get();\nbool between(const int x,const int y,const int z);\nvoid check(const bool x);\nvoid clear(bool& x);\nvoid clear(char& x);\nvoid clear(int& x);\nvoid clear(double& x);\nvoid clear(arr_bool& x);\nvoid clear(str& x);\nvoid clear(arr_int& x);\nvoid clear(arr_double& x);\nvoid clear(arr_str& x);\nvoid clear(arr_obj& x);\nvoid clear(arr& x);\nvoid clear(var& x);\nvoid clear(obj& x);\nvoid clear(fd& x);\nint cmp(const fd& x,const fd& y);\nint cmp(const bool x,const bool y);\nint cmp(const char x,const char y);\nint cmp(const int x,const int y);\nint cmp(const double x,const double y);\nint cmp(const var& x,const var& y);\nint cmp(const arr_bool& x,const arr_bool& y);\nint cmp(const arr_int& x,const arr_int& y);\nint cmp(const arr_double& x,const arr_double& y);\nint cmp(const arr_str& x,const arr_str& y);\nint cmp(const arr_obj& x,const arr_obj& y);\nint cmp(const arr& x,const arr& y);\nint cmp(const str& x,const str& y);\nint cmp(const obj& x,const obj& y);\nstr concat(const str& x,const str& y);\nstr concat(const str& x,const str& y,const str& z);\nstr concat(const str& x,const str& y,const str& z,const str& a);\nstr concat(const str& x,const str& y,const str& z,const str& a,const str& b);\nstr concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c);\nstr concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d);\nvoid construct(bool* x);\nvoid construct(char* x);\nvoid construct(int* x);\nvoid construct(double* x);\nvoid construct(arr_bool* x);\nvoid construct(str* x);\nvoid construct(arr_int* x);\nvoid construct(arr_double* x);\nvoid construct(arr_str* x);\nvoid construct(arr_obj* x);\nvoid construct(arr* x);\nvoid construct(obj* x);\nvoid construct(var* x);\nvoid construct(fd* x);\nbool contain(const arr_bool& x,const bool& y);\nbool contain(const str& x,const char& y);\nbool contain(const arr_int& x,const int& y);\nbool contain(const arr_double& x,const double& y);\nbool contain(const arr_str& x,const str& y);\nbool contain(const arr_obj& x,const obj& y);\nbool contain(const arr& x,const var& y);\nbool contain(const str& x,const str& y);\narr_bool copy(const arr_bool& x);\nstr copy(const str& x);\narr_int copy(const arr_int& x);\narr_double copy(const arr_double& x);\narr_str copy(const arr_str& x);\narr_obj copy(const arr_obj& x);\narr copy(const arr& x);\nvoid copy(arr_bool& x,const arr_bool& y);\nvoid copy(str& x,const str& y);\nvoid copy(arr_int& x,const arr_int& y);\nvoid copy(arr_double& x,const arr_double& y);\nvoid copy(arr_str& x,const arr_str& y);\nvoid copy(arr_obj& x,const arr_obj& y);\nvoid copy(arr& x,const arr& y);\nvoid copy(arr_bool& x,const int y,const arr_bool& z,const int a,const int b);\nvoid copy(str& x,const int y,const str& z,const int a,const int b);\nvoid copy(arr_int& x,const int y,const arr_int& z,const int a,const int b);\nvoid copy(arr_double& x,const int y,const arr_double& z,const int a,const int b);\nvoid copy(arr_str& x,const int y,const arr_str& z,const int a,const int b);\nvoid copy(arr_obj& x,const int y,const arr_obj& z,const int a,const int b);\nvoid copy(arr& x,const int y,const arr& z,const int a,const int b);\nint count_line(const str& x);\nstr date_get();\nchar dec(const char x);\nint dec(const int x);\ndouble dec(const double x);\nvoid deinit(arr_bool& x);\nvoid deinit(str& x);\nvoid deinit(arr_int& x);\nvoid deinit(arr_double& x);\nvoid deinit(arr_str& x);\nvoid deinit(arr_obj& x);\nvoid deinit(arr& x);\nvoid deinit(obj& x);\nvoid deinit(var& x);\nvoid deinit(fd& x);\nvoid destruct(bool* x);\nvoid destruct(char* x);\nvoid destruct(int* x);\nvoid destruct(double* x);\nvoid destruct(arr_bool* x);\nvoid destruct(str* x);\nvoid destruct(arr_int* x);\nvoid destruct(arr_double* x);\nvoid destruct(arr_str* x);\nvoid destruct(arr_obj* x);\nvoid destruct(arr* x);\nvoid destruct(obj* x);\nvoid destruct(var* x);\nvoid destruct(fd* x);\narr_bool detach(arr_bool& x);\nstr detach(str& x);\narr_int detach(arr_int& x);\narr_double detach(arr_double& x);\narr_str detach(arr_str& x);\narr_obj detach(arr_obj& x);\narr detach(arr& x);\nint detach(fd& x);\nvoid dir_change(const str& x);\nstr dir_current();\narr_str dir_read(const str& x);\nchar div_(const char x,const char y);\nint div_(const int x,const int y);\ndouble div_(const double x,const double y);\nchar div_(const char x,const int y);\ndouble div_(const double x,const int y);\nvoid drop(arr_bool& x);\nvoid drop(str& x);\nvoid drop(arr_int& x);\nvoid drop(arr_double& x);\nvoid drop(arr_str& x);\nvoid drop(arr_obj& x);\nvoid drop(arr& x);\nvoid drop(arr_bool& x,const int y);\nvoid drop(str& x,const int y);\nvoid drop(arr_int& x,const int y);\nvoid drop(arr_double& x,const int y);\nvoid drop(arr_str& x,const int y);\nvoid drop(arr_obj& x,const int y);\nvoid drop(arr& x,const int y);\nvoid dump(const bool x);\nvoid dump(const char x);\nvoid dump(const int x);\nvoid dump(const double x);\nvoid dump(const void* x);\nvoid dump(const arr_bool& x);\nvoid dump(const str& x);\nvoid dump(const arr_int& x);\nvoid dump(const arr_double& x);\nvoid dump(const arr_str& x);\nvoid dump(const arr_obj& x);\nvoid dump(const arr& x);\nvoid dump(const var& x);\nvoid dump(const obj& x);\nvoid echo(const bool x);\nvoid echo(const char x);\nvoid echo(const int x);\nvoid echo(const double x);\nvoid echo(const str& x);\nbool eq(const bool x,const bool y);\nbool eq(const char x,const char y);\nbool eq(const int x,const int y);\nbool eq(const double x,const double y);\nbool eq(const char x,const int y);\nbool eq(const double x,const int y);\nbool eq(const void* x,const void* y);\nbool eq(const fd& x,const fd& y);\nbool eq(const arr_bool& x,const arr_bool& y);\nbool eq(const str& x,const str& y);\nbool eq(const arr_int& x,const arr_int& y);\nbool eq(const arr_double& x,const arr_double& y);\nbool eq(const arr_str& x,const arr_str& y);\nbool eq(const arr_obj& x,const arr_obj& y);\nbool eq(const arr& x,const arr& y);\nbool eq(const var& x,const var& y);\nbool eq(const obj& x,const obj& y);\nobj error_get();\nstr escape(const char x);\nbool every(const arr_bool& x,bool (*const y)(const bool& x));\nbool every(const str& x,bool (*const y)(const char& x));\nbool every(const arr_int& x,bool (*const y)(const int& x));\nbool every(const arr_double& x,bool (*const y)(const double& x));\nbool every(const arr_str& x,bool (*const y)(const str& x));\nbool every(const arr_obj& x,bool (*const y)(const obj& x));\nbool every(const arr& x,bool (*const y)(const var& x));\nbool extract(arr_bool& x,const bool& y);\nbool extract(str& x,const char& y);\nbool extract(arr_int& x,const int& y);\nbool extract(arr_double& x,const double& y);\nbool extract(arr_str& x,const str& y);\nbool extract(arr_obj& x,const obj& y);\nbool extract(arr& x,const var& y);\nstr file_read(const str& x);\nvoid file_save(const str& x,const str& y);\nint file_size(const str& x);\nvoid file_write(const str& x,const str& y);\nint find(const arr_bool& x,const bool& y);\nint find(const str& x,const char& y);\nint find(const arr_int& x,const int& y);\nint find(const arr_double& x,const double& y);\nint find(const arr_str& x,const str& y);\nint find(const arr_obj& x,const obj& y);\nint find(const arr& x,const var& y);\nbool& front(arr_bool& x);\nchar& front(str& x);\nint& front(arr_int& x);\ndouble& front(arr_double& x);\nstr& front(arr_str& x);\nobj& front(arr_obj& x);\nvar& front(arr& x);\nconst bool& front(const arr_bool& x);\nconst char& front(const str& x);\nconst int& front(const arr_int& x);\nconst double& front(const arr_double& x);\nconst str& front(const arr_str& x);\nconst obj& front(const arr_obj& x);\nconst var& front(const arr& x);\nvoid front(arr_bool& x,const bool& y);\nvoid front(str& x,const char& y);\nvoid front(arr_int& x,const int& y);\nvoid front(arr_double& x,const double& y);\nvoid front(arr_str& x,const str& y);\nvoid front(arr_obj& x,const obj& y);\nvoid front(arr& x,const var& y);\nconst arr& get_arr(const obj& x,const str& y);\narr& get_arr(obj& x,const str& y);\nbool get_bool(const obj& x,const str& y);\nchar get_char(const obj& x,const str& y);\ndouble get_double(const obj& x,const str& y);\nint get_indent(const str& x);\nint get_int(const obj& x,const str& y);\nconst obj& get_obj(const obj& x,const str& y);\nobj& get_obj(obj& x,const str& y);\nconst str& get_str(const obj& x,const str& y);\nstr& get_str(obj& x,const str& y);\nconst var& get(const obj& x,const str& y);\nvar& get(obj& x,const str& y);\nbool gt(const bool x,const bool y);\nbool gt(const char x,const char y);\nbool gt(const int x,const int y);\nbool gt(const double x,const double y);\nbool gt(const char x,const int y);\nbool gt(const double x,const int y);\nbool gt(const arr_bool& x,const arr_bool& y);\nbool gt(const str& x,const str& y);\nbool gt(const arr_int& x,const arr_int& y);\nbool gt(const arr_double& x,const arr_double& y);\nbool gt(const arr_str& x,const arr_str& y);\nbool gt(const arr_obj& x,const arr_obj& y);\nbool gt(const arr& x,const arr& y);\nbool gt(const var& x,const var& y);\nbool gt(const obj& x,const obj& y);\nbool gte(const bool x,const bool y);\nbool gte(const char x,const char y);\nbool gte(const int x,const int y);\nbool gte(const double x,const double y);\nbool gte(const char x,const int y);\nbool gte(const double x,const int y);\nbool gte(const arr_bool& x,const arr_bool& y);\nbool gte(const str& x,const str& y);\nbool gte(const arr_int& x,const arr_int& y);\nbool gte(const arr_double& x,const arr_double& y);\nbool gte(const arr_str& x,const arr_str& y);\nbool gte(const arr_obj& x,const arr_obj& y);\nbool gte(const arr& x,const arr& y);\nbool gte(const var& x,const var& y);\nbool gte(const obj& x,const obj& y);\nbool has(const obj& x,const str& y);\narr_bool head(const arr_bool& x,const int y);\nstr head(const str& x,const int y);\narr_int head(const arr_int& x,const int y);\narr_double head(const arr_double& x,const int y);\narr_str head(const arr_str& x,const int y);\narr_obj head(const arr_obj& x,const int y);\narr head(const arr& x,const int y);\nchar inc(const char x);\nint inc(const int x);\ndouble inc(const double x);\nbool is_access(const str& x);\nbool is_alnum(const char x);\nbool is_alnum(const str& x);\nbool is_alpha(const char x);\nbool is_alpha(const str& x);\nbool is_arr(const var& x);\nbool is_blank(const char x);\nbool is_blank(const str& x);\nbool is_bool(const var& x);\nbool is_char(const var& x);\nbool is_comment(const str& x);\nbool is_composite(const bool& x);\nbool is_composite(const char& x);\nbool is_composite(const int& x);\nbool is_composite(const double& x);\nbool is_composite(const arr_bool& x);\nbool is_composite(const str& x);\nbool is_composite(const arr_int& x);\nbool is_composite(const arr_double& x);\nbool is_composite(const arr_str& x);\nbool is_composite(const arr_obj& x);\nbool is_composite(const arr& x);\nbool is_composite(const obj& x);\nbool is_composite(const var& x);\nbool is_composite(const fd& x);\nbool is_digit(const char x);\nbool is_digit(const str& x);\nbool is_dir(const str& x);\nbool is_double(const var& x);\nbool is_empty(const arr_bool& x);\nbool is_empty(const str& x);\nbool is_empty(const arr_int& x);\nbool is_empty(const arr_double& x);\nbool is_empty(const arr_str& x);\nbool is_empty(const arr_obj& x);\nbool is_empty(const arr& x);\nbool is_empty(const var& x);\nbool is_empty(const obj& x);\nbool is_empty(const fd& x);\nbool is_file(const str& x);\nbool is_fragment(const str& x);\nbool is_full(const arr_bool& x);\nbool is_full(const str& x);\nbool is_full(const arr_int& x);\nbool is_full(const arr_double& x);\nbool is_full(const arr_str& x);\nbool is_full(const arr_obj& x);\nbool is_full(const arr& x);\nbool is_full(const var& x);\nbool is_full(const obj& x);\nbool is_full(const fd& x);\nbool is_identifier(const str& x);\nbool is_int(const var& x);\nbool is_integral(const bool& x);\nbool is_integral(const char& x);\nbool is_integral(const int& x);\nbool is_integral(const double& x);\nbool is_integral(const arr_bool& x);\nbool is_integral(const str& x);\nbool is_integral(const arr_int& x);\nbool is_integral(const arr_double& x);\nbool is_integral(const arr_str& x);\nbool is_integral(const arr_obj& x);\nbool is_integral(const arr& x);\nbool is_integral(const obj& x);\nbool is_integral(const var& x);\nbool is_integral(const fd& x);\nbool is_key(const str& x);\nbool is_last(const arr_bool& x,const int y);\nbool is_last(const str& x,const int y);\nbool is_last(const arr_int& x,const int y);\nbool is_last(const arr_double& x,const int y);\nbool is_last(const arr_str& x,const int y);\nbool is_last(const arr_obj& x,const int y);\nbool is_last(const arr& x,const int y);\nbool is_line(const str& x);\nbool is_lit_char(const str& x);\nbool is_lit(const str& x);\nbool is_many(const arr_bool& x);\nbool is_many(const str& x);\nbool is_many(const arr_int& x);\nbool is_many(const arr_double& x);\nbool is_many(const arr_str& x);\nbool is_many(const arr_obj& x);\nbool is_many(const arr& x);\nbool is_many(const obj& x);\nbool is_numeric(const str& x);\nbool is_obj(const var& x);\nbool is_single(const arr_bool& x);\nbool is_single(const str& x);\nbool is_single(const arr_int& x);\nbool is_single(const arr_double& x);\nbool is_single(const arr_str& x);\nbool is_single(const arr_obj& x);\nbool is_single(const arr& x);\nbool is_single(const obj& x);\nbool is_space(const char x);\nbool is_space(const str& x);\nbool is_str(const var& x);\nbool is_text(const str& x);\nbool is_token(const str& x);\nbool is_tuple(const str& x);\nbool is_var_integral(const var& x);\nstr join(const arr_str& x);\nstr join(const arr_str& x,const str& y);\nvoid ln();\nbool lt(const bool x,const bool y);\nbool lt(const char x,const char y);\nbool lt(const int x,const int y);\nbool lt(const double x,const double y);\nbool lt(const char x,const int y);\nbool lt(const double x,const int y);\nbool lt(const arr_bool& x,const arr_bool& y);\nbool lt(const str& x,const str& y);\nbool lt(const arr_int& x,const arr_int& y);\nbool lt(const arr_double& x,const arr_double& y);\nbool lt(const arr_str& x,const arr_str& y);\nbool lt(const arr_obj& x,const arr_obj& y);\nbool lt(const arr& x,const arr& y);\nbool lt(const var& x,const var& y);\nbool lt(const obj& x,const obj& y);\nbool lte(const bool x,const bool y);\nbool lte(const char x,const char y);\nbool lte(const int x,const int y);\nbool lte(const double x,const double y);\nbool lte(const char x,const int y);\nbool lte(const double x,const int y);\nbool lte(const arr_bool& x,const arr_bool& y);\nbool lte(const str& x,const str& y);\nbool lte(const arr_int& x,const arr_int& y);\nbool lte(const arr_double& x,const arr_double& y);\nbool lte(const arr_str& x,const arr_str& y);\nbool lte(const arr_obj& x,const arr_obj& y);\nbool lte(const arr& x,const arr& y);\nbool lte(const var& x,const var& y);\nbool lte(const obj& x,const obj& y);\nint main(const int x,const char** y);\nvoid on_main_890(const arr_str& x);\nbool match_l(const str& x,const str& y);\nbool match_r(const str& x,const str& y);\nchar max(const char x,const char y);\nint max(const int x,const int y);\ndouble max(const double x,const double y);\nchar min(const char x,const char y);\nint min(const int x,const int y);\ndouble min(const double x,const double y);\nvoid move(arr_bool& x,const int y,const int z,const int a);\nvoid move(str& x,const int y,const int z,const int a);\nvoid move(arr_int& x,const int y,const int z,const int a);\nvoid move(arr_double& x,const int y,const int z,const int a);\nvoid move(arr_str& x,const int y,const int z,const int a);\nvoid move(arr_obj& x,const int y,const int z,const int a);\nvoid move(arr& x,const int y,const int z,const int a);\nvoid move(arr_bool& x,const int y,arr_bool& z,const int a,const int b);\nvoid move(str& x,const int y,str& z,const int a,const int b);\nvoid move(arr_int& x,const int y,arr_int& z,const int a,const int b);\nvoid move(arr_double& x,const int y,arr_double& z,const int a,const int b);\nvoid move(arr_str& x,const int y,arr_str& z,const int a,const int b);\nvoid move(arr_obj& x,const int y,arr_obj& z,const int a,const int b);\nvoid move(arr& x,const int y,arr& z,const int a,const int b);\nchar mul(const char x,const char y);\nint mul(const int x,const int y);\ndouble mul(const double x,const double y);\nchar mul(const char x,const int y);\ndouble mul(const double x,const int y);\nbool neq(const bool x,const bool y);\nbool neq(const char x,const char y);\nbool neq(const int x,const int y);\nbool neq(const double x,const double y);\nbool neq(const char x,const int y);\nbool neq(const double x,const int y);\nbool neq(const void* x,const void* y);\nbool neq(const fd& x,const fd& y);\nbool neq(const arr_bool& x,const arr_bool& y);\nbool neq(const str& x,const str& y);\nbool neq(const arr_int& x,const arr_int& y);\nbool neq(const arr_double& x,const arr_double& y);\nbool neq(const arr_str& x,const arr_str& y);\nbool neq(const arr_obj& x,const arr_obj& y);\nbool neq(const arr& x,const arr& y);\nbool neq(const var& x,const var& y);\nbool neq(const obj& x,const obj& y);\nstr os_execute(const str& x);\nint os_system(const str& x);\nint os_system(const str& x,const str& y);\nint os_system(const str& x,const str& y,const str& z);\nint os_system(const str& x,const str& y,const str& z,const str& a);\nint os_system(const str& x,const str& y,const str& z,const str& a,const str& b);\nint os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c);\nint os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d);\nbool parse_int(int& x,const str& y);\nbool parse_lit_char(str& x,const str& y);\nbool parse_lit(str& x,const str& y);\nstr path_base(const str& x);\nstr path_concat(const str& x,const str& y);\nstr path_dir(const str& x);\nstr path_fix(const str& x);\nstr path_real(const str& x);\nvoid path_unlink(const str& x);\nbool pop(arr_bool& x);\nchar pop(str& x);\nint pop(arr_int& x);\ndouble pop(arr_double& x);\nstr pop(arr_str& x);\nobj pop(arr_obj& x);\nvar pop(arr& x);\nvoid pop(arr_bool& x,const int y);\nvoid pop(str& x,const int y);\nvoid pop(arr_int& x,const int y);\nvoid pop(arr_double& x,const int y);\nvoid pop(arr_str& x,const int y);\nvoid pop(arr_obj& x,const int y);\nvoid pop(arr& x,const int y);\nvoid prepend(arr_bool& x,const arr_bool& y);\nvoid prepend(str& x,const str& y);\nvoid prepend(arr_int& x,const arr_int& y);\nvoid prepend(arr_double& x,const arr_double& y);\nvoid prepend(arr_str& x,const arr_str& y);\nvoid prepend(arr_obj& x,const arr_obj& y);\nvoid prepend(arr& x,const arr& y);\nvoid prepend(arr_str& x,const arr& y);\nvoid print(const bool x);\nvoid print(const char x);\nvoid print(const int x);\nvoid print(const double x);\nvoid print(const void* x);\nvoid print(const str& x);\nvoid push(arr_bool& x,const bool& y);\nvoid push(str& x,const char& y);\nvoid push(arr_int& x,const int& y);\nvoid push(arr_double& x,const double& y);\nvoid push(arr_str& x,const str& y);\nvoid push(arr_obj& x,const obj& y);\nvoid push(arr& x,const var& y);\nvoid push(arr& x,const bool& y);\nvoid push(arr& x,const char& y);\nvoid push(arr& x,const int& y);\nvoid push(arr& x,const double& y);\nvoid push(arr& x,const str& y);\nvoid push(arr& x,const arr& y);\nvoid push(arr& x,const obj& y);\nvoid put(obj& x,const str& y,const arr_bool& z);\nvoid put(obj& x,const str& y,const arr_int& z);\nvoid put(obj& x,const str& y,const arr_double& z);\nvoid put(obj& x,const str& y,const arr_str& z);\nvoid put(obj& x,const str& y,const arr_obj& z);\nvoid put(obj& x,const str& y,const bool& z);\nvoid put(obj& x,const str& y,const char& z);\nvoid put(obj& x,const str& y,const int& z);\nvoid put(obj& x,const str& y,const double& z);\nvoid put(obj& x,const str& y,const str& z);\nvoid put(obj& x,const str& y,const arr& z);\nvoid put(obj& x,const str& y,const obj& z);\nvoid put(obj& x,const str& y,const var& z);\nstr read(const fd& x);\nstr read(const fd& x,const int y);\narr_bool reject(const arr_bool& x,const bool& y);\nstr reject(const str& x,const char& y);\narr_int reject(const arr_int& x,const int& y);\narr_double reject(const arr_double& x,const double& y);\narr_str reject(const arr_str& x,const str& y);\narr_obj reject(const arr_obj& x,const obj& y);\narr reject(const arr& x,const var& y);\nvoid remove(arr_bool& x,const int y);\nvoid remove(str& x,const int y);\nvoid remove(arr_int& x,const int y);\nvoid remove(arr_double& x,const int y);\nvoid remove(arr_str& x,const int y);\nvoid remove(arr_obj& x,const int y);\nvoid remove(arr& x,const int y);\nstr repeat(const str& x,const int y);\nstr replace(const str& x,const str& y,const str& z);\narr_str scan(const str& x);\narr_str delimit_891(const str& x);\narr_str group_892(const arr_str& x);\narr_str reduce_893(const arr_str& x);\nvoid set(obj& x,const str& y,const arr_bool& z);\nvoid set(obj& x,const str& y,const arr_int& z);\nvoid set(obj& x,const str& y,const arr_double& z);\nvoid set(obj& x,const str& y,const arr_str& z);\nvoid set(obj& x,const str& y,const arr_obj& z);\nvoid set(obj& x,const str& y,const bool& z);\nvoid set(obj& x,const str& y,const char& z);\nvoid set(obj& x,const str& y,const int& z);\nvoid set(obj& x,const str& y,const double& z);\nvoid set(obj& x,const str& y,const str& z);\nvoid set(obj& x,const str& y,const arr& z);\nvoid set(obj& x,const str& y,const obj& z);\nvoid set(obj& x,const str& y,const var& z);\nbool shift(arr_bool& x);\nchar shift(str& x);\nint shift(arr_int& x);\ndouble shift(arr_double& x);\nstr shift(arr_str& x);\nobj shift(arr_obj& x);\nvar shift(arr& x);\nvoid shift(arr_bool& x,const int y);\nvoid shift(str& x,const int y);\nvoid shift(arr_int& x,const int y);\nvoid shift(arr_double& x,const int y);\nvoid shift(arr_str& x,const int y);\nvoid shift(arr_obj& x,const int y);\nvoid shift(arr& x,const int y);\narr_bool slice_l(const arr_bool& x,const int y);\nstr slice_l(const str& x,const int y);\narr_int slice_l(const arr_int& x,const int y);\narr_double slice_l(const arr_double& x,const int y);\narr_str slice_l(const arr_str& x,const int y);\narr_obj slice_l(const arr_obj& x,const int y);\narr slice_l(const arr& x,const int y);\narr_bool slice_r(const arr_bool& x,const int y);\nstr slice_r(const str& x,const int y);\narr_int slice_r(const arr_int& x,const int y);\narr_double slice_r(const arr_double& x,const int y);\narr_str slice_r(const arr_str& x,const int y);\narr_obj slice_r(const arr_obj& x,const int y);\narr slice_r(const arr& x,const int y);\narr_bool slice(const arr_bool& x,const int y);\nstr slice(const str& x,const int y);\narr_int slice(const arr_int& x,const int y);\narr_double slice(const arr_double& x,const int y);\narr_str slice(const arr_str& x,const int y);\narr_obj slice(const arr_obj& x,const int y);\narr slice(const arr& x,const int y);\narr_bool slice(const arr_bool& x,const int y,const int z);\nstr slice(const str& x,const int y,const int z);\narr_int slice(const arr_int& x,const int y,const int z);\narr_double slice(const arr_double& x,const int y,const int z);\narr_str slice(const arr_str& x,const int y,const int z);\narr_obj slice(const arr_obj& x,const int y,const int z);\narr slice(const arr& x,const int y,const int z);\nvoid sort(arr_bool& x);\nvoid sort(str& x);\nvoid sort(arr_int& x);\nvoid sort(arr_double& x);\nvoid sort(arr_str& x);\nvoid sort(arr_obj& x);\nvoid sort(arr& x);\nvoid space();\narr_str split(const str& x);\narr_str split(const str& x,const str& y);\narr_str split(const arr_str& x,const str& y);\nvoid stop();\nstr strip_l(const str& x,const str& y);\nstr strip_r(const str& x,const str& y);\nchar sub(const char x,const char y);\nint sub(const int x,const int y);\ndouble sub(const double x,const double y);\nchar sub(const char x,const int y);\ndouble sub(const double x,const int y);\nvoid swap(void*& x,void*& y);\nvoid swap(bool*& x,bool*& y);\nvoid swap(char*& x,char*& y);\nvoid swap(int*& x,int*& y);\nvoid swap(double*& x,double*& y);\nvoid swap(arr_bool*& x,arr_bool*& y);\nvoid swap(str*& x,str*& y);\nvoid swap(arr_int*& x,arr_int*& y);\nvoid swap(arr_double*& x,arr_double*& y);\nvoid swap(arr_str*& x,arr_str*& y);\nvoid swap(arr_obj*& x,arr_obj*& y);\nvoid swap(arr*& x,arr*& y);\nvoid swap(obj*& x,obj*& y);\nvoid swap(var*& x,var*& y);\nvoid swap(fd*& x,fd*& y);\nvoid swap(bool& x,bool& y);\nvoid swap(char& x,char& y);\nvoid swap(int& x,int& y);\nvoid swap(double& x,double& y);\nvoid swap(arr_bool& x,arr_bool& y);\nvoid swap(str& x,str& y);\nvoid swap(arr_int& x,arr_int& y);\nvoid swap(arr_double& x,arr_double& y);\nvoid swap(arr_str& x,arr_str& y);\nvoid swap(arr_obj& x,arr_obj& y);\nvoid swap(arr& x,arr& y);\nvoid swap(obj& x,obj& y);\nvoid swap(var& x,var& y);\narr_bool tail(const arr_bool& x,const int y);\nstr tail(const str& x,const int y);\narr_int tail(const arr_int& x,const int y);\narr_double tail(const arr_double& x,const int y);\narr_str tail(const arr_str& x,const int y);\narr_obj tail(const arr_obj& x,const int y);\narr tail(const arr& x,const int y);\ndouble time_get();\ndouble time_now();\narr_str to_arr(const str& x);\narr_str to_arr(const str& x,const str& y);\narr_str to_arr(const str& x,const str& y,const str& z);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g);\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g,const str& h);\nstr to_c(const str& x);\nstr to_dump(const bool x);\nstr to_dump(const char x);\nstr to_dump(const int x);\nstr to_dump(const double x);\nstr to_dump(const void* x);\nstr to_dump(const fd& x);\nstr to_dump(const arr_bool& x);\nstr to_dump(const arr_int& x);\nstr to_dump(const arr_double& x);\nstr to_dump(const arr_str& x);\nstr to_dump(const arr_obj& x);\nstr to_dump(const arr& x);\nstr to_dump(const str& x);\nstr to_dump(const var& x);\nstr to_dump(const obj& x);\nint to_int(const str& x);\nstr to_lit(const bool x);\nstr to_lit(const int x);\nstr to_lit(const double x);\nstr to_lit(const void* x);\nstr to_lit(const fd& x);\nstr to_lit(const char x);\nstr to_lit(const arr_bool& x);\nstr to_lit(const arr_int& x);\nstr to_lit(const arr_double& x);\nstr to_lit(const arr_str& x);\nstr to_lit(const arr_obj& x);\nstr to_lit(const arr& x);\nstr to_lit(const str& x);\nstr to_lit(const var& x);\nstr to_lit(const obj& x);\nstr to_str(const bool x);\nstr to_str(const char x);\nstr to_str(const int x);\nstr to_str(const double x);\nstr to_str(const double x,const int y);\nstr to_str(const void* x);\nstr to_str(const char* x);\nstr to_str(const arr_bool& x);\nstr to_str(const arr_int& x);\nstr to_str(const arr_double& x);\nstr to_str(const arr_str& x);\nstr to_str(const arr_obj& x);\nstr to_str(const arr& x);\nstr to_str(const str& x);\nstr to_str(const var& x);\nstr to_str(const obj& x);\nvar to_var(const bool x);\nvar to_var(const char x);\nvar to_var(const int x);\nvar to_var(const double x);\nvar to_var(const str& x);\nvar to_var(const arr& x);\nvar to_var(const obj& x);\nstr trim_l(const str& x);\nstr trim_r(const str& x);\nstr trim(const str& x);\nstr unindent(const str& x);\nvoid unshift(arr_bool& x,const bool& y);\nvoid unshift(str& x,const char& y);\nvoid unshift(arr_int& x,const int& y);\nvoid unshift(arr_double& x,const double& y);\nvoid unshift(arr_str& x,const str& y);\nvoid unshift(arr_obj& x,const obj& y);\nvoid unshift(arr& x,const var& y);\nvoid unshift(arr& x,const bool& y);\nvoid unshift(arr& x,const char& y);\nvoid unshift(arr& x,const int& y);\nvoid unshift(arr& x,const double& y);\nvoid unshift(arr& x,const str& y);\nvoid unshift(arr& x,const arr& y);\nvoid unshift(arr& x,const obj& y);\nvoid write(const fd& x,const str& y);\narr_str cpl_code(const arr& x);\narr_str inline_code_894(const arr& x);\narr_str replace_lit_895(const arr_str& x);\nint cpl_count_tpl(const arr& x);\narr cpl_deduplicate(const arr& x);\nbool defined_896(const arr& x,const str& y);\narr discard_897(const arr& x,const str& y);\narr cpl_flatten(const arr& x);\nobj parse_898(const obj& x,int& y);\narr instantiate_899(const arr& x,const arr& y);\nobj lift_900(const obj& x);\narr_str cpl_forward(const arr& x);\narr cpl_implement(const arr& x);\nobj parse_901(const arr& x);\narr generate_902(const obj& x,const obj& y);\narr implement_903(const obj& x,const obj& y);\nstr substitute_904(const str& x,const arr& y);\nbool is_impl_905(const var& x);\narr_str cpl_import(const str& x);\narr_str cpl_include(const arr& x);\narr cpl_parse(const str& x);\narr preprocess_906(const str& x);\narr agglomerate_907(const arr& x);\narr_str cpl_prototype(const arr& x);\narr_str cpl_struct(const arr& x);\nvoid init(const arr_str& x);\nbool is_inline(const var& x);\nbool is_struct(const str& x);\nbool is_struct(const var& x);\nbool is_tpl(const str& x);\n//struct\nstruct arr_bool\n{\n bool* ptr=nullptr;\n int len=0;\n arr_bool()\n {\n }\n arr_bool(const arr_bool& x)\n {\n  assign(*this,x);\n }\n arr_bool(arr_bool&& x)\n {\n  swap(*this,x);\n }\n ~arr_bool()\n {\n  deinit(*this);\n }\n void operator=(const arr_bool& x)\n {\n  assign(*this,x);\n }\n};\nstruct str\n{\n char* ptr=nullptr;\n int len=0;\n str()\n {\n }\n str(const str& x)\n {\n  assign(*this,x);\n }\n str(str&& x)\n {\n  swap(*this,x);\n }\n ~str()\n {\n  deinit(*this);\n }\n void operator=(const str& x)\n {\n  assign(*this,x);\n }\n};\nstruct arr_int\n{\n int* ptr=nullptr;\n int len=0;\n arr_int()\n {\n }\n arr_int(const arr_int& x)\n {\n  assign(*this,x);\n }\n arr_int(arr_int&& x)\n {\n  swap(*this,x);\n }\n ~arr_int()\n {\n  deinit(*this);\n }\n void operator=(const arr_int& x)\n {\n  assign(*this,x);\n }\n};\nstruct arr_double\n{\n double* ptr=nullptr;\n int len=0;\n arr_double()\n {\n }\n arr_double(const arr_double& x)\n {\n  assign(*this,x);\n }\n arr_double(arr_double&& x)\n {\n  swap(*this,x);\n }\n ~arr_double()\n {\n  deinit(*this);\n }\n void operator=(const arr_double& x)\n {\n  assign(*this,x);\n }\n};\nstruct arr_str\n{\n str* ptr=nullptr;\n int len=0;\n arr_str()\n {\n }\n arr_str(const arr_str& x)\n {\n  assign(*this,x);\n }\n arr_str(arr_str&& x)\n {\n  swap(*this,x);\n }\n ~arr_str()\n {\n  deinit(*this);\n }\n void operator=(const arr_str& x)\n {\n  assign(*this,x);\n }\n};\nstruct arr_obj\n{\n obj* ptr=nullptr;\n int len=0;\n arr_obj()\n {\n }\n arr_obj(const arr_obj& x)\n {\n  assign(*this,x);\n }\n arr_obj(arr_obj&& x)\n {\n  swap(*this,x);\n }\n ~arr_obj()\n {\n  deinit(*this);\n }\n void operator=(const arr_obj& x)\n {\n  assign(*this,x);\n }\n};\nstruct arr\n{\n var* ptr=nullptr;\n int len=0;\n arr()\n {\n }\n arr(const arr& x)\n {\n  assign(*this,x);\n }\n arr(arr&& x)\n {\n  swap(*this,x);\n }\n ~arr()\n {\n  deinit(*this);\n }\n void operator=(const arr& x)\n {\n  assign(*this,x);\n }\n};\nenum struct type:char\n{\n _empty,\n _bool,\n _char,\n _int,\n _double,\n _str,\n _arr,\n _obj,\n};\nstruct var\n{\n type t=type::_empty;\n char b[32]={};\n var()\n {\n }\n var(const var& x)\n {\n  assign(*this,x);\n }\n var(var&& x)\n {\n  swap(*this,x);\n }\n ~var()\n {\n  deinit(*this);\n }\n void operator=(const var& x)\n {\n  assign(*this,x);\n }\n};\nstruct obj\n{\n arr_str ks;\n arr vs;\n};\nstruct fd\n{\n int n=-1;\n fd()\n {\n }\n fd(const fd& x)\n {\n  stop();\n }\n ~fd()\n {\n  deinit(*this);\n }\n void operator=(const fd& x)\n {\n  stop();\n }\n};\n//code\nconst str _s0=to_str(\"(\");\nconst str _s1=to_str(\")\");\nconst str _s2=to_str(\"+\");\nconst str _s3=to_str(\"c++filt\");\nconst str _s4=to_str(\" \");\nconst str _s5=to_str(\"addr2line\");\nconst str _s6=to_str(\"--exe\");\nconst str _s7=to_str(\"?\");\nconst str _s8=to_str(\":\");\nconst str _s9=to_str(\"fn\");\nconst str _s10=to_str(\"number\");\nconst str _s11=to_str(\"code\");\nconst str _s12=to_str(\"/\");\nconst str _s13=to_str(\"catch!\");\nconst str _s14=to_str(\".\");\nconst str _s15=to_str(\"..\");\nconst str _s16=to_str(\"%s\");\nconst str _s17=to_str(\"message\");\nconst str _s18=to_str(\"\\\\\\\\\");\nconst str _s19=to_str(\"\\\\\'\");\nconst str _s20=to_str(\"\\\\\\\"\");\nconst str _s21=to_str(\"\\\\n\");\nconst str _s22=to_str(\"\\\\r\");\nconst str _s23=to_str(\"\\\\t\");\nconst str _s24=to_str(\"\\\\x%02X\");\nconst str _s25=to_str(\"//\");\nconst str _s26=to_str(\"\\n\");\nconst str _s27=to_str(\"s\");\nconst str _s28=to_str(\"profile\");\nconst str _s29=to_str(\"var\");\nconst str _s30=to_str(\"payload\");\nconst str _s31=to_str(\"r\");\nconst str _s32=to_str(\"system> \");\nconst str _s33=to_str(\"\'\");\nconst str _s34=to_str(\"\\\'\");\nconst str _s35=to_str(\"\\\\x\");\nconst str _s36=to_str(\"\\\\\");\nconst str _s37=to_str(\"\\\"\");\nconst str _s38=to_str(\"\");\nconst str _s39=to_str(\"[]\");\nconst str _s40=to_str(\"[\");\nconst str _s41=to_str(\"]\");\nconst str _s42=to_str(\"#\");\nconst str _s43=to_str(\"{}\");\nconst str _s44=to_str(\"{\");\nconst str _s45=to_str(\"}\");\nconst str _s46=to_str(\"true\");\nconst str _s47=to_str(\"false\");\nconst str _s48=to_str(\"%d\");\nconst str _s49=to_str(\"%f\");\nconst str _s50=to_str(\"%p\");\nconst str _s51=to_str(\"body\");\nconst str _s52=to_str(\"signature\");\nconst str _s53=to_str(\"_s\");\nconst str _s54=to_str(\"const str \");\nconst str _s55=to_str(\"=to_str(\");\nconst str _s56=to_str(\");\");\nconst str _s57=to_str(\"signatures\");\nconst str _s58=to_str(\"overload\");\nconst str _s59=to_str(\"caller\");\nconst str _s60=to_str(\"callees\");\nconst str _s61=to_str(\"_\");\nconst str _s62=to_str(\" {\");\nconst str _s63=to_str(\" }\");\nconst str _s64=to_str(\"global\");\nconst str _s65=to_str(\"local\");\nconst str _s66=to_str(\";\");\nconst str _s67=to_str(\"impl\");\nconst str _s68=to_str(\"compile\");\nconst str _s69=to_str(\"gcc\");\nconst str _s70=to_str(\"--run\");\nconst str _s71=to_str(\"--gcc\");\nconst str _s72=to_str(\"--clang\");\nconst str _s73=to_str(\"clang\");\nconst str _s74=to_str(\"unhandled!\");\nconst str _s75=to_str(\"src\");\nconst str _s76=to_str(\"src/common\");\nconst str _s77=to_str(\"file\");\nconst str _s78=to_str(\"out-\");\nconst str _s79=to_str(\".cpp\");\nconst str _s80=to_str(\"g++\");\nconst str _s81=to_str(\"-o\");\nconst str _s82=to_str(\"-std=c++23\");\nconst str _s83=to_str(\"-fmax-errors=5\");\nconst str _s84=to_str(\"-g\");\nconst str _s85=to_str(\"-O3\");\nconst str _s86=to_str(\"-rdynamic\");\nconst str _s87=to_str(\"-no-pie\");\nconst str _s88=to_str(\"clang++\");\nconst str _s89=to_str(\"-std=c++2b\");\nconst str _s90=to_str(\"-ferror-limit=5\");\nconst str _s91=to_str(\"-gdwarf-4\");\nconst str _s92=to_str(\"//generated \");\nconst str _s93=to_str(\"//source\");\nconst str _s94=to_str(\"extern const char* source;\");\nconst str _s95=to_str(\"//forward\");\nconst str _s96=to_str(\"//include\");\nconst str _s97=to_str(\"//prototype\");\nconst str _s98=to_str(\"//struct\");\nconst str _s99=to_str(\"//code\");\nconst str _s100=to_str(\"const char* source=\");\nconst str _s101=to_str(\"//definition\");\nconst str _s102=to_str(\"struct\");\nconst str _s103=to_str(\"generic\");\nconst str _s104=to_str(\"sloc\");\nconst str _s105=to_str(\"generate\");\nconst str _s106=to_str(\"Kb\");\nconst str _s107=to_str(\"binary\");\nconst str _s108=to_str(\"valgrind\");\nconst str _s109=to_str(\"-s\");\nconst str _s110=to_str(\"--track-origins=yes\");\nconst str _s111=to_str(\"--leak-check=full\");\nconst str _s112=to_str(\"--show-leak-kinds=all\");\nconst str _s113=to_str(\"inline\");\nconst str _s114=to_str(\"struct \");\nconst str _s115=to_str(\"enum struct \");\nconst str _s116=to_str(\"tpl\");\nconst double start=time_get();\nstr process;\nchar add(const char x,const char y)\n{\n return x+y;\n}\nint add(const int x,const int y)\n{\n return x+y;\n}\ndouble add(const double x,const double y)\n{\n return x+y;\n}\nchar add(const char x,const int y)\n{\n return x+y;\n}\ndouble add(const double x,const int y)\n{\n return x+y;\n}\nvoid allocate(arr_bool& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(bool));\n  bool* ptr=(bool*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    bool* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   bool* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  bool* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   bool* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(bool));\n  bool* ptr=(bool*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(bool));\n  bool* ptr=(bool*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    bool* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(bool));\n   bool* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid allocate(str& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(char));\n  char* ptr=(char*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    char* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   char* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  char* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   char* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(char));\n  char* ptr=(char*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(char));\n  char* ptr=(char*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    char* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(char));\n   char* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid allocate(arr_int& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(int));\n  int* ptr=(int*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    int* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   int* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  int* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   int* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(int));\n  int* ptr=(int*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(int));\n  int* ptr=(int*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    int* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(int));\n   int* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid allocate(arr_double& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(double));\n  double* ptr=(double*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    double* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   double* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  double* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   double* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(double));\n  double* ptr=(double*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(double));\n  double* ptr=(double*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    double* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(double));\n   double* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid allocate(arr_str& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(str));\n  str* ptr=(str*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    str* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   str* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  str* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   str* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(str));\n  str* ptr=(str*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(str));\n  str* ptr=(str*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    str* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(str));\n   str* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid allocate(arr_obj& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(obj));\n  obj* ptr=(obj*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    obj* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   obj* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  obj* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   obj* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(obj));\n  obj* ptr=(obj*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(obj));\n  obj* ptr=(obj*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    obj* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(obj));\n   obj* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid allocate(arr& x,const int y)\n{\n check(gte(y,0));\n if(eq(x.len,y))\n {\n }\n else if(is_empty(x))\n {\n  const int n=mul(y,sizeof(var));\n  var* ptr=(var*)malloc(n);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,y);i++)\n   {\n    var* p=x.ptr+i;\n    construct(p);\n   }\n  }\n  else\n   memset(x.ptr,0,n);\n }\n else if(eq(y,0))\n {\n  for(int i=0;lt(i,x.len);i++)\n  {\n   var* p=x.ptr+i;\n   destruct(p);\n  }\n  free(x.ptr);\n  var* ptr=nullptr;\n  assign(x.ptr,ptr);\n  assign(x.len,0);\n }\n else if(lt(y,x.len))\n {\n  const int n1=sub(x.len,y);\n  for(int i=0;lt(i,n1);i++)\n  {\n   const int n2=add(y,i);\n   var* p=x.ptr+n2;\n   destruct(p);\n  }\n  const int n2=mul(y,sizeof(var));\n  var* ptr=(var*)realloc(x.ptr,n2);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  assign(x.len,y);\n }\n else if(gt(y,x.len))\n {\n  const int n1=mul(y,sizeof(var));\n  var* ptr=(var*)realloc(x.ptr,n1);\n  check(neq(ptr,nullptr));\n  assign(x.ptr,ptr);\n  const int n2=sub(y,x.len);\n  if(is_composite(*x.ptr))\n  {\n   for(int i=0;lt(i,n2);i++)\n   {\n    const int n=add(x.len,i);\n    var* p=x.ptr+n;\n    construct(p);\n   }\n  }\n  else\n  {\n   const int n3=mul(n2,sizeof(var));\n   var* p=x.ptr+x.len;\n   memset(p,0,n3);\n  }\n  assign(x.len,y);\n }\n else\n  stop();\n}\nvoid append(arr_bool& x,const arr_bool& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(str& x,const str& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(arr_int& x,const arr_int& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(arr_double& x,const arr_double& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(arr_str& x,const arr_str& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(arr_obj& x,const arr_obj& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(arr& x,const arr& y)\n{\n const int n1=x.len;\n const int n2=add(n1,y.len);\n allocate(x,n2);\n copy(x,n1,y,0,y.len);\n}\nvoid append(arr_str& x,const arr& y)\n{\n for(int i=0;lt(i,y.len);i++)\n {\n  const var& v=at(y,i);\n  const str& s=at_str(v);\n  push(x,s);\n }\n}\nvoid assign(void*& x,void*& y)\n{\n x=y;\n}\nvoid assign(bool*& x,bool*& y)\n{\n x=y;\n}\nvoid assign(char*& x,char*& y)\n{\n x=y;\n}\nvoid assign(int*& x,int*& y)\n{\n x=y;\n}\nvoid assign(double*& x,double*& y)\n{\n x=y;\n}\nvoid assign(arr_bool*& x,arr_bool*& y)\n{\n x=y;\n}\nvoid assign(str*& x,str*& y)\n{\n x=y;\n}\nvoid assign(arr_int*& x,arr_int*& y)\n{\n x=y;\n}\nvoid assign(arr_double*& x,arr_double*& y)\n{\n x=y;\n}\nvoid assign(arr_str*& x,arr_str*& y)\n{\n x=y;\n}\nvoid assign(arr_obj*& x,arr_obj*& y)\n{\n x=y;\n}\nvoid assign(arr*& x,arr*& y)\n{\n x=y;\n}\nvoid assign(obj*& x,obj*& y)\n{\n x=y;\n}\nvoid assign(var*& x,var*& y)\n{\n x=y;\n}\nvoid assign(fd*& x,fd*& y)\n{\n x=y;\n}\nvoid assign(bool& x,const bool y)\n{\n x=y;\n}\nvoid assign(char& x,const char y)\n{\n x=y;\n}\nvoid assign(int& x,const int y)\n{\n x=y;\n}\nvoid assign(double& x,const double y)\n{\n x=y;\n}\nvoid assign(arr_bool& x,const arr_bool& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(str& x,const str& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(arr_int& x,const arr_int& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(arr_double& x,const arr_double& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(arr_str& x,const arr_str& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(arr_obj& x,const arr_obj& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(arr& x,const arr& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid assign(var& x,const var& y)\n{\n clear(x);\n if(is_var_integral(y))\n  memcpy(x.b,y.b,sizeof(x.b));\n else if(is_str(y))\n {\n  str* ptr=(str*)x.b;\n  const str& v=at_str(y);\n  new (ptr) str;\n  assign(*ptr,v);\n }\n else if(is_arr(y))\n {\n  arr* ptr=(arr*)x.b;\n  const arr& v=at_arr(y);\n  new (ptr) arr;\n  assign(*ptr,v);\n }\n else if(is_obj(y))\n {\n  obj* ptr=(obj*)x.b;\n  const obj& v=at_obj(y);\n  new (ptr) obj;\n  assign(*ptr,v);\n }\n else\n  stop();\n x.t=y.t;\n}\nvoid assign(obj& x,const obj& y)\n{\n assign(x.ks,y.ks);\n assign(x.vs,y.vs);\n}\narr& at_arr(var& x)\n{\n check(is_arr(x));\n return *(arr*)x.b;\n}\nconst arr& at_arr(const var& x)\n{\n check(is_arr(x));\n return *(arr*)x.b;\n}\nbool& at_bool(var& x)\n{\n check(is_bool(x));\n return *(bool*)x.b;\n}\nconst bool& at_bool(const var& x)\n{\n check(is_bool(x));\n return *(bool*)x.b;\n}\nchar& at_char(var& x)\n{\n check(is_char(x));\n return *(char*)x.b;\n}\nconst char& at_char(const var& x)\n{\n check(is_char(x));\n return *(char*)x.b;\n}\ndouble& at_double(var& x)\n{\n check(is_double(x));\n return *(double*)x.b;\n}\nconst double& at_double(const var& x)\n{\n check(is_double(x));\n return *(double*)x.b;\n}\nint& at_int(var& x)\n{\n check(is_int(x));\n return *(int*)x.b;\n}\nconst int& at_int(const var& x)\n{\n check(is_int(x));\n return *(int*)x.b;\n}\nobj& at_obj(var& x)\n{\n check(is_obj(x));\n return *(obj*)x.b;\n}\nconst obj& at_obj(const var& x)\n{\n check(is_obj(x));\n return *(obj*)x.b;\n}\nstr& at_str(var& x)\n{\n check(is_str(x));\n return *(str*)x.b;\n}\nconst str& at_str(const var& x)\n{\n check(is_str(x));\n return *(str*)x.b;\n}\nbool& at(arr_bool& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nchar& at(str& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nint& at(arr_int& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\ndouble& at(arr_double& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nstr& at(arr_str& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nobj& at(arr_obj& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nvar& at(arr& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst bool& at(const arr_bool& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst char& at(const str& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst int& at(const arr_int& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst double& at(const arr_double& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst str& at(const arr_str& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst obj& at(const arr_obj& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nconst var& at(const arr& x,const int y)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n return x.ptr[y];\n}\nvoid at(arr_bool& x,const int y,const bool& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nvoid at(str& x,const int y,const char& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nvoid at(arr_int& x,const int y,const int& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nvoid at(arr_double& x,const int y,const double& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nvoid at(arr_str& x,const int y,const str& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nvoid at(arr_obj& x,const int y,const obj& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nvoid at(arr& x,const int y,const var& z)\n{\n const int n=dec(x.len);\n check(between(y,0,n));\n assign(x.ptr[y],z);\n}\nbool& back(arr_bool& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nchar& back(str& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nint& back(arr_int& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\ndouble& back(arr_double& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nstr& back(arr_str& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nobj& back(arr_obj& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nvar& back(arr& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst bool& back(const arr_bool& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst char& back(const str& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst int& back(const arr_int& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst double& back(const arr_double& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst str& back(const arr_str& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst obj& back(const arr_obj& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nconst var& back(const arr& x)\n{\n const int n=dec(x.len);\n return at(x,n);\n}\nvoid back(arr_bool& x,const bool& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\nvoid back(str& x,const char& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\nvoid back(arr_int& x,const int& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\nvoid back(arr_double& x,const double& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\nvoid back(arr_str& x,const str& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\nvoid back(arr_obj& x,const obj& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\nvoid back(arr& x,const var& y)\n{\n const int n=dec(x.len);\n at(x,n,y);\n}\narr backtrace_get()\n{\n arr r;\n const int n1=1024;\n void* a[n1]={};\n const int n2=backtrace(a,n1);\n check(gte(n2,0));\n char** ptr=backtrace_symbols(a,n2);\n check(neq(ptr,nullptr));\n const str s=to_str(source);\n const arr_str lines=split(s);\n for(int i=0;lt(i,n2);i++)\n {\n  const char* v=ptr[i];\n  const str s1=to_str(v);\n  const arr_str a1=split(s1,_s0);\n  const arr_str a2=split(a1,_s1);\n  const arr_str a3=split(a2,_s2);\n  const str& s2=front(a3);\n  const str path=path_real(s2);\n  if(neq(path,process))\n   continue;\n  const str& mangled=at(a3,1);\n  const arr_str a4=to_arr(_s3,mangled);\n  const str s3=join(a4,_s4);\n  const str fn=os_execute(s3);\n  const void* ptr=a[i];\n  const str s4=to_str(ptr);\n  const arr_str a5=to_arr(_s5,_s6,process,s4);\n  const str s5=join(a5,_s4);\n  const str marker=os_execute(s5);\n  if(match_l(marker,_s7))\n   continue;\n  const arr_str a6=split(marker,_s8);\n  const arr_str a7=split(a6,_s4);\n  const str& number=at(a7,1);\n  obj o;\n  put(o,_s9,fn);\n  if(!match_l(number,_s7))\n  {\n   const int n1=to_int(number);\n   const int n2=dec(n1);\n   const str line=at(lines,n2);\n   const str s6=trim(line);\n   put(o,_s10,n1);\n   put(o,_s11,s6);\n  }\n  push(r,o);\n }\n free(ptr);\n return r;\n}\nbool between(const int x,const int y,const int z)\n{\n check(lte(y,z));\n if(lt(x,y))\n  return false;\n if(gt(x,z))\n  return false;\n return true;\n}\nvoid check(const bool x)\n{\n if(x)\n  return;\n stop();\n}\nvoid clear(bool& x)\n{\n assign(x,false);\n}\nvoid clear(char& x)\n{\n assign(x,0);\n}\nvoid clear(int& x)\n{\n assign(x,0);\n}\nvoid clear(double& x)\n{\n assign(x,0);\n}\nvoid clear(arr_bool& x)\n{\n allocate(x,0);\n}\nvoid clear(str& x)\n{\n allocate(x,0);\n}\nvoid clear(arr_int& x)\n{\n allocate(x,0);\n}\nvoid clear(arr_double& x)\n{\n allocate(x,0);\n}\nvoid clear(arr_str& x)\n{\n allocate(x,0);\n}\nvoid clear(arr_obj& x)\n{\n allocate(x,0);\n}\nvoid clear(arr& x)\n{\n allocate(x,0);\n}\nvoid clear(var& x)\n{\n if(is_empty(x))\n  return;\n if(is_var_integral(x))\n {\n }\n else if(is_str(x))\n {\n  str& v=at_str(x);\n  str* p=&v;\n  destruct(p);\n }\n else if(is_arr(x))\n {\n  arr& v=at_arr(x);\n  arr* p=&v;\n  destruct(p);\n }\n else if(is_obj(x))\n {\n  obj& v=at_obj(x);\n  obj* p=&v;\n  destruct(p);\n }\n else\n  stop();\n x.t=type::_empty;\n}\nvoid clear(obj& x)\n{\n clear(x.ks);\n clear(x.vs);\n}\nvoid clear(fd& x)\n{\n if(is_empty(x))\n  return;\n const int n1=x.n;\n assign(x.n,0);\n const int n2=close(n1);\n check(eq(n2,0));\n}\nint cmp(const fd& x,const fd& y)\n{\n stop();\n return 0;\n}\nint cmp(const bool x,const bool y)\n{\n if(gt(x,y))\n  return 1;\n if(lt(x,y))\n  return -1;\n return 0;\n}\nint cmp(const char x,const char y)\n{\n if(gt(x,y))\n  return 1;\n if(lt(x,y))\n  return -1;\n return 0;\n}\nint cmp(const int x,const int y)\n{\n if(gt(x,y))\n  return 1;\n if(lt(x,y))\n  return -1;\n return 0;\n}\nint cmp(const double x,const double y)\n{\n if(gt(x,y))\n  return 1;\n if(lt(x,y))\n  return -1;\n return 0;\n}\nint cmp(const var& x,const var& y)\n{\n if(gt(x,y))\n  return 1;\n if(lt(x,y))\n  return -1;\n return 0;\n}\nint cmp(const arr_bool& x,const arr_bool& y)\n{\n const int n=min(x.len,y.len);\n for(int i=0;lt(i,n);i++)\n {\n  const bool& vx=at(x,i);\n  const bool& vy=at(y,i);\n  const int n=cmp(vx,vy);\n  if(neq(n,0))\n   return n;\n }\n return cmp(x.len,y.len);\n}\nint cmp(const arr_int& x,const arr_int& y)\n{\n const int n=min(x.len,y.len);\n for(int i=0;lt(i,n);i++)\n {\n  const int& vx=at(x,i);\n  const int& vy=at(y,i);\n  const int n=cmp(vx,vy);\n  if(neq(n,0))\n   return n;\n }\n return cmp(x.len,y.len);\n}\nint cmp(const arr_double& x,const arr_double& y)\n{\n const int n=min(x.len,y.len);\n for(int i=0;lt(i,n);i++)\n {\n  const double& vx=at(x,i);\n  const double& vy=at(y,i);\n  const int n=cmp(vx,vy);\n  if(neq(n,0))\n   return n;\n }\n return cmp(x.len,y.len);\n}\nint cmp(const arr_str& x,const arr_str& y)\n{\n const int n=min(x.len,y.len);\n for(int i=0;lt(i,n);i++)\n {\n  const str& vx=at(x,i);\n  const str& vy=at(y,i);\n  const int n=cmp(vx,vy);\n  if(neq(n,0))\n   return n;\n }\n return cmp(x.len,y.len);\n}\nint cmp(const arr_obj& x,const arr_obj& y)\n{\n const int n=min(x.len,y.len);\n for(int i=0;lt(i,n);i++)\n {\n  const obj& vx=at(x,i);\n  const obj& vy=at(y,i);\n  const int n=cmp(vx,vy);\n  if(neq(n,0))\n   return n;\n }\n return cmp(x.len,y.len);\n}\nint cmp(const arr& x,const arr& y)\n{\n const int n=min(x.len,y.len);\n for(int i=0;lt(i,n);i++)\n {\n  const var& vx=at(x,i);\n  const var& vy=at(y,i);\n  const int n=cmp(vx,vy);\n  if(neq(n,0))\n   return n;\n }\n return cmp(x.len,y.len);\n}\nint cmp(const str& x,const str& y)\n{\n const int n=min(x.len,y.len);\n const int r=memcmp(x.ptr,y.ptr,n);\n if(eq(r,0))\n  return cmp(x.len,y.len);\n return r;\n}\nint cmp(const obj& x,const obj& y)\n{\n const int n=min(x.ks.len,y.ks.len);\n for(int i=0;lt(i,n);i++)\n {\n  const str& kx=at(x.ks,i);\n  const var& vx=at(x.vs,i);\n  const str& ky=at(y.ks,i);\n  const var& vy=at(y.vs,i);\n  const int n1=cmp(kx,ky);\n  if(neq(n1,0))\n   return n1;\n  const int n2=cmp(vx,vy);\n  if(neq(n2,0))\n   return n2;\n }\n return cmp(x.ks.len,y.ks.len);\n}\nstr concat(const str& x,const str& y)\n{\n str r;\n append(r,x);\n append(r,y);\n return r;\n}\nstr concat(const str& x,const str& y,const str& z)\n{\n str r;\n append(r,x);\n append(r,y);\n append(r,z);\n return r;\n}\nstr concat(const str& x,const str& y,const str& z,const str& a)\n{\n str r;\n append(r,x);\n append(r,y);\n append(r,z);\n append(r,a);\n return r;\n}\nstr concat(const str& x,const str& y,const str& z,const str& a,const str& b)\n{\n str r;\n append(r,x);\n append(r,y);\n append(r,z);\n append(r,a);\n append(r,b);\n return r;\n}\nstr concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)\n{\n str r;\n append(r,x);\n append(r,y);\n append(r,z);\n append(r,a);\n append(r,b);\n append(r,c);\n return r;\n}\nstr concat(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)\n{\n str r;\n append(r,x);\n append(r,y);\n append(r,z);\n append(r,a);\n append(r,b);\n append(r,c);\n append(r,d);\n return r;\n}\nvoid construct(bool* x)\n{\n}\nvoid construct(char* x)\n{\n}\nvoid construct(int* x)\n{\n}\nvoid construct(double* x)\n{\n}\nvoid construct(arr_bool* x)\n{\n new (x) arr_bool;\n}\nvoid construct(str* x)\n{\n new (x) str;\n}\nvoid construct(arr_int* x)\n{\n new (x) arr_int;\n}\nvoid construct(arr_double* x)\n{\n new (x) arr_double;\n}\nvoid construct(arr_str* x)\n{\n new (x) arr_str;\n}\nvoid construct(arr_obj* x)\n{\n new (x) arr_obj;\n}\nvoid construct(arr* x)\n{\n new (x) arr;\n}\nvoid construct(obj* x)\n{\n new (x) obj;\n}\nvoid construct(var* x)\n{\n new (x) var;\n}\nvoid construct(fd* x)\n{\n new (x) fd;\n}\nbool contain(const arr_bool& x,const bool& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const str& x,const char& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const char& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const arr_int& x,const int& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const arr_double& x,const double& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const arr_str& x,const str& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const arr_obj& x,const obj& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const arr& x,const var& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(eq(v,y))\n   return true;\n }\n return false;\n}\nbool contain(const str& x,const str& y)\n{\n const void* p=memmem(x.ptr,x.len,y.ptr,y.len);\n return neq(p,nullptr);\n}\narr_bool copy(const arr_bool& x)\n{\n return x;\n}\nstr copy(const str& x)\n{\n return x;\n}\narr_int copy(const arr_int& x)\n{\n return x;\n}\narr_double copy(const arr_double& x)\n{\n return x;\n}\narr_str copy(const arr_str& x)\n{\n return x;\n}\narr_obj copy(const arr_obj& x)\n{\n return x;\n}\narr copy(const arr& x)\n{\n return x;\n}\nvoid copy(arr_bool& x,const arr_bool& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(str& x,const str& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(arr_int& x,const arr_int& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(arr_double& x,const arr_double& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(arr_str& x,const arr_str& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(arr_obj& x,const arr_obj& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(arr& x,const arr& y)\n{\n allocate(x,y.len);\n copy(x,0,y,0,y.len);\n}\nvoid copy(arr_bool& x,const int y,const arr_bool& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(bool));\n  bool* ptr1=x.ptr+y;\n  const bool* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const bool& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nvoid copy(str& x,const int y,const str& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(char));\n  char* ptr1=x.ptr+y;\n  const char* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const char& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nvoid copy(arr_int& x,const int y,const arr_int& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(int));\n  int* ptr1=x.ptr+y;\n  const int* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const int& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nvoid copy(arr_double& x,const int y,const arr_double& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(double));\n  double* ptr1=x.ptr+y;\n  const double* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const double& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nvoid copy(arr_str& x,const int y,const arr_str& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(str));\n  str* ptr1=x.ptr+y;\n  const str* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const str& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nvoid copy(arr_obj& x,const int y,const arr_obj& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(obj));\n  obj* ptr1=x.ptr+y;\n  const obj* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const obj& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nvoid copy(arr& x,const int y,const arr& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(var));\n  var* ptr1=x.ptr+y;\n  const var* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   const var& v=at(z,n2);\n   at(x,n1,v);\n  }\n }\n}\nint count_line(const str& x)\n{\n const arr_str a=split(x);\n return a.len;\n}\nstr date_get()\n{\n const time_t now=time(nullptr);\n const tm o=*gmtime(&now);\n const str day=to_str(o.tm_mday);\n const int n1=inc(o.tm_mon);\n const str month=to_str(n1);\n const int n2=add(o.tm_year,1900);\n const str year=to_str(n2);\n return concat(year,_s12,month,_s12,day);\n}\nchar dec(const char x)\n{\n return sub(x,1);\n}\nint dec(const int x)\n{\n return sub(x,1);\n}\ndouble dec(const double x)\n{\n return sub(x,1);\n}\nvoid deinit(arr_bool& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(str& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(arr_int& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(arr_double& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(arr_str& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(arr_obj& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(arr& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(obj& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(var& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid deinit(fd& x)\n{\n try\n {\n  clear(x);\n }\n catch(...)\n {\n  print(_s13);\n }\n}\nvoid destruct(bool* x)\n{\n}\nvoid destruct(char* x)\n{\n}\nvoid destruct(int* x)\n{\n}\nvoid destruct(double* x)\n{\n}\nvoid destruct(arr_bool* x)\n{\n x->~arr_bool();\n}\nvoid destruct(str* x)\n{\n x->~str();\n}\nvoid destruct(arr_int* x)\n{\n x->~arr_int();\n}\nvoid destruct(arr_double* x)\n{\n x->~arr_double();\n}\nvoid destruct(arr_str* x)\n{\n x->~arr_str();\n}\nvoid destruct(arr_obj* x)\n{\n x->~arr_obj();\n}\nvoid destruct(arr* x)\n{\n x->~arr();\n}\nvoid destruct(obj* x)\n{\n x->~obj();\n}\nvoid destruct(var* x)\n{\n x->~var();\n}\nvoid destruct(fd* x)\n{\n x->~fd();\n}\narr_bool detach(arr_bool& x)\n{\n arr_bool r;\n swap(r,x);\n return r;\n}\nstr detach(str& x)\n{\n str r;\n swap(r,x);\n return r;\n}\narr_int detach(arr_int& x)\n{\n arr_int r;\n swap(r,x);\n return r;\n}\narr_double detach(arr_double& x)\n{\n arr_double r;\n swap(r,x);\n return r;\n}\narr_str detach(arr_str& x)\n{\n arr_str r;\n swap(r,x);\n return r;\n}\narr_obj detach(arr_obj& x)\n{\n arr_obj r;\n swap(r,x);\n return r;\n}\narr detach(arr& x)\n{\n arr r;\n swap(r,x);\n return r;\n}\nint detach(fd& x)\n{\n int r=-1;\n swap(r,x.n);\n return r;\n}\nvoid dir_change(const str& x)\n{\n const str s=to_c(x);\n const int n=chdir(s.ptr);\n check(eq(n,0));\n}\nstr dir_current()\n{\n const int n=PATH_MAX;\n char s[n]={};\n const char* ptr=getcwd(s,n);\n check(neq(ptr,nullptr));\n return to_str(s);\n}\narr_str dir_read(const str& x)\n{\n arr_str r;\n const str path=to_c(x);\n DIR* dir=opendir(path.ptr);\n check(neq(dir,nullptr));\n while(true)\n {\n  const dirent* entry=readdir(dir);\n  if(eq(entry,nullptr))\n   break;\n  const str base=to_str(entry->d_name);\n  if(eq(base,_s14))\n   continue;\n  if(eq(base,_s15))\n   continue;\n  const str path=path_concat(x,base);\n  push(r,path);\n }\n const int n=closedir(dir);\n check(eq(n,0));\n sort(r);\n return r;\n}\nchar div_(const char x,const char y)\n{\n check(neq(x,0));\n return x/y;\n}\nint div_(const int x,const int y)\n{\n check(neq(x,0));\n return x/y;\n}\ndouble div_(const double x,const double y)\n{\n check(neq(x,0));\n return x/y;\n}\nchar div_(const char x,const int y)\n{\n check(neq(x,0));\n return x/y;\n}\ndouble div_(const double x,const int y)\n{\n check(neq(x,0));\n return x/y;\n}\nvoid drop(arr_bool& x)\n{\n drop(x,1);\n}\nvoid drop(str& x)\n{\n drop(x,1);\n}\nvoid drop(arr_int& x)\n{\n drop(x,1);\n}\nvoid drop(arr_double& x)\n{\n drop(x,1);\n}\nvoid drop(arr_str& x)\n{\n drop(x,1);\n}\nvoid drop(arr_obj& x)\n{\n drop(x,1);\n}\nvoid drop(arr& x)\n{\n drop(x,1);\n}\nvoid drop(arr_bool& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid drop(str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid drop(arr_int& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid drop(arr_double& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid drop(arr_str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid drop(arr_obj& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid drop(arr& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n allocate(x,n);\n}\nvoid dump(const bool x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const char x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const int x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const double x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const void* x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const arr_bool& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const str& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const arr_int& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const arr_double& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const arr_str& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const arr_obj& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const arr& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const var& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid dump(const obj& x)\n{\n const str s=to_dump(x);\n print(s);\n}\nvoid echo(const bool x)\n{\n const str s=to_str(x);\n echo(s);\n}\nvoid echo(const char x)\n{\n const str s=to_str(x);\n echo(s);\n}\nvoid echo(const int x)\n{\n const str s=to_str(x);\n echo(s);\n}\nvoid echo(const double x)\n{\n const str s=to_str(x);\n echo(s);\n}\nvoid echo(const str& x)\n{\n const str s1=to_c(_s16);\n const str s2=to_c(x);\n check(gte(printf(s1.ptr,s2.ptr),0));\n}\nbool eq(const bool x,const bool y)\n{\n return x==y;\n}\nbool eq(const char x,const char y)\n{\n return x==y;\n}\nbool eq(const int x,const int y)\n{\n return x==y;\n}\nbool eq(const double x,const double y)\n{\n return x==y;\n}\nbool eq(const char x,const int y)\n{\n return x==y;\n}\nbool eq(const double x,const int y)\n{\n return x==y;\n}\nbool eq(const void* x,const void* y)\n{\n return x==y;\n}\nbool eq(const fd& x,const fd& y)\n{\n stop();\n return false;\n}\nbool eq(const arr_bool& x,const arr_bool& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const str& x,const str& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const arr_int& x,const arr_int& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const arr_double& x,const arr_double& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const arr_str& x,const arr_str& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const arr_obj& x,const arr_obj& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const arr& x,const arr& y)\n{\n const int n=cmp(x,y);\n return eq(n,0);\n}\nbool eq(const var& x,const var& y)\n{\n if(x.t!=y.t)\n  return false;\n if(is_bool(x))\n {\n  const bool v1=at_bool(x);\n  const bool v2=at_bool(y);\n  return eq(v1,v2);\n }\n if(is_char(x))\n {\n  const char v1=at_char(x);\n  const char v2=at_char(y);\n  return eq(v1,v2);\n }\n if(is_int(x))\n {\n  const int v1=at_int(x);\n  const int v2=at_int(y);\n  return eq(v1,v2);\n }\n if(is_double(x))\n {\n  const double v1=at_double(x);\n  const double v2=at_double(y);\n  return eq(v1,v2);\n }\n if(is_arr(x))\n {\n  const arr& v1=at_arr(x);\n  const arr& v2=at_arr(y);\n  return eq(v1,v2);\n }\n if(is_obj(x))\n {\n  const obj& v1=at_obj(x);\n  const obj& v2=at_obj(y);\n  return eq(v1,v2);\n }\n stop();\n return false;\n}\nbool eq(const obj& x,const obj& y)\n{\n const int n=eq(x,y);\n return eq(n,0);\n}\nobj error_get()\n{\n obj r;\n const char* ptr=strerror(errno);\n const str message=to_str(ptr);\n put(r,_s10,errno);\n put(r,_s17,message);\n return r;\n}\nstr escape(const char x)\n{\n str r;\n if(eq(x,\'\\\\\'))\n  append(r,_s18);\n else if(eq(x,\'\\\'\'))\n  append(r,_s19);\n else if(eq(x,\'\"\'))\n  append(r,_s20);\n else if(eq(x,\'\\n\'))\n  append(r,_s21);\n else if(eq(x,\'\\r\'))\n  append(r,_s22);\n else if(eq(x,\'\\t\'))\n  append(r,_s23);\n else if(between(x,32,126))\n  push(r,x);\n else\n {\n  const int n1=64;\n  const int n2=inc(n1);\n  const int n3=(unsigned char)x;\n  char s1[n1]={};\n  const str s2=to_c(_s24);\n  const int n4=snprintf(s1,n1,s2.ptr,n3);\n  check(gte(n4,0));\n  const str s3=to_str(s1);\n  append(r,s3);\n }\n return r;\n}\nbool every(const arr_bool& x,bool (*const y)(const bool& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool every(const str& x,bool (*const y)(const char& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const char& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool every(const arr_int& x,bool (*const y)(const int& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool every(const arr_double& x,bool (*const y)(const double& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool every(const arr_str& x,bool (*const y)(const str& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool every(const arr_obj& x,bool (*const y)(const obj& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool every(const arr& x,bool (*const y)(const var& x))\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(!y(v))\n   return false;\n }\n return true;\n}\nbool extract(arr_bool& x,const bool& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nbool extract(str& x,const char& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const char& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nbool extract(arr_int& x,const int& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nbool extract(arr_double& x,const double& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nbool extract(arr_str& x,const str& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nbool extract(arr_obj& x,const obj& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nbool extract(arr& x,const var& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(eq(v,y))\n  {\n   remove(x,i);\n   return true;\n  }\n }\n return false;\n}\nstr file_read(const str& x)\n{\n const str s=to_c(x);\n const int n=open(s.ptr,O_RDONLY);\n check(gte(n,0));\n fd file;\n assign(file.n,n);\n return read(file);\n}\nvoid file_save(const str& x,const str& y)\n{\n if(is_file(x))\n {\n  const str s=file_read(x);\n  if(eq(s,y))\n   return;\n }\n file_write(x,y);\n}\nint file_size(const str& x)\n{\n const str s=to_c(x);\n struct stat data;\n const int n=stat(s.ptr,&data);\n check(eq(n,0));\n return data.st_size;\n}\nvoid file_write(const str& x,const str& y)\n{\n const str s1=to_c(x);\n const int n=creat(s1.ptr,0777);\n check(gte(n,0));\n fd file;\n assign(file.n,n);\n str s2=y;\n while(is_full(s2))\n {\n  const str s3=head(s2,1024);\n  shift(s2,s3.len);\n  write(file,s3);\n }\n}\nint find(const arr_bool& x,const bool& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nint find(const str& x,const char& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const char& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nint find(const arr_int& x,const int& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nint find(const arr_double& x,const double& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nint find(const arr_str& x,const str& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nint find(const arr_obj& x,const obj& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nint find(const arr& x,const var& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(eq(v,y))\n   return i;\n }\n return -1;\n}\nbool& front(arr_bool& x)\n{\n return at(x,0);\n}\nchar& front(str& x)\n{\n return at(x,0);\n}\nint& front(arr_int& x)\n{\n return at(x,0);\n}\ndouble& front(arr_double& x)\n{\n return at(x,0);\n}\nstr& front(arr_str& x)\n{\n return at(x,0);\n}\nobj& front(arr_obj& x)\n{\n return at(x,0);\n}\nvar& front(arr& x)\n{\n return at(x,0);\n}\nconst bool& front(const arr_bool& x)\n{\n return at(x,0);\n}\nconst char& front(const str& x)\n{\n return at(x,0);\n}\nconst int& front(const arr_int& x)\n{\n return at(x,0);\n}\nconst double& front(const arr_double& x)\n{\n return at(x,0);\n}\nconst str& front(const arr_str& x)\n{\n return at(x,0);\n}\nconst obj& front(const arr_obj& x)\n{\n return at(x,0);\n}\nconst var& front(const arr& x)\n{\n return at(x,0);\n}\nvoid front(arr_bool& x,const bool& y)\n{\n at(x,0,y);\n}\nvoid front(str& x,const char& y)\n{\n at(x,0,y);\n}\nvoid front(arr_int& x,const int& y)\n{\n at(x,0,y);\n}\nvoid front(arr_double& x,const double& y)\n{\n at(x,0,y);\n}\nvoid front(arr_str& x,const str& y)\n{\n at(x,0,y);\n}\nvoid front(arr_obj& x,const obj& y)\n{\n at(x,0,y);\n}\nvoid front(arr& x,const var& y)\n{\n at(x,0,y);\n}\nconst arr& get_arr(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_arr(v);\n}\narr& get_arr(obj& x,const str& y)\n{\n var& v=get(x,y);\n return at_arr(v);\n}\nbool get_bool(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_bool(v);\n}\nchar get_char(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_char(v);\n}\ndouble get_double(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_double(v);\n}\nint get_indent(const str& x)\n{\n const str s=trim_l(x);\n return sub(x.len,s.len);\n}\nint get_int(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_int(v);\n}\nconst obj& get_obj(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_obj(v);\n}\nobj& get_obj(obj& x,const str& y)\n{\n var& v=get(x,y);\n return at_obj(v);\n}\nconst str& get_str(const obj& x,const str& y)\n{\n const var& v=get(x,y);\n return at_str(v);\n}\nstr& get_str(obj& x,const str& y)\n{\n var& v=get(x,y);\n return at_str(v);\n}\nconst var& get(const obj& x,const str& y)\n{\n check(has(x,y));\n for(int i=0;lt(i,x.ks.len);i++)\n {\n  const str& k=at(x.ks,i);\n  const var& v=at(x.vs,i);\n  if(eq(k,y))\n   return v;\n }\n stop();\n static const var dummy;\n return dummy;\n}\nvar& get(obj& x,const str& y)\n{\n check(has(x,y));\n for(int i=0;lt(i,x.ks.len);i++)\n {\n  const str& k=at(x.ks,i);\n  var& v=at(x.vs,i);\n  if(eq(k,y))\n   return v;\n }\n stop();\n static var dummy;\n return dummy;\n}\nbool gt(const bool x,const bool y)\n{\n return x>y;\n}\nbool gt(const char x,const char y)\n{\n return x>y;\n}\nbool gt(const int x,const int y)\n{\n return x>y;\n}\nbool gt(const double x,const double y)\n{\n return x>y;\n}\nbool gt(const char x,const int y)\n{\n return x>y;\n}\nbool gt(const double x,const int y)\n{\n return x>y;\n}\nbool gt(const arr_bool& x,const arr_bool& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const str& x,const str& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const arr_int& x,const arr_int& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const arr_double& x,const arr_double& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const arr_str& x,const arr_str& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const arr_obj& x,const arr_obj& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const arr& x,const arr& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gt(const var& x,const var& y)\n{\n if(x.t!=y.t)\n  return false;\n if(is_bool(x))\n {\n  const bool v1=at_bool(x);\n  const bool v2=at_bool(y);\n  return gt(v1,v2);\n }\n if(is_char(x))\n {\n  const char v1=at_char(x);\n  const char v2=at_char(y);\n  return gt(v1,v2);\n }\n if(is_int(x))\n {\n  const int v1=at_int(x);\n  const int v2=at_int(y);\n  return gt(v1,v2);\n }\n if(is_double(x))\n {\n  const double v1=at_double(x);\n  const double v2=at_double(y);\n  return gt(v1,v2);\n }\n if(is_arr(x))\n {\n  const arr& v1=at_arr(x);\n  const arr& v2=at_arr(y);\n  return gt(v1,v2);\n }\n if(is_obj(x))\n {\n  const obj& v1=at_obj(x);\n  const obj& v2=at_obj(y);\n  return gt(v1,v2);\n }\n stop();\n return false;\n}\nbool gt(const obj& x,const obj& y)\n{\n const int n=cmp(x,y);\n return gt(n,0);\n}\nbool gte(const bool x,const bool y)\n{\n return x>=y;\n}\nbool gte(const char x,const char y)\n{\n return x>=y;\n}\nbool gte(const int x,const int y)\n{\n return x>=y;\n}\nbool gte(const double x,const double y)\n{\n return x>=y;\n}\nbool gte(const char x,const int y)\n{\n return x>=y;\n}\nbool gte(const double x,const int y)\n{\n return x>=y;\n}\nbool gte(const arr_bool& x,const arr_bool& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const str& x,const str& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const arr_int& x,const arr_int& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const arr_double& x,const arr_double& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const arr_str& x,const arr_str& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const arr_obj& x,const arr_obj& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const arr& x,const arr& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool gte(const var& x,const var& y)\n{\n if(x.t!=y.t)\n  return false;\n if(is_bool(x))\n {\n  const bool v1=at_bool(x);\n  const bool v2=at_bool(y);\n  return gte(v1,v2);\n }\n if(is_char(x))\n {\n  const char v1=at_char(x);\n  const char v2=at_char(y);\n  return gte(v1,v2);\n }\n if(is_int(x))\n {\n  const int v1=at_int(x);\n  const int v2=at_int(y);\n  return gte(v1,v2);\n }\n if(is_double(x))\n {\n  const double v1=at_double(x);\n  const double v2=at_double(y);\n  return gte(v1,v2);\n }\n if(is_arr(x))\n {\n  const arr& v1=at_arr(x);\n  const arr& v2=at_arr(y);\n  return gte(v1,v2);\n }\n if(is_obj(x))\n {\n  const obj& v1=at_obj(x);\n  const obj& v2=at_obj(y);\n  return gte(v1,v2);\n }\n stop();\n return false;\n}\nbool gte(const obj& x,const obj& y)\n{\n const int n=cmp(x,y);\n return gte(n,0);\n}\nbool has(const obj& x,const str& y)\n{\n return contain(x.ks,y);\n}\narr_bool head(const arr_bool& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\nstr head(const str& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\narr_int head(const arr_int& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\narr_double head(const arr_double& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\narr_str head(const arr_str& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\narr_obj head(const arr_obj& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\narr head(const arr& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_l(x,y);\n}\nchar inc(const char x)\n{\n return add(x,1);\n}\nint inc(const int x)\n{\n return add(x,1);\n}\ndouble inc(const double x)\n{\n return add(x,1);\n}\nbool is_access(const str& x)\n{\n if(is_empty(x))\n  return false;\n const arr_str a=split(x,_s14);\n if(is_single(a))\n  return false;\n return every(a,is_identifier);\n}\nbool is_alnum(const char x)\n{\n if(is_alpha(x))\n  return true;\n if(is_digit(x))\n  return true;\n return false;\n}\nbool is_alnum(const str& x)\n{\n if(is_empty(x))\n  return false;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  if(!is_alnum(v))\n   return false;\n }\n return true;\n}\nbool is_alpha(const char x)\n{\n if(eq(x,\'_\'))\n  return true;\n if(between(x,\'a\',\'z\'))\n  return true;\n if(between(x,\'A\',\'Z\'))\n  return true;\n return false;\n}\nbool is_alpha(const str& x)\n{\n if(is_empty(x))\n  return false;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  if(!is_alpha(v))\n   return false;\n }\n return true;\n}\nbool is_arr(const var& x)\n{\n return x.t==type::_arr;\n}\nbool is_blank(const char x)\n{\n if(eq(x,\' \'))\n  return true;\n if(eq(x,\'\\n\'))\n  return true;\n if(eq(x,\'\\r\'))\n  return true;\n if(eq(x,\'\\t\'))\n  return true;\n return false;\n}\nbool is_blank(const str& x)\n{\n if(is_empty(x))\n  return false;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  if(!is_blank(v))\n   return false;\n }\n return true;\n}\nbool is_bool(const var& x)\n{\n return x.t==type::_bool;\n}\nbool is_char(const var& x)\n{\n return x.t==type::_char;\n}\nbool is_comment(const str& x)\n{\n if(!is_line(x))\n  return false;\n return match_l(x,_s25);\n}\nbool is_composite(const bool& x)\n{\n return false;\n}\nbool is_composite(const char& x)\n{\n return false;\n}\nbool is_composite(const int& x)\n{\n return false;\n}\nbool is_composite(const double& x)\n{\n return false;\n}\nbool is_composite(const arr_bool& x)\n{\n return true;\n}\nbool is_composite(const str& x)\n{\n return true;\n}\nbool is_composite(const arr_int& x)\n{\n return true;\n}\nbool is_composite(const arr_double& x)\n{\n return true;\n}\nbool is_composite(const arr_str& x)\n{\n return true;\n}\nbool is_composite(const arr_obj& x)\n{\n return true;\n}\nbool is_composite(const arr& x)\n{\n return true;\n}\nbool is_composite(const obj& x)\n{\n return true;\n}\nbool is_composite(const var& x)\n{\n return true;\n}\nbool is_composite(const fd& x)\n{\n return true;\n}\nbool is_digit(const char x)\n{\n return between(x,\'0\',\'9\');\n}\nbool is_digit(const str& x)\n{\n if(is_empty(x))\n  return false;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  if(!is_digit(v))\n   return false;\n }\n return true;\n}\nbool is_dir(const str& x)\n{\n const str s=to_c(x);\n struct stat data;\n const int n=stat(s.ptr,&data);\n if(neq(n,0))\n  return false;\n return S_ISDIR(data.st_mode);\n}\nbool is_double(const var& x)\n{\n return x.t==type::_double;\n}\nbool is_empty(const arr_bool& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const str& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const arr_int& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const arr_double& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const arr_str& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const arr_obj& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const arr& x)\n{\n return eq(x.len,0);\n}\nbool is_empty(const var& x)\n{\n return x.t==type::_empty;\n}\nbool is_empty(const obj& x)\n{\n return is_empty(x.ks);\n}\nbool is_empty(const fd& x)\n{\n return lt(x.n,0);\n}\nbool is_file(const str& x)\n{\n const str s=to_c(x);\n struct stat data;\n const int n=stat(s.ptr,&data);\n if(neq(n,0))\n  return false;\n return S_ISREG(data.st_mode);\n}\nbool is_fragment(const str& x)\n{\n if(is_alnum(x))\n  return true;\n if(is_space(x))\n  return true;\n return false;\n}\nbool is_full(const arr_bool& x)\n{\n return !is_empty(x);\n}\nbool is_full(const str& x)\n{\n return !is_empty(x);\n}\nbool is_full(const arr_int& x)\n{\n return !is_empty(x);\n}\nbool is_full(const arr_double& x)\n{\n return !is_empty(x);\n}\nbool is_full(const arr_str& x)\n{\n return !is_empty(x);\n}\nbool is_full(const arr_obj& x)\n{\n return !is_empty(x);\n}\nbool is_full(const arr& x)\n{\n return !is_empty(x);\n}\nbool is_full(const var& x)\n{\n return !is_empty(x);\n}\nbool is_full(const obj& x)\n{\n return !is_empty(x);\n}\nbool is_full(const fd& x)\n{\n return !is_empty(x);\n}\nbool is_identifier(const str& x)\n{\n if(is_empty(x))\n  return false;\n const char c=front(x);\n if(!is_alpha(c))\n  return false;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  if(!is_alnum(v))\n   return false;\n }\n return true;\n}\nbool is_int(const var& x)\n{\n return x.t==type::_int;\n}\nbool is_integral(const bool& x)\n{\n return true;\n}\nbool is_integral(const char& x)\n{\n return true;\n}\nbool is_integral(const int& x)\n{\n return true;\n}\nbool is_integral(const double& x)\n{\n return true;\n}\nbool is_integral(const arr_bool& x)\n{\n return false;\n}\nbool is_integral(const str& x)\n{\n return false;\n}\nbool is_integral(const arr_int& x)\n{\n return false;\n}\nbool is_integral(const arr_double& x)\n{\n return false;\n}\nbool is_integral(const arr_str& x)\n{\n return false;\n}\nbool is_integral(const arr_obj& x)\n{\n return false;\n}\nbool is_integral(const arr& x)\n{\n return false;\n}\nbool is_integral(const obj& x)\n{\n return false;\n}\nbool is_integral(const var& x)\n{\n return false;\n}\nbool is_integral(const fd& x)\n{\n return false;\n}\nbool is_key(const str& x)\n{\n if(is_digit(x))\n  return false;\n return is_alnum(x);\n}\nbool is_last(const arr_bool& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_last(const str& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_last(const arr_int& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_last(const arr_double& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_last(const arr_str& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_last(const arr_obj& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_last(const arr& x,const int y)\n{\n const int n=dec(x.len);\n return eq(y,n);\n}\nbool is_line(const str& x)\n{\n return !is_text(x);\n}\nbool is_lit_char(const str& x)\n{\n if(is_empty(x))\n  return false;\n str s;\n return parse_lit_char(s,x);\n}\nbool is_lit(const str& x)\n{\n if(is_empty(x))\n  return false;\n str s;\n return parse_lit(s,x);\n}\nbool is_many(const arr_bool& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const str& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const arr_int& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const arr_double& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const arr_str& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const arr_obj& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const arr& x)\n{\n return gt(x.len,1);\n}\nbool is_many(const obj& x)\n{\n return is_many(x.ks);\n}\nbool is_numeric(const str& x)\n{\n if(is_empty(x))\n  return false;\n const str s=trim(x);\n if(neq(s,x))\n  return false;\n int n=0;\n return parse_int(n,x);\n}\nbool is_obj(const var& x)\n{\n return x.t==type::_obj;\n}\nbool is_single(const arr_bool& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const str& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const arr_int& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const arr_double& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const arr_str& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const arr_obj& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const arr& x)\n{\n return eq(x.len,1);\n}\nbool is_single(const obj& x)\n{\n return is_single(x.ks);\n}\nbool is_space(const char x)\n{\n return eq(x,\' \');\n}\nbool is_space(const str& x)\n{\n if(is_empty(x))\n  return false;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  if(!is_space(v))\n   return false;\n }\n return true;\n}\nbool is_str(const var& x)\n{\n return x.t==type::_str;\n}\nbool is_text(const str& x)\n{\n return contain(x,_s26);\n}\nbool is_token(const str& x)\n{\n if(is_alnum(x))\n  return true;\n if(is_access(x))\n  return true;\n if(is_tuple(x))\n  return true;\n if(is_numeric(x))\n  return true;\n if(is_lit(x))\n  return true;\n if(is_lit_char(x))\n  return true;\n if(is_comment(x))\n  return true;\n return false;\n}\nbool is_tuple(const str& x)\n{\n if(is_empty(x))\n  return false;\n const arr_str a=split(x,_s8);\n if(is_single(a))\n  return false;\n return every(a,is_identifier);\n}\nbool is_var_integral(const var& x)\n{\n if(is_bool(x))\n  return true;\n if(is_char(x))\n  return true;\n if(is_int(x))\n  return true;\n if(is_double(x))\n  return true;\n return false;\n}\nstr join(const arr_str& x)\n{\n return join(x,_s26);\n}\nstr join(const arr_str& x,const str& y)\n{\n str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  append(r,v);\n  if(!is_last(x,i))\n   append(r,y);\n }\n return r;\n}\nvoid ln()\n{\n echo(_s26);\n}\nbool lt(const bool x,const bool y)\n{\n return x<y;\n}\nbool lt(const char x,const char y)\n{\n return x<y;\n}\nbool lt(const int x,const int y)\n{\n return x<y;\n}\nbool lt(const double x,const double y)\n{\n return x<y;\n}\nbool lt(const char x,const int y)\n{\n return x<y;\n}\nbool lt(const double x,const int y)\n{\n return x<y;\n}\nbool lt(const arr_bool& x,const arr_bool& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const str& x,const str& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const arr_int& x,const arr_int& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const arr_double& x,const arr_double& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const arr_str& x,const arr_str& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const arr_obj& x,const arr_obj& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const arr& x,const arr& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lt(const var& x,const var& y)\n{\n if(x.t!=y.t)\n  return false;\n if(is_bool(x))\n {\n  const bool v1=at_bool(x);\n  const bool v2=at_bool(y);\n  return lt(v1,v2);\n }\n if(is_char(x))\n {\n  const char v1=at_char(x);\n  const char v2=at_char(y);\n  return lt(v1,v2);\n }\n if(is_int(x))\n {\n  const int v1=at_int(x);\n  const int v2=at_int(y);\n  return lt(v1,v2);\n }\n if(is_double(x))\n {\n  const double v1=at_double(x);\n  const double v2=at_double(y);\n  return lt(v1,v2);\n }\n if(is_arr(x))\n {\n  const arr& v1=at_arr(x);\n  const arr& v2=at_arr(y);\n  return lt(v1,v2);\n }\n if(is_obj(x))\n {\n  const obj& v1=at_obj(x);\n  const obj& v2=at_obj(y);\n  return lt(v1,v2);\n }\n stop();\n return false;\n}\nbool lt(const obj& x,const obj& y)\n{\n const int n=cmp(x,y);\n return lt(n,0);\n}\nbool lte(const bool x,const bool y)\n{\n return x<=y;\n}\nbool lte(const char x,const char y)\n{\n return x<=y;\n}\nbool lte(const int x,const int y)\n{\n return x<=y;\n}\nbool lte(const double x,const double y)\n{\n return x<=y;\n}\nbool lte(const char x,const int y)\n{\n return x<=y;\n}\nbool lte(const double x,const int y)\n{\n return x<=y;\n}\nbool lte(const arr_bool& x,const arr_bool& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const str& x,const str& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const arr_int& x,const arr_int& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const arr_double& x,const arr_double& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const arr_str& x,const arr_str& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const arr_obj& x,const arr_obj& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const arr& x,const arr& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nbool lte(const var& x,const var& y)\n{\n if(x.t!=y.t)\n  return false;\n if(is_bool(x))\n {\n  const bool v1=at_bool(x);\n  const bool v2=at_bool(y);\n  return lte(v1,v2);\n }\n if(is_char(x))\n {\n  const char v1=at_char(x);\n  const char v2=at_char(y);\n  return lte(v1,v2);\n }\n if(is_int(x))\n {\n  const int v1=at_int(x);\n  const int v2=at_int(y);\n  return lte(v1,v2);\n }\n if(is_double(x))\n {\n  const double v1=at_double(x);\n  const double v2=at_double(y);\n  return lte(v1,v2);\n }\n if(is_arr(x))\n {\n  const arr& v1=at_arr(x);\n  const arr& v2=at_arr(y);\n  return lte(v1,v2);\n }\n if(is_obj(x))\n {\n  const obj& v1=at_obj(x);\n  const obj& v2=at_obj(y);\n  return lte(v1,v2);\n }\n stop();\n return false;\n}\nbool lte(const obj& x,const obj& y)\n{\n const int n=cmp(x,y);\n return lte(n,0);\n}\nint main(const int x,const char** y)\n{\n try\n {\n  const char* ptr=y[0];\n  const str s1=to_str(ptr);\n  const str s2=path_real(s1);\n  assign(process,s2);\n  arr_str a;\n  for(int i=1;lt(i,x);i++)\n  {\n   const char* ptr=y[i];\n   const str s=to_str(ptr);\n   push(a,s);\n  }\n  on_main_890(a);\n  const double n=time_now();\n  const str s3=to_str(n);\n  const str s4=concat(s3,_s27);\n  echo(_s28);\n  space();\n  print(s4);\n }\n catch(...)\n {\n  print(_s13);\n }\n return 0;\n}\nvoid on_main_890(const arr_str& x)\n{\n const int n1=sizeof(bool);\n const int n2=max(n1,sizeof(char));\n const int n3=max(n2,sizeof(int));\n const int n4=max(n3,sizeof(double));\n const int n5=max(n4,sizeof(arr));\n const int n6=max(n5,sizeof(obj));\n const var c;\n const int n7=sizeof(c.b);\n if(neq(n6,n7))\n {\n  echo(_s29);\n  space();\n  print(n6);\n  echo(_s30);\n  space();\n  print(n7);\n  return;\n }\n init(x);\n}\nbool match_l(const str& x,const str& y)\n{\n if(is_empty(x))\n  return false;\n if(is_empty(y))\n  return false;\n if(gt(y.len,x.len))\n  return false;\n const int n=memcmp(x.ptr,y.ptr,y.len);\n return eq(n,0);\n}\nbool match_r(const str& x,const str& y)\n{\n if(is_empty(x))\n  return false;\n if(is_empty(y))\n  return false;\n if(gt(y.len,x.len))\n  return false;\n const int n1=sub(x.len,y.len);\n const char* ptr=x.ptr+n1;\n const int n2=memcmp(ptr,y.ptr,y.len);\n return eq(n2,0);\n}\nchar max(const char x,const char y)\n{\n if(gt(x,y))\n  return x;\n return y;\n}\nint max(const int x,const int y)\n{\n if(gt(x,y))\n  return x;\n return y;\n}\ndouble max(const double x,const double y)\n{\n if(gt(x,y))\n  return x;\n return y;\n}\nchar min(const char x,const char y)\n{\n if(lt(x,y))\n  return x;\n return y;\n}\nint min(const int x,const int y)\n{\n if(lt(x,y))\n  return x;\n return y;\n}\ndouble min(const double x,const double y)\n{\n if(lt(x,y))\n  return x;\n return y;\n}\nvoid move(arr_bool& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(bool));\n  bool* ptr1=x.ptr+y;\n  const bool* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   bool& v1=at(x,n1);\n   bool& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   bool& v1=at(x,n3);\n   bool& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(str& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(char));\n  char* ptr1=x.ptr+y;\n  const char* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   char& v1=at(x,n1);\n   char& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   char& v1=at(x,n3);\n   char& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_int& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(int));\n  int* ptr1=x.ptr+y;\n  const int* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   int& v1=at(x,n1);\n   int& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   int& v1=at(x,n3);\n   int& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_double& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(double));\n  double* ptr1=x.ptr+y;\n  const double* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   double& v1=at(x,n1);\n   double& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   double& v1=at(x,n3);\n   double& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_str& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(str));\n  str* ptr1=x.ptr+y;\n  const str* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   str& v1=at(x,n1);\n   str& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   str& v1=at(x,n3);\n   str& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_obj& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(obj));\n  obj* ptr1=x.ptr+y;\n  const obj* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   obj& v1=at(x,n1);\n   obj& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   obj& v1=at(x,n3);\n   obj& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr& x,const int y,const int z,const int a)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n check(between(a,0,x.len));\n const int n1=add(y,a);\n check(lte(n1,x.len));\n const int n2=add(z,a);\n check(lte(n2,x.len));\n if(eq(a,0))\n  return;\n if(eq(y,z))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(a,sizeof(var));\n  var* ptr1=x.ptr+y;\n  const var* ptr2=x.ptr+z;\n  memmove(ptr1,ptr2,n);\n }\n else if(gt(z,y))\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(z,i);\n   var& v1=at(x,n1);\n   var& v2=at(x,n2);\n   swap(v1,v2);\n  }\n }\n else\n {\n  for(int i=0;lt(i,a);i++)\n  {\n   const int n1=dec(a);\n   const int n2=sub(n1,i);\n   const int n3=add(y,n2);\n   const int n4=add(z,n2);\n   var& v1=at(x,n3);\n   var& v2=at(x,n4);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_bool& x,const int y,arr_bool& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(bool));\n  bool* ptr1=x.ptr+y;\n  const bool* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   bool& v1=at(x,n1);\n   bool& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(str& x,const int y,str& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(char));\n  char* ptr1=x.ptr+y;\n  const char* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   char& v1=at(x,n1);\n   char& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_int& x,const int y,arr_int& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(int));\n  int* ptr1=x.ptr+y;\n  const int* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   int& v1=at(x,n1);\n   int& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_double& x,const int y,arr_double& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(double));\n  double* ptr1=x.ptr+y;\n  const double* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   double& v1=at(x,n1);\n   double& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_str& x,const int y,arr_str& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(str));\n  str* ptr1=x.ptr+y;\n  const str* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   str& v1=at(x,n1);\n   str& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr_obj& x,const int y,arr_obj& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(obj));\n  obj* ptr1=x.ptr+y;\n  const obj* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   obj& v1=at(x,n1);\n   obj& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nvoid move(arr& x,const int y,arr& z,const int a,const int b)\n{\n check(between(y,0,x.len));\n check(between(a,0,z.len));\n check(between(b,0,x.len));\n check(between(b,0,z.len));\n const int n1=add(y,b);\n check(lte(n1,x.len));\n const int n2=add(a,b);\n check(lte(n2,z.len));\n if(eq(b,0))\n  return;\n if(is_integral(*x.ptr))\n {\n  const int n=mul(b,sizeof(var));\n  var* ptr1=x.ptr+y;\n  const var* ptr2=z.ptr+a;\n  memcpy(ptr1,ptr2,n);\n }\n else\n {\n  for(int i=0;lt(i,b);i++)\n  {\n   const int n1=add(y,i);\n   const int n2=add(a,i);\n   var& v1=at(x,n1);\n   var& v2=at(z,n2);\n   swap(v1,v2);\n  }\n }\n}\nchar mul(const char x,const char y)\n{\n return x*y;\n}\nint mul(const int x,const int y)\n{\n return x*y;\n}\ndouble mul(const double x,const double y)\n{\n return x*y;\n}\nchar mul(const char x,const int y)\n{\n return x*y;\n}\ndouble mul(const double x,const int y)\n{\n return x*y;\n}\nbool neq(const bool x,const bool y)\n{\n return x!=y;\n}\nbool neq(const char x,const char y)\n{\n return x!=y;\n}\nbool neq(const int x,const int y)\n{\n return x!=y;\n}\nbool neq(const double x,const double y)\n{\n return x!=y;\n}\nbool neq(const char x,const int y)\n{\n return x!=y;\n}\nbool neq(const double x,const int y)\n{\n return x!=y;\n}\nbool neq(const void* x,const void* y)\n{\n return x!=y;\n}\nbool neq(const fd& x,const fd& y)\n{\n stop();\n return false;\n}\nbool neq(const arr_bool& x,const arr_bool& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const str& x,const str& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const arr_int& x,const arr_int& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const arr_double& x,const arr_double& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const arr_str& x,const arr_str& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const arr_obj& x,const arr_obj& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const arr& x,const arr& y)\n{\n const int n=cmp(x,y);\n return neq(n,0);\n}\nbool neq(const var& x,const var& y)\n{\n const bool b=eq(x,y);\n return not(b);\n}\nbool neq(const obj& x,const obj& y)\n{\n const bool b=eq(x,y);\n return not(b);\n}\nstr os_execute(const str& x)\n{\n const str s1=to_c(x);\n const str s2=to_c(_s31);\n FILE* ptr=popen(s1.ptr,s2.ptr);\n const int n1=fileno(ptr);\n fd f;\n f.n=n1;\n const str s3=read(f);\n detach(f);\n const str r=trim_r(s3);\n const int n2=pclose(ptr);\n check(eq(n2,0));\n return r;\n}\nint os_system(const str& x)\n{\n const str s1=to_c(x);\n const str s2=concat(_s32,x);\n print(s2);\n return system(s1.ptr);\n}\nint os_system(const str& x,const str& y)\n{\n arr_str a1;\n push(a1,x);\n push(a1,y);\n const str s=join(a1,_s4);\n return os_system(s);\n}\nint os_system(const str& x,const str& y,const str& z)\n{\n arr_str a1;\n push(a1,x);\n push(a1,y);\n push(a1,z);\n const str s=join(a1,_s4);\n return os_system(s);\n}\nint os_system(const str& x,const str& y,const str& z,const str& a)\n{\n arr_str a1;\n push(a1,x);\n push(a1,y);\n push(a1,z);\n push(a1,a);\n const str s=join(a1,_s4);\n return os_system(s);\n}\nint os_system(const str& x,const str& y,const str& z,const str& a,const str& b)\n{\n arr_str a1;\n push(a1,x);\n push(a1,y);\n push(a1,z);\n push(a1,a);\n push(a1,b);\n const str s=join(a1,_s4);\n return os_system(s);\n}\nint os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)\n{\n arr_str a1;\n push(a1,x);\n push(a1,y);\n push(a1,z);\n push(a1,a);\n push(a1,b);\n push(a1,c);\n const str s=join(a1,_s4);\n return os_system(s);\n}\nint os_system(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)\n{\n arr_str a1;\n push(a1,x);\n push(a1,y);\n push(a1,z);\n push(a1,a);\n push(a1,b);\n push(a1,c);\n push(a1,d);\n const str s=join(a1,_s4);\n return os_system(s);\n}\nbool parse_int(int& x,const str& y)\n{\n const str s1=to_c(y);\n const long n1=strtol(s1.ptr,nullptr,10);\n if(n1==LONG_MIN)\n  return false;\n if(n1==LONG_MAX)\n  return false;\n const int n2=n1;\n const str s2=to_str(n2);\n if(neq(s2,y))\n  return false;\n assign(x,n2);\n return true;\n}\nbool parse_lit_char(str& x,const str& y)\n{\n clear(x);\n str input=y;\n str output;\n if(!match_l(input,_s33))\n  return false;\n shift(input);\n while(is_full(input))\n {\n  if(match_l(input,_s34))\n   break;\n  else if(match_l(input,_s21))\n  {\n   push(output,\'\\n\');\n   shift(input,2);\n  }\n  else if(match_l(input,_s22))\n  {\n   push(output,\'\\r\');\n   shift(input,2);\n  }\n  else if(match_l(input,_s23))\n  {\n   push(output,\'\\t\');\n   shift(input,2);\n  }\n  else if(match_l(input,_s35))\n  {\n   shift(input,2);\n   if(lt(input.len,2))\n    return false;\n   const str s=slice_l(input,2);\n   shift(input,2);\n   const int n=to_int(s);\n   check(between(n,0,255));\n   const char c=n;\n   push(output,c);\n  }\n  else if(match_l(input,_s36))\n  {\n   shift(input);\n   if(is_empty(input))\n    return false;\n   const char c=shift(input);\n   push(output,c);\n  }\n  else\n  {\n   const char c=shift(input);\n   push(output,c);\n  }\n }\n if(!match_l(input,_s33))\n  return false;\n shift(input);\n if(is_full(input))\n  return false;\n swap(x,output);\n return true;\n}\nbool parse_lit(str& x,const str& y)\n{\n clear(x);\n str input=y;\n str output;\n if(!match_l(input,_s37))\n  return false;\n shift(input);\n while(is_full(input))\n {\n  if(match_l(input,_s37))\n   break;\n  else if(match_l(input,_s21))\n  {\n   push(output,\'\\n\');\n   shift(input,2);\n  }\n  else if(match_l(input,_s22))\n  {\n   push(output,\'\\r\');\n   shift(input,2);\n  }\n  else if(match_l(input,_s23))\n  {\n   push(output,\'\\t\');\n   shift(input,2);\n  }\n  else if(match_l(input,_s35))\n  {\n   shift(input,2);\n   if(lt(input.len,2))\n    return false;\n   const str s=slice_l(input,2);\n   shift(input,2);\n   const int n=to_int(s);\n   check(between(n,0,255));\n   const char c=n;\n   push(output,c);\n  }\n  else if(match_l(input,_s36))\n  {\n   shift(input);\n   if(is_empty(input))\n    return false;\n   const char c=shift(input);\n   push(output,c);\n  }\n  else\n  {\n   const char c=shift(input);\n   push(output,c);\n  }\n }\n if(!match_l(input,_s37))\n  return false;\n shift(input);\n if(is_full(input))\n  return false;\n swap(x,output);\n return true;\n}\nstr path_base(const str& x)\n{\n const str s=to_c(x);\n const char* ptr=basename(s.ptr);\n check(neq(ptr,nullptr));\n return to_str(ptr);\n}\nstr path_concat(const str& x,const str& y)\n{\n const str s1=strip_r(x,_s12);\n const str s2=strip_l(y,_s12);\n return concat(s1,_s12,s2);\n}\nstr path_dir(const str& x)\n{\n const str s=to_c(x);\n const char* ptr=dirname(s.ptr);\n check(neq(ptr,nullptr));\n return to_str(ptr);\n}\nstr path_fix(const str& x)\n{\n check(is_full(x));\n const str s=strip_r(x,_s12);\n return concat(s,_s12);\n}\nstr path_real(const str& x)\n{\n const str s1=to_c(x);\n char s2[PATH_MAX]={};\n const char* ptr=realpath(s1.ptr,s2);\n check(neq(ptr,nullptr));\n return to_str(ptr);\n}\nvoid path_unlink(const str& x)\n{\n const str s=to_c(x);\n unlink(s.ptr);\n}\nbool pop(arr_bool& x)\n{\n const bool r=back(x);\n drop(x);\n return r;\n}\nchar pop(str& x)\n{\n const char r=back(x);\n drop(x);\n return r;\n}\nint pop(arr_int& x)\n{\n const int r=back(x);\n drop(x);\n return r;\n}\ndouble pop(arr_double& x)\n{\n const double r=back(x);\n drop(x);\n return r;\n}\nstr pop(arr_str& x)\n{\n const str r=back(x);\n drop(x);\n return r;\n}\nobj pop(arr_obj& x)\n{\n const obj r=back(x);\n drop(x);\n return r;\n}\nvar pop(arr& x)\n{\n const var r=back(x);\n drop(x);\n return r;\n}\nvoid pop(arr_bool& x,const int y)\n{\n drop(x,y);\n}\nvoid pop(str& x,const int y)\n{\n drop(x,y);\n}\nvoid pop(arr_int& x,const int y)\n{\n drop(x,y);\n}\nvoid pop(arr_double& x,const int y)\n{\n drop(x,y);\n}\nvoid pop(arr_str& x,const int y)\n{\n drop(x,y);\n}\nvoid pop(arr_obj& x,const int y)\n{\n drop(x,y);\n}\nvoid pop(arr& x,const int y)\n{\n drop(x,y);\n}\nvoid prepend(arr_bool& x,const arr_bool& y)\n{\n const arr_bool v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(str& x,const str& y)\n{\n const str v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(arr_int& x,const arr_int& y)\n{\n const arr_int v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(arr_double& x,const arr_double& y)\n{\n const arr_double v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(arr_str& x,const arr_str& y)\n{\n const arr_str v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(arr_obj& x,const arr_obj& y)\n{\n const arr_obj v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(arr& x,const arr& y)\n{\n const arr v=x;\n assign(x,y);\n append(x,v);\n}\nvoid prepend(arr_str& x,const arr& y)\n{\n arr_str a;\n append(a,y);\n prepend(x,a);\n}\nvoid print(const bool x)\n{\n dump(x);\n}\nvoid print(const char x)\n{\n dump(x);\n}\nvoid print(const int x)\n{\n dump(x);\n}\nvoid print(const double x)\n{\n dump(x);\n}\nvoid print(const void* x)\n{\n dump(x);\n}\nvoid print(const str& x)\n{\n echo(x);\n ln();\n}\nvoid push(arr_bool& x,const bool& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(str& x,const char& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(arr_int& x,const int& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(arr_double& x,const double& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(arr_str& x,const str& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(arr_obj& x,const obj& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(arr& x,const var& y)\n{\n const int n=inc(x.len);\n allocate(x,n);\n back(x,y);\n}\nvoid push(arr& x,const bool& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid push(arr& x,const char& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid push(arr& x,const int& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid push(arr& x,const double& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid push(arr& x,const str& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid push(arr& x,const arr& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid push(arr& x,const obj& y)\n{\n const var v=to_var(y);\n push(x,v);\n}\nvoid put(obj& x,const str& y,const arr_bool& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const bool& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n put(x,y,a);\n}\nvoid put(obj& x,const str& y,const arr_int& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const int& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n put(x,y,a);\n}\nvoid put(obj& x,const str& y,const arr_double& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const double& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n put(x,y,a);\n}\nvoid put(obj& x,const str& y,const arr_str& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const str& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n put(x,y,a);\n}\nvoid put(obj& x,const str& y,const arr_obj& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const obj& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n put(x,y,a);\n}\nvoid put(obj& x,const str& y,const bool& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const char& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const int& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const double& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const str& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const arr& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const obj& z)\n{\n const var v=to_var(z);\n put(x,y,v);\n}\nvoid put(obj& x,const str& y,const var& z)\n{\n check(!has(x,y));\n push(x.ks,y);\n push(x.vs,z);\n}\nstr read(const fd& x)\n{\n str r;\n while(true)\n {\n  const str s=read(x,1024);\n  if(is_empty(s))\n   break;\n  append(r,s);\n }\n return r;\n}\nstr read(const fd& x,const int y)\n{\n check(is_full(x));\n check(gte(y,0));\n str r;\n if(eq(y,0))\n  return r;\n allocate(r,y);\n const int n=read(x.n,r.ptr,r.len);\n check(gte(n,0));\n allocate(r,n);\n return r;\n}\narr_bool reject(const arr_bool& x,const bool& y)\n{\n arr_bool r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\nstr reject(const str& x,const char& y)\n{\n str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\narr_int reject(const arr_int& x,const int& y)\n{\n arr_int r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\narr_double reject(const arr_double& x,const double& y)\n{\n arr_double r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\narr_str reject(const arr_str& x,const str& y)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\narr_obj reject(const arr_obj& x,const obj& y)\n{\n arr_obj r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\narr reject(const arr& x,const var& y)\n{\n arr r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(neq(v,y))\n   push(r,v);\n }\n return r;\n}\nvoid remove(arr_bool& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nvoid remove(str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nvoid remove(arr_int& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nvoid remove(arr_double& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nvoid remove(arr_str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nvoid remove(arr_obj& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nvoid remove(arr& x,const int y)\n{\n check(between(y,0,x.len));\n const int n1=inc(y);\n const int n2=sub(x.len,n1);\n const int n3=dec(x.len);\n move(x,y,n1,n2);\n allocate(x,n3);\n}\nstr repeat(const str& x,const int y)\n{\n check(gte(y,0));\n str r;\n for(int i=0;lt(i,y);i++)\n {\n  append(r,x);\n }\n return r;\n}\nstr replace(const str& x,const str& y,const str& z)\n{\n const arr_str a=split(x,y);\n return join(a,z);\n}\narr_str scan(const str& x)\n{\n const arr_str a=delimit_891(x);\n return group_892(a);\n}\narr_str delimit_891(const str& x)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const char v=at(x,i);\n  str right;\n  push(right,v);\n  if(is_empty(r))\n  {\n   push(r,right);\n   continue;\n  }\n  const str left=back(r);\n  str fragment;\n  append(fragment,left);\n  append(fragment,right);\n  if(is_fragment(fragment))\n  {\n   drop(r);\n   push(r,fragment);\n  }\n  else\n   push(r,right);\n }\n return r;\n}\narr_str group_892(const arr_str& x)\n{\n arr_str r;\n arr_str a1=copy(x);\n while(is_full(a1))\n {\n  const arr_str a2=reduce_893(a1);\n  if(is_full(a2))\n  {\n   const str s=join(a2,_s38);\n   push(r,s);\n   shift(a1,a2.len);\n  }\n  else\n  {\n   const str s=shift(a1);\n   push(r,s);\n  }\n }\n return r;\n}\narr_str reduce_893(const arr_str& x)\n{\n check(is_full(x));\n arr_str r=copy(x);\n while(is_full(r))\n {\n  const str s=join(r,_s38);\n  if(is_token(s))\n   break;\n  drop(r);\n }\n return r;\n}\nvoid set(obj& x,const str& y,const arr_bool& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const bool& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n set(x,y,a);\n}\nvoid set(obj& x,const str& y,const arr_int& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const int& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n set(x,y,a);\n}\nvoid set(obj& x,const str& y,const arr_double& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const double& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n set(x,y,a);\n}\nvoid set(obj& x,const str& y,const arr_str& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const str& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n set(x,y,a);\n}\nvoid set(obj& x,const str& y,const arr_obj& z)\n{\n arr a;\n for(int i=0;lt(i,z.len);i++)\n {\n  const obj& v1=at(z,i);\n  const var v2=to_var(v1);\n  push(a,v2);\n }\n set(x,y,a);\n}\nvoid set(obj& x,const str& y,const bool& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const char& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const int& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const double& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const str& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const arr& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const obj& z)\n{\n const var v=to_var(z);\n set(x,y,v);\n}\nvoid set(obj& x,const str& y,const var& z)\n{\n bool done=false;\n for(int i=0;lt(i,x.ks.len);i++)\n {\n  const str& k=at(x.ks,i);\n  var& v=at(x.vs,i);\n  if(eq(k,y))\n  {\n   check(!done);\n   at(x.vs,i,z);\n   assign(done,true);\n   break;\n  }\n }\n if(!done)\n  put(x,y,z);\n}\nbool shift(arr_bool& x)\n{\n const bool r=front(x);\n shift(x,1);\n return r;\n}\nchar shift(str& x)\n{\n const char r=front(x);\n shift(x,1);\n return r;\n}\nint shift(arr_int& x)\n{\n const int r=front(x);\n shift(x,1);\n return r;\n}\ndouble shift(arr_double& x)\n{\n const double r=front(x);\n shift(x,1);\n return r;\n}\nstr shift(arr_str& x)\n{\n const str r=front(x);\n shift(x,1);\n return r;\n}\nobj shift(arr_obj& x)\n{\n const obj r=front(x);\n shift(x,1);\n return r;\n}\nvar shift(arr& x)\n{\n const var r=front(x);\n shift(x,1);\n return r;\n}\nvoid shift(arr_bool& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\nvoid shift(str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\nvoid shift(arr_int& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\nvoid shift(arr_double& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\nvoid shift(arr_str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\nvoid shift(arr_obj& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\nvoid shift(arr& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n move(x,0,y,n);\n allocate(x,n);\n}\narr_bool slice_l(const arr_bool& x,const int y)\n{\n check(between(y,0,x.len));\n arr_bool r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\nstr slice_l(const str& x,const int y)\n{\n check(between(y,0,x.len));\n str r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\narr_int slice_l(const arr_int& x,const int y)\n{\n check(between(y,0,x.len));\n arr_int r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\narr_double slice_l(const arr_double& x,const int y)\n{\n check(between(y,0,x.len));\n arr_double r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\narr_str slice_l(const arr_str& x,const int y)\n{\n check(between(y,0,x.len));\n arr_str r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\narr_obj slice_l(const arr_obj& x,const int y)\n{\n check(between(y,0,x.len));\n arr_obj r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\narr slice_l(const arr& x,const int y)\n{\n check(between(y,0,x.len));\n arr r;\n allocate(r,y);\n copy(r,0,x,0,y);\n return r;\n}\narr_bool slice_r(const arr_bool& x,const int y)\n{\n check(between(y,0,x.len));\n arr_bool r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\nstr slice_r(const str& x,const int y)\n{\n check(between(y,0,x.len));\n str r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\narr_int slice_r(const arr_int& x,const int y)\n{\n check(between(y,0,x.len));\n arr_int r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\narr_double slice_r(const arr_double& x,const int y)\n{\n check(between(y,0,x.len));\n arr_double r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\narr_str slice_r(const arr_str& x,const int y)\n{\n check(between(y,0,x.len));\n arr_str r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\narr_obj slice_r(const arr_obj& x,const int y)\n{\n check(between(y,0,x.len));\n arr_obj r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\narr slice_r(const arr& x,const int y)\n{\n check(between(y,0,x.len));\n arr r;\n allocate(r,y);\n const int n=sub(x.len,y);\n copy(r,0,x,n,y);\n return r;\n}\narr_bool slice(const arr_bool& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\nstr slice(const str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\narr_int slice(const arr_int& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\narr_double slice(const arr_double& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\narr_str slice(const arr_str& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\narr_obj slice(const arr_obj& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\narr slice(const arr& x,const int y)\n{\n check(between(y,0,x.len));\n const int n=sub(x.len,y);\n return slice(x,y,n);\n}\narr_bool slice(const arr_bool& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n arr_bool r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\nstr slice(const str& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n str r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\narr_int slice(const arr_int& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n arr_int r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\narr_double slice(const arr_double& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n arr_double r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\narr_str slice(const arr_str& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n arr_str r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\narr_obj slice(const arr_obj& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n arr_obj r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\narr slice(const arr& x,const int y,const int z)\n{\n check(between(y,0,x.len));\n check(between(z,0,x.len));\n const int n=add(y,z);\n check(lte(n,x.len));\n arr r;\n allocate(r,z);\n copy(r,0,x,y,z);\n return r;\n}\nvoid sort(arr_bool& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const bool& ptr1=*(bool*)x;\n  const bool& ptr2=*(bool*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(bool),compare);\n}\nvoid sort(str& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const char& ptr1=*(char*)x;\n  const char& ptr2=*(char*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(char),compare);\n}\nvoid sort(arr_int& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const int& ptr1=*(int*)x;\n  const int& ptr2=*(int*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(int),compare);\n}\nvoid sort(arr_double& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const double& ptr1=*(double*)x;\n  const double& ptr2=*(double*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(double),compare);\n}\nvoid sort(arr_str& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const str& ptr1=*(str*)x;\n  const str& ptr2=*(str*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(str),compare);\n}\nvoid sort(arr_obj& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const obj& ptr1=*(obj*)x;\n  const obj& ptr2=*(obj*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(obj),compare);\n}\nvoid sort(arr& x)\n{\n const auto compare=[](const void* x,const void* y)\n {\n  check(neq(x,nullptr));\n  check(neq(y,nullptr));\n  const var& ptr1=*(var*)x;\n  const var& ptr2=*(var*)y;\n  return cmp(ptr1,ptr2);\n };\n qsort(x.ptr,x.len,sizeof(var),compare);\n}\nvoid space()\n{\n echo(_s4);\n}\narr_str split(const str& x)\n{\n return split(x,_s26);\n}\narr_str split(const str& x,const str& y)\n{\n arr_str r;\n str s1=x;\n str s2;\n while(is_full(s1))\n {\n  if(match_l(s1,y))\n  {\n   shift(s1,y.len);\n   push(r,s2);\n   clear(s2);\n   continue;\n  }\n  const char c=shift(s1);\n  push(s2,c);\n }\n push(r,s2);\n return r;\n}\narr_str split(const arr_str& x,const str& y)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  const arr_str a=split(v,y);\n  append(r,a);\n }\n return r;\n}\nvoid stop()\n{\n try\n {\n  const arr a=backtrace_get();\n  const obj o=error_get();\n  dump(a);\n  dump(o);\n }\n catch(...)\n {\n  print(_s13);\n }\n throw 42;\n}\nstr strip_l(const str& x,const str& y)\n{\n if(!match_l(x,y))\n  return x;\n const int n=sub(x.len,y.len);\n return slice_r(x,n);\n}\nstr strip_r(const str& x,const str& y)\n{\n if(!match_r(x,y))\n  return x;\n const int n=sub(x.len,y.len);\n return slice_l(x,n);\n}\nchar sub(const char x,const char y)\n{\n return x-y;\n}\nint sub(const int x,const int y)\n{\n return x-y;\n}\ndouble sub(const double x,const double y)\n{\n return x-y;\n}\nchar sub(const char x,const int y)\n{\n return x-y;\n}\ndouble sub(const double x,const int y)\n{\n return x-y;\n}\nvoid swap(void*& x,void*& y)\n{\n void* v=x;\n x=y;\n y=v;\n}\nvoid swap(bool*& x,bool*& y)\n{\n bool* v=x;\n x=y;\n y=v;\n}\nvoid swap(char*& x,char*& y)\n{\n char* v=x;\n x=y;\n y=v;\n}\nvoid swap(int*& x,int*& y)\n{\n int* v=x;\n x=y;\n y=v;\n}\nvoid swap(double*& x,double*& y)\n{\n double* v=x;\n x=y;\n y=v;\n}\nvoid swap(arr_bool*& x,arr_bool*& y)\n{\n arr_bool* v=x;\n x=y;\n y=v;\n}\nvoid swap(str*& x,str*& y)\n{\n str* v=x;\n x=y;\n y=v;\n}\nvoid swap(arr_int*& x,arr_int*& y)\n{\n arr_int* v=x;\n x=y;\n y=v;\n}\nvoid swap(arr_double*& x,arr_double*& y)\n{\n arr_double* v=x;\n x=y;\n y=v;\n}\nvoid swap(arr_str*& x,arr_str*& y)\n{\n arr_str* v=x;\n x=y;\n y=v;\n}\nvoid swap(arr_obj*& x,arr_obj*& y)\n{\n arr_obj* v=x;\n x=y;\n y=v;\n}\nvoid swap(arr*& x,arr*& y)\n{\n arr* v=x;\n x=y;\n y=v;\n}\nvoid swap(obj*& x,obj*& y)\n{\n obj* v=x;\n x=y;\n y=v;\n}\nvoid swap(var*& x,var*& y)\n{\n var* v=x;\n x=y;\n y=v;\n}\nvoid swap(fd*& x,fd*& y)\n{\n fd* v=x;\n x=y;\n y=v;\n}\nvoid swap(bool& x,bool& y)\n{\n bool v=x;\n x=y;\n y=v;\n}\nvoid swap(char& x,char& y)\n{\n char v=x;\n x=y;\n y=v;\n}\nvoid swap(int& x,int& y)\n{\n int v=x;\n x=y;\n y=v;\n}\nvoid swap(double& x,double& y)\n{\n double v=x;\n x=y;\n y=v;\n}\nvoid swap(arr_bool& x,arr_bool& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(str& x,str& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(arr_int& x,arr_int& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(arr_double& x,arr_double& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(arr_str& x,arr_str& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(arr_obj& x,arr_obj& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(arr& x,arr& y)\n{\n swap(x.ptr,y.ptr);\n swap(x.len,y.len);\n}\nvoid swap(obj& x,obj& y)\n{\n swap(x.ks,y.ks);\n swap(x.vs,y.vs);\n}\nvoid swap(var& x,var& y)\n{\n swap((char&)x.t,(char&)y.t);\n for(int i=0;lt(i,sizeof(x.b));i++)\n {\n  swap(x.b[i],y.b[i]);\n }\n}\narr_bool tail(const arr_bool& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\nstr tail(const str& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\narr_int tail(const arr_int& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\narr_double tail(const arr_double& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\narr_str tail(const arr_str& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\narr_obj tail(const arr_obj& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\narr tail(const arr& x,const int y)\n{\n check(gte(y,0));\n if(gte(y,x.len))\n  return x;\n return slice_r(x,y);\n}\ndouble time_get()\n{\n timespec data;\n const int n=clock_gettime(CLOCK_REALTIME,&data);\n check(eq(n,0));\n const double billion=1e9;\n const double nano1=data.tv_nsec;\n const double nano2=div_(nano1,billion);\n const double second=data.tv_sec;\n return add(second,nano2);\n}\ndouble time_now()\n{\n const double n=time_get();\n return sub(n,start);\n}\narr_str to_arr(const str& x)\n{\n arr_str r;\n push(r,x);\n return r;\n}\narr_str to_arr(const str& x,const str& y)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n push(r,c);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n push(r,c);\n push(r,d);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n push(r,c);\n push(r,d);\n push(r,e);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n push(r,c);\n push(r,d);\n push(r,e);\n push(r,f);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n push(r,c);\n push(r,d);\n push(r,e);\n push(r,f);\n push(r,g);\n return r;\n}\narr_str to_arr(const str& x,const str& y,const str& z,const str& a,const str& b,const str& c,const str& d,const str& e,const str& f,const str& g,const str& h)\n{\n arr_str r;\n push(r,x);\n push(r,y);\n push(r,z);\n push(r,a);\n push(r,b);\n push(r,c);\n push(r,d);\n push(r,e);\n push(r,f);\n push(r,g);\n push(r,h);\n return r;\n}\nstr to_c(const str& x)\n{\n str r=x;\n push(r,0);\n return r;\n}\nstr to_dump(const bool x)\n{\n return to_lit(x);\n}\nstr to_dump(const char x)\n{\n return to_lit(x);\n}\nstr to_dump(const int x)\n{\n return to_lit(x);\n}\nstr to_dump(const double x)\n{\n return to_lit(x);\n}\nstr to_dump(const void* x)\n{\n return to_lit(x);\n}\nstr to_dump(const fd& x)\n{\n stop();\n return {};\n}\nstr to_dump(const arr_bool& x)\n{\n if(is_empty(x))\n  return _s39;\n if(is_single(x))\n {\n  const bool& v=front(x);\n  const str s=to_dump(v);\n  const int n=count_line(s);\n  if(eq(n,1))\n   return concat(_s40,s,_s41);\n }\n arr_str a1;\n push(a1,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v1=at(x,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   const str s2=to_str(i);\n   str s3;\n   append(s3,_s4);\n   append(s3,_s42);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s41);\n return join(a1);\n}\nstr to_dump(const arr_int& x)\n{\n if(is_empty(x))\n  return _s39;\n if(is_single(x))\n {\n  const int& v=front(x);\n  const str s=to_dump(v);\n  const int n=count_line(s);\n  if(eq(n,1))\n   return concat(_s40,s,_s41);\n }\n arr_str a1;\n push(a1,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v1=at(x,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   const str s2=to_str(i);\n   str s3;\n   append(s3,_s4);\n   append(s3,_s42);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s41);\n return join(a1);\n}\nstr to_dump(const arr_double& x)\n{\n if(is_empty(x))\n  return _s39;\n if(is_single(x))\n {\n  const double& v=front(x);\n  const str s=to_dump(v);\n  const int n=count_line(s);\n  if(eq(n,1))\n   return concat(_s40,s,_s41);\n }\n arr_str a1;\n push(a1,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v1=at(x,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   const str s2=to_str(i);\n   str s3;\n   append(s3,_s4);\n   append(s3,_s42);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s41);\n return join(a1);\n}\nstr to_dump(const arr_str& x)\n{\n if(is_empty(x))\n  return _s39;\n if(is_single(x))\n {\n  const str& v=front(x);\n  const str s=to_dump(v);\n  const int n=count_line(s);\n  if(eq(n,1))\n   return concat(_s40,s,_s41);\n }\n arr_str a1;\n push(a1,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v1=at(x,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   const str s2=to_str(i);\n   str s3;\n   append(s3,_s4);\n   append(s3,_s42);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s41);\n return join(a1);\n}\nstr to_dump(const arr_obj& x)\n{\n if(is_empty(x))\n  return _s39;\n if(is_single(x))\n {\n  const obj& v=front(x);\n  const str s=to_dump(v);\n  const int n=count_line(s);\n  if(eq(n,1))\n   return concat(_s40,s,_s41);\n }\n arr_str a1;\n push(a1,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v1=at(x,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   const str s2=to_str(i);\n   str s3;\n   append(s3,_s4);\n   append(s3,_s42);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s41);\n return join(a1);\n}\nstr to_dump(const arr& x)\n{\n if(is_empty(x))\n  return _s39;\n if(is_single(x))\n {\n  const var& v=front(x);\n  const str s=to_dump(v);\n  const int n=count_line(s);\n  if(eq(n,1))\n   return concat(_s40,s,_s41);\n }\n arr_str a1;\n push(a1,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v1=at(x,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   const str s2=to_str(i);\n   str s3;\n   append(s3,_s4);\n   append(s3,_s42);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s41);\n return join(a1);\n}\nstr to_dump(const str& x)\n{\n return to_lit(x);\n}\nstr to_dump(const var& x)\n{\n if(is_bool(x))\n {\n  const bool v=at_bool(x);\n  return to_dump(v);\n }\n if(is_char(x))\n {\n  const char v=at_char(x);\n  return to_dump(v);\n }\n if(is_int(x))\n {\n  const int v=at_int(x);\n  return to_dump(v);\n }\n if(is_double(x))\n {\n  const double v=at_double(x);\n  return to_dump(v);\n }\n if(is_str(x))\n {\n  const str& v=at_str(x);\n  return to_dump(v);\n }\n if(is_arr(x))\n {\n  const arr& v=at_arr(x);\n  return to_dump(v);\n }\n if(is_obj(x))\n {\n  const obj& v=at_obj(x);\n  return to_dump(v);\n }\n stop();\n return {};\n}\nstr to_dump(const obj& x)\n{\n if(is_empty(x))\n  return _s43;\n if(is_single(x))\n {\n  const str& k=front(x.ks);\n  const var& v=front(x.vs);\n  const str s1=to_dump(v);\n  const int n=count_line(s1);\n  if(eq(n,1))\n  {\n   str s2;\n   if(is_key(k))\n    assign(s2,k);\n   else\n   {\n    const str s3=to_lit(k);\n    assign(s2,s3);\n   }\n   return concat(_s44,s2,_s8,s1,_s45);\n  }\n }\n arr_str a1;\n push(a1,_s44);\n for(int i=0;lt(i,x.ks.len);i++)\n {\n  const str& k=at(x.ks,i);\n  const var& v1=at(x.vs,i);\n  const str s1=to_dump(v1);\n  const arr_str a2=split(s1);\n  str s2;\n  if(is_key(k))\n   assign(s2,k);\n  else\n  {\n   const str s3=to_lit(k);\n   assign(s2,s3);\n  }\n  if(is_single(a2))\n  {\n   str s3;\n   append(s3,_s4);\n   append(s3,s2);\n   append(s3,_s4);\n   append(s3,s1);\n   push(a1,s3);\n   continue;\n  }\n  const str s3=concat(_s4,s2);\n  push(a1,s3);\n  for(int j=0;lt(j,a2.len);j++)\n  {\n   const str& v2=at(a2,j);\n   str s3;\n   append(s3,_s4);\n   append(s3,v2);\n   push(a1,s3);\n  }\n }\n push(a1,_s45);\n return join(a1);\n}\nint to_int(const str& x)\n{\n int r=0;\n const bool b=parse_int(r,x);\n check(b);\n return r;\n}\nstr to_lit(const bool x)\n{\n return to_str(x);\n}\nstr to_lit(const int x)\n{\n return to_str(x);\n}\nstr to_lit(const double x)\n{\n return to_str(x);\n}\nstr to_lit(const void* x)\n{\n return to_str(x);\n}\nstr to_lit(const fd& x)\n{\n stop();\n return {};\n}\nstr to_lit(const char x)\n{\n str r;\n const str s=escape(x);\n append(r,_s33);\n append(r,s);\n append(r,_s33);\n return r;\n}\nstr to_lit(const arr_bool& x)\n{\n str r;\n append(r,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  const str s=to_lit(v);\n  append(r,s);\n  if(!is_last(x,i))\n   append(r,_s4);\n }\n append(r,_s41);\n return r;\n}\nstr to_lit(const arr_int& x)\n{\n str r;\n append(r,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  const str s=to_lit(v);\n  append(r,s);\n  if(!is_last(x,i))\n   append(r,_s4);\n }\n append(r,_s41);\n return r;\n}\nstr to_lit(const arr_double& x)\n{\n str r;\n append(r,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  const str s=to_lit(v);\n  append(r,s);\n  if(!is_last(x,i))\n   append(r,_s4);\n }\n append(r,_s41);\n return r;\n}\nstr to_lit(const arr_str& x)\n{\n str r;\n append(r,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  const str s=to_lit(v);\n  append(r,s);\n  if(!is_last(x,i))\n   append(r,_s4);\n }\n append(r,_s41);\n return r;\n}\nstr to_lit(const arr_obj& x)\n{\n str r;\n append(r,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  const str s=to_lit(v);\n  append(r,s);\n  if(!is_last(x,i))\n   append(r,_s4);\n }\n append(r,_s41);\n return r;\n}\nstr to_lit(const arr& x)\n{\n str r;\n append(r,_s40);\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  const str s=to_lit(v);\n  append(r,s);\n  if(!is_last(x,i))\n   append(r,_s4);\n }\n append(r,_s41);\n return r;\n}\nstr to_lit(const str& x)\n{\n str r;\n push(r,\'\"\');\n for(int i=0;lt(i,x.len);i++)\n {\n  const char c=at(x,i);\n  const str s=escape(c);\n  append(r,s);\n }\n push(r,\'\"\');\n return r;\n}\nstr to_lit(const var& x)\n{\n if(is_bool(x))\n {\n  const bool v=at_bool(x);\n  return to_lit(v);\n }\n if(is_char(x))\n {\n  const char v=at_char(x);\n  return to_lit(v);\n }\n if(is_int(x))\n {\n  const int v=at_int(x);\n  return to_lit(v);\n }\n if(is_double(x))\n {\n  const double v=at_double(x);\n  return to_lit(v);\n }\n if(is_str(x))\n {\n  const str& v=at_str(x);\n  return to_lit(v);\n }\n if(is_arr(x))\n {\n  const arr& v=at_arr(x);\n  return to_lit(v);\n }\n if(is_obj(x))\n {\n  const obj& v=at_obj(x);\n  return to_lit(v);\n }\n stop();\n return {};\n}\nstr to_lit(const obj& x)\n{\n str r;\n append(r,_s44);\n for(int i=0;lt(i,x.ks.len);i++)\n {\n  const str& k=at(x.ks,i);\n  const var& v=at(x.vs,i);\n  const str s1=to_lit(v);\n  str s2;\n  if(is_key(k))\n   assign(s2,k);\n  else\n  {\n   const str s3=to_lit(k);\n   assign(s2,s3);\n  }\n  append(r,s2);\n  append(r,_s8);\n  append(r,s1);\n  if(!is_last(x.ks,i))\n   append(r,_s4);\n }\n append(r,_s45);\n return r;\n}\nstr to_str(const bool x)\n{\n if(x)\n  return _s46;\n return _s47;\n}\nstr to_str(const char x)\n{\n str r;\n push(r,x);\n return r;\n}\nstr to_str(const int x)\n{\n const int n1=64;\n char s1[n1]={};\n const str s2=to_c(_s48);\n const int n2=snprintf(s1,n1,s2.ptr,x);\n check(gte(n2,0));\n return to_str(s1);\n}\nstr to_str(const double x)\n{\n return to_str(x,2);\n}\nstr to_str(const double x,const int y)\n{\n check(gte(y,0));\n const int n1=64;\n char s1[n1]={};\n const str s2=to_c(_s49);\n const int n2=snprintf(s1,n1,s2.ptr,x);\n check(gte(n2,0));\n const str s3=to_str(s1);\n const arr_str a=split(s3,_s14);\n const str& s4=front(a);\n const str& s5=at(a,1);\n str s6=slice_r(s5,y);\n while(is_full(s6))\n {\n  const char c=back(s6);\n  if(neq(c,\'0\'))\n   break;\n  drop(s6);\n }\n if(is_empty(s6))\n  return s4;\n if(eq(y,0))\n  return s4;\n return concat(s4,_s14,s6);\n}\nstr to_str(const void* x)\n{\n const int n1=64;\n char s1[n1]={};\n const str s2=to_c(_s50);\n const int n2=snprintf(s1,n1,s2.ptr,x);\n check(gte(n2,0));\n return to_str(s1);\n}\nstr to_str(const char* x)\n{\n check(neq(x,nullptr));\n str r;\n const int n=strlen(x);\n allocate(r,n);\n memcpy(r.ptr,x,n);\n return r;\n}\nstr to_str(const arr_bool& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.len);i++)\n {\n  const bool& v=at(x,i);\n  const str s1=to_str(i);\n  const str s2=to_lit(v);\n  str s3;\n  append(s3,_s42);\n  append(s3,s1);\n  append(s3,_s4);\n  append(s3,s2);\n  push(a,s3);\n }\n return join(a);\n}\nstr to_str(const arr_int& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.len);i++)\n {\n  const int& v=at(x,i);\n  const str s1=to_str(i);\n  const str s2=to_lit(v);\n  str s3;\n  append(s3,_s42);\n  append(s3,s1);\n  append(s3,_s4);\n  append(s3,s2);\n  push(a,s3);\n }\n return join(a);\n}\nstr to_str(const arr_double& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.len);i++)\n {\n  const double& v=at(x,i);\n  const str s1=to_str(i);\n  const str s2=to_lit(v);\n  str s3;\n  append(s3,_s42);\n  append(s3,s1);\n  append(s3,_s4);\n  append(s3,s2);\n  push(a,s3);\n }\n return join(a);\n}\nstr to_str(const arr_str& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  const str s1=to_str(i);\n  const str s2=to_lit(v);\n  str s3;\n  append(s3,_s42);\n  append(s3,s1);\n  append(s3,_s4);\n  append(s3,s2);\n  push(a,s3);\n }\n return join(a);\n}\nstr to_str(const arr_obj& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.len);i++)\n {\n  const obj& v=at(x,i);\n  const str s1=to_str(i);\n  const str s2=to_lit(v);\n  str s3;\n  append(s3,_s42);\n  append(s3,s1);\n  append(s3,_s4);\n  append(s3,s2);\n  push(a,s3);\n }\n return join(a);\n}\nstr to_str(const arr& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  const str s1=to_str(i);\n  const str s2=to_lit(v);\n  str s3;\n  append(s3,_s42);\n  append(s3,s1);\n  append(s3,_s4);\n  append(s3,s2);\n  push(a,s3);\n }\n return join(a);\n}\nstr to_str(const str& x)\n{\n return x;\n}\nstr to_str(const var& x)\n{\n if(is_bool(x))\n {\n  const bool v=at_bool(x);\n  return to_str(v);\n }\n else if(is_char(x))\n {\n  const char v=at_char(x);\n  return to_str(v);\n }\n else if(is_int(x))\n {\n  const int v=at_int(x);\n  return to_str(v);\n }\n else if(is_double(x))\n {\n  const int v=at_double(x);\n  return to_str(v);\n }\n else if(is_str(x))\n  return at_str(x);\n else if(is_arr(x))\n {\n  const arr& v=at_arr(x);\n  return to_str(v);\n }\n else if(is_obj(x))\n {\n  const obj& v=at_obj(x);\n  return to_str(v);\n }\n else\n  stop();\n return {};\n}\nstr to_str(const obj& x)\n{\n arr_str a;\n for(int i=0;lt(i,x.ks.len);i++)\n {\n  const str& k=at(x.ks,i);\n  const var& v=at(x.vs,i);\n  const str s1=to_lit(v);\n  str s2;\n  append(s2,k);\n  append(s2,_s4);\n  append(s2,s1);\n  push(a,s2);\n }\n return join(a);\n}\nvar to_var(const bool x)\n{\n var r;\n r.t=type::_bool;\n bool& v=at_bool(r);\n assign(v,x);\n return r;\n}\nvar to_var(const char x)\n{\n var r;\n r.t=type::_char;\n char& v=at_char(r);\n assign(v,x);\n return r;\n}\nvar to_var(const int x)\n{\n var r;\n r.t=type::_int;\n int& v=at_int(r);\n assign(v,x);\n return r;\n}\nvar to_var(const double x)\n{\n var r;\n r.t=type::_double;\n double& v=at_double(r);\n assign(v,x);\n return r;\n}\nvar to_var(const str& x)\n{\n var r;\n r.t=type::_str;\n str& v=at_str(r);\n str* ptr=&v;\n new (ptr) str;\n assign(v,x);\n return r;\n}\nvar to_var(const arr& x)\n{\n var r;\n r.t=type::_arr;\n arr& v=at_arr(r);\n arr* ptr=&v;\n new (ptr) arr;\n assign(v,x);\n return r;\n}\nvar to_var(const obj& x)\n{\n var r;\n r.t=type::_obj;\n obj& v=at_obj(r);\n obj* ptr=&v;\n new (ptr) obj;\n assign(v,x);\n return r;\n}\nstr trim_l(const str& x)\n{\n str r=x;\n while(is_full(r))\n {\n  const char c=front(r);\n  if(is_blank(c))\n   shift(r);\n  else\n   break;\n }\n return r;\n}\nstr trim_r(const str& x)\n{\n str r=x;\n while(is_full(r))\n {\n  const char c=back(r);\n  if(is_blank(c))\n   pop(r);\n  else\n   break;\n }\n return r;\n}\nstr trim(const str& x)\n{\n const str s=trim_r(x);\n return trim_l(s);\n}\nstr unindent(const str& x)\n{\n const str r=trim_r(x);\n if(is_empty(r))\n  return r;\n const char c=front(r);\n if(eq(c,\' \'))\n  return slice(r,1);\n return r;\n}\nvoid unshift(arr_bool& x,const bool& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(str& x,const char& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(arr_int& x,const int& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(arr_double& x,const double& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(arr_str& x,const str& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(arr_obj& x,const obj& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(arr& x,const var& y)\n{\n const int n1=x.len;\n const int n2=inc(n1);\n allocate(x,n2);\n move(x,1,0,n1);\n front(x,y);\n}\nvoid unshift(arr& x,const bool& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid unshift(arr& x,const char& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid unshift(arr& x,const int& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid unshift(arr& x,const double& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid unshift(arr& x,const str& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid unshift(arr& x,const arr& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid unshift(arr& x,const obj& y)\n{\n const var v=to_var(y);\n unshift(x,v);\n}\nvoid write(const fd& x,const str& y)\n{\n check(is_full(x));\n if(is_empty(y))\n  return;\n const int n=write(x.n,y.ptr,y.len);\n check(eq(n,y.len));\n}\narr_str cpl_code(const arr& x)\n{\n const arr_str a=inline_code_894(x);\n return replace_lit_895(a);\n}\narr_str inline_code_894(const arr& x)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n   continue;\n  if(is_struct(v))\n   continue;\n  if(is_inline(v))\n  {\n   const obj& o=at_obj(v);\n   const arr& body=get_arr(o,_s51);\n   for(int j=0;lt(j,body.len);j++)\n   {\n    const var& v=at(body,j);\n    const str& s1=at_str(v);\n    const str s2=unindent(s1);\n    push(r,s2);\n   }\n   continue;\n  }\n  const obj& o=at_obj(v);\n  const str& signature=get_str(o,_s52);\n  const arr& body=get_arr(o,_s51);\n  push(r,signature);\n  append(r,body);\n }\n return r;\n}\narr_str replace_lit_895(const arr_str& x)\n{\n arr_str r;\n arr_str strings;\n arr_str lines;\n for(int i=0;lt(i,x.len);i++)\n {\n  const str& v=at(x,i);\n  const arr_str inputs=scan(v);\n  arr_str outputs;\n  for(int j=0;lt(j,inputs.len);j++)\n  {\n   const str& v=at(inputs,j);\n   if(is_lit(v))\n   {\n    int n=find(strings,v);\n    if(lt(n,0))\n    {\n     assign(n,strings.len);\n     push(strings,v);\n    }\n    str key=_s53;\n    const str s=to_str(n);\n    append(key,s);\n    push(outputs,key);\n   }\n   else\n    push(outputs,v);\n  }\n  const str line=join(outputs,_s38);\n  push(lines,line);\n }\n for(int i=0;lt(i,strings.len);i++)\n {\n  const str& v=at(strings,i);\n  str key=_s53;\n  const str s1=to_str(i);\n  append(key,s1);\n  const str s2=concat(_s54,key,_s55,v,_s56);\n  push(r,s2);\n }\n append(r,lines);\n return r;\n}\nint cpl_count_tpl(const arr& x)\n{\n int r=0;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n   continue;\n  const obj& o=at_obj(v);\n  const arr& signatures=get_arr(o,_s57);\n  for(int j=0;lt(j,signatures.len);j++)\n  {\n   const var& v=at(signatures,j);\n   const str& s=at_str(v);\n   if(is_tpl(s))\n    r=inc(r);\n  }\n }\n return r;\n}\narr cpl_deduplicate(const arr& x)\n{\n arr r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n  {\n   push(r,v);\n   continue;\n  }\n  if(is_inline(v))\n  {\n   push(r,v);\n   continue;\n  }\n  const obj& o=at_obj(v);\n  const str signature=get_str(o,_s52);\n  if(defined_896(r,signature))\n  {\n   echo(_s58);\n   space();\n   dump(signature);\n   const arr a=discard_897(r,signature);\n   clear(r);\n   append(r,a);\n  }\n  push(r,v);\n }\n return r;\n}\nbool defined_896(const arr& x,const str& y)\n{\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n   continue;\n  const obj& o=at_obj(v);\n  const str& s=get_str(o,_s52);\n  if(eq(s,y))\n   return true;\n }\n return false;\n}\narr discard_897(const arr& x,const str& y)\n{\n arr r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n  {\n   push(r,v);\n   continue;\n  }\n  const obj& o=at_obj(v);\n  const str& s=get_str(o,_s52);\n  if(eq(s,y))\n  {\n  }\n  else\n   push(r,v);\n }\n return r;\n}\narr cpl_flatten(const arr& x)\n{\n arr r;\n int id=x.len;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n  {\n   push(r,v);\n   continue;\n  }\n  const obj& o1=at_obj(v);\n  obj o2=parse_898(o1,id);\n  obj caller=get_obj(o2,_s59);\n  arr callees=get_arr(o2,_s60);\n  if(is_empty(callees))\n  {\n   push(r,caller);\n   continue;\n  }\n  const arr body=get_arr(caller,_s51);\n  const arr a1=instantiate_899(body,callees);\n  set(caller,_s51,a1);\n  for(int i=0;lt(i,callees.len);i++)\n  {\n   var& v=at(callees,i);\n   obj& o3=at_obj(v);\n   const arr body=get_arr(o3,_s51);\n   const arr a1=instantiate_899(body,callees);\n   set(o3,_s51,a1);\n  }\n  const obj o3=lift_900(caller);\n  push(r,o3);\n  for(int i=0;lt(i,callees.len);i++)\n  {\n   const var& v=at(callees,i);\n   const obj& o1=at_obj(v);\n   const obj o2=lift_900(o1);\n   push(r,o2);\n  }\n }\n return r;\n}\nobj parse_898(const obj& x,int& y)\n{\n const arr& a1=get_arr(x,_s51);\n arr a2=copy(a1);\n obj caller;\n arr callees;\n const str signature=get_str(x,_s52);\n arr body;\n put(caller,_s52,signature);\n while(is_full(a2))\n {\n  const var& v1=shift(a2);\n  const str& s1=at_str(v1);\n  const arr_str a3=split(s1,_s4);\n  arr_str a4=reject(a3,_s38);\n  const str fn=shift(a4);\n  if(neq(fn,_s9))\n  {\n   push(body,s1);\n   continue;\n  }\n  const str s2=join(a4,_s4);\n  arr_str a5;\n  for(int i=0;lt(i,a4.len);i++)\n  {\n   const str& s=at(a4,i);\n   const arr_str a=split(s,_s0);\n   append(a5,a);\n  }\n  shift(a5);\n  const str local=shift(a5);\n  const str s3=to_str(y);\n  const str global=concat(local,_s61,s3);\n  const int n=inc(y);\n  assign(y,n);\n  const str signature=replace(s2,local,global);\n  arr body2;\n  const var v2=shift(a2);\n  const str& s4=at_str(v2);\n  check(eq(s4,_s62));\n  push(body2,_s44);\n  while(is_full(a2))\n  {\n   const var v3=shift(a2);\n   const str& s1=at_str(v3);\n   const int n=get_indent(s1);\n   if(eq(n,1))\n   {\n    check(eq(s1,_s63));\n    push(body2,_s45);\n    break;\n   }\n   const str s2=unindent(s1);\n   push(body2,s2);\n  }\n  obj o;\n  put(o,_s64,global);\n  put(o,_s65,local);\n  put(o,_s52,signature);\n  put(o,_s51,body2);\n  push(callees,o);\n }\n put(caller,_s51,body);\n obj r;\n put(r,_s59,caller);\n put(r,_s60,callees);\n return r;\n}\narr instantiate_899(const arr& x,const arr& y)\n{\n arr r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  str s1=at_str(v);\n  for(int i=0;lt(i,y.len);i++)\n  {\n   const var& v=at(y,i);\n   const obj& o=at_obj(v);\n   const str& local=get_str(o,_s65);\n   const str& global=get_str(o,_s64);\n   const str s2=replace(s1,local,global);\n   assign(s1,s2);\n  }\n  push(r,s1);\n }\n return r;\n}\nobj lift_900(const obj& x)\n{\n obj r;\n const str signature=get_str(x,_s52);\n const arr body=get_arr(x,_s51);\n put(r,_s52,signature);\n put(r,_s51,body);\n return r;\n}\narr_str cpl_forward(const arr& x)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n   continue;\n  const obj& o=at_obj(v);\n  const str& signature=get_str(o,_s52);\n  if(is_struct(signature))\n  {\n   const str s=concat(signature,_s66);\n   push(r,s);\n  }\n }\n return r;\n}\narr cpl_implement(const arr& x)\n{\n arr r;\n arr a1;\n arr a2;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_impl_905(v))\n  {\n   push(a1,v);\n   continue;\n  }\n  push(a2,v);\n }\n const obj impls=parse_901(a1);\n for(int i=0;lt(i,a2.len);i++)\n {\n  const var& v=at(a2,i);\n  if(is_str(v))\n  {\n   push(r,v);\n   continue;\n  }\n  const obj& o=at_obj(v);\n  const arr a=generate_902(o,impls);\n  append(r,a);\n }\n return r;\n}\nobj parse_901(const arr& x)\n{\n obj r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v1=at(x,i);\n  const obj& o1=at_obj(v1);\n  const arr& signatures=get_arr(o1,_s57);\n  check(is_single(signatures));\n  const arr& body=get_arr(o1,_s51);\n  const var& v2=front(signatures);\n  const str& s1=at_str(v2);\n  arr_str a=split(s1,_s4);\n  const str s2=shift(a);\n  check(eq(s2,_s67));\n  const str name=shift(a);\n  check(is_empty(a));\n  obj values;\n  for(int i=0;lt(i,body.len);i++)\n  {\n   const var& v=at(body,i);\n   const str& s1=at_str(v);\n   const str s2=trim(s1);\n   arr_str a=split(s2,_s4);\n   str key=shift(a);\n   put(values,key,a);\n  }\n  if(has(r,name))\n  {\n   obj& o=get_obj(r,name);\n   for(int i=0;lt(i,values.ks.len);i++)\n   {\n    const str& k=at(values.ks,i);\n    const var& v=at(values.vs,i);\n    const arr& a=at_arr(v);\n    if(has(o,k))\n    {\n     var& v2=get(o,k);\n     arr& a2=at_arr(v2);\n     append(a2,a);\n    }\n    else\n     put(o,k,v);\n   }\n  }\n  else\n   put(r,name,values);\n }\n return r;\n}\narr generate_902(const obj& x,const obj& y)\n{\n arr r;\n const arr& signatures=get_arr(x,_s57);\n for(int i=0;lt(i,signatures.len);i++)\n {\n  const var& v=at(signatures,i);\n  const var& body=get(x,_s51);\n  obj o;\n  put(o,_s52,v);\n  put(o,_s51,body);\n  const str& s=at_str(v);\n  if(is_tpl(s))\n  {\n   const arr a=implement_903(o,y);\n   append(r,a);\n   continue;\n  }\n  push(r,o);\n }\n return r;\n}\narr implement_903(const obj& x,const obj& y)\n{\n arr r;\n const str& signature=get_str(x,_s52);\n arr_str a=split(signature,_s4);\n const str tpl=shift(a);\n const str name=shift(a);\n const str s1=join(a,_s4);\n const obj& values=get_obj(y,name);\n for(int i=0;lt(i,values.ks.len);i++)\n {\n  const str& k=at(values.ks,i);\n  const var& v1=at(values.vs,i);\n  arr pairs=at_arr(v1);\n  unshift(pairs,k);\n  const str signature=substitute_904(s1,pairs);\n  const arr& a=get_arr(x,_s51);\n  arr body;\n  for(int i=0;lt(i,a.len);i++)\n  {\n   const var& v1=at(a,i);\n   const str& s1=at_str(v1);\n   const str s2=substitute_904(s1,pairs);\n   const var v2=to_var(s2);\n   push(body,v2);\n  }\n  obj o;\n  put(o,_s52,signature);\n  put(o,_s51,body);\n  push(r,o);\n }\n return r;\n}\nstr substitute_904(const str& x,const arr& y)\n{\n str r=x;\n for(int i=0;lt(i,y.len);i++)\n {\n  const var& v=at(y,i);\n  const str& s1=at_str(v);\n  const char c1=\'T\';\n  const char c2=add(c1,i);\n  str s2;\n  push(s2,c2);\n  const str s3=replace(r,s2,s1);\n  assign(r,s3);\n }\n return r;\n}\nbool is_impl_905(const var& x)\n{\n if(!is_obj(x))\n  return false;\n const obj& o=at_obj(x);\n const arr& signatures=get_arr(o,_s57);\n if(is_many(signatures))\n  return false;\n const var& v=front(signatures);\n const str& s=at_str(v);\n arr_str a=split(s,_s4);\n const str impl=shift(a);\n if(neq(impl,_s67))\n  return false;\n if(is_empty(a))\n  return false;\n const str name=shift(a);\n return is_empty(a);\n}\narr_str cpl_import(const str& x)\n{\n arr_str r;\n const arr_str a=dir_read(x);\n for(int i=0;lt(i,a.len);i++)\n {\n  const str& v=at(a,i);\n  if(is_dir(v))\n  {\n   const arr_str a=cpl_import(v);\n   append(r,a);\n  }\n  else\n   push(r,v);\n }\n return r;\n}\narr_str cpl_include(const arr& x)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n  {\n   const str& s=at_str(v);\n   push(r,s);\n  }\n }\n return r;\n}\narr cpl_parse(const str& x)\n{\n const arr a=preprocess_906(x);\n return agglomerate_907(a);\n}\narr preprocess_906(const str& x)\n{\n arr r;\n const arr_str a=split(x);\n for(int i=0;lt(i,a.len);i++)\n {\n  const str& v1=at(a,i);\n  const str s1=trim_r(v1);\n  if(is_empty(s1))\n   continue;\n  const str s2=trim(s1);\n  if(match_l(s2,_s25))\n   continue;\n  const var v2=to_var(s1);\n  push(r,v2);\n }\n return r;\n}\narr agglomerate_907(const arr& x)\n{\n arr r;\n arr a=x;\n while(is_full(a))\n {\n  const var v1=shift(a);\n  const str& s1=at_str(v1);\n  const int n1=get_indent(s1);\n  if(neq(n1,0))\n  {\n   push(r,v1);\n   continue;\n  }\n  if(match_l(s1,_s42))\n  {\n   push(r,v1);\n   continue;\n  }\n  arr signatures;\n  push(signatures,v1);\n  while(is_full(a))\n  {\n   const var v=front(a);\n   const str& s=at_str(v);\n   const int n=get_indent(s);\n   if(neq(n,0))\n    break;\n   if(eq(s,_s44))\n    break;\n   shift(a);\n   push(signatures,v);\n  }\n  arr body;\n  const var v2=front(a);\n  const str& s2=at_str(v2);\n  if(eq(s2,_s44))\n  {\n   push(body,v2);\n   shift(a);\n  }\n  while(is_full(a))\n  {\n   const var v=front(a);\n   const str& s=at_str(v);\n   if(match_l(s,_s45))\n   {\n    shift(a);\n    push(body,v);\n    break;\n   }\n   const int n=get_indent(s);\n   if(eq(n,0))\n    break;\n   shift(a);\n   push(body,v);\n  }\n  obj o;\n  const var v3=to_var(signatures);\n  const var v4=to_var(body);\n  put(o,_s57,signatures);\n  put(o,_s51,body);\n  const var v5=to_var(o);\n  push(r,v5);\n }\n return r;\n}\narr_str cpl_prototype(const arr& x)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(is_str(v))\n   continue;\n  if(is_inline(v))\n   continue;\n  const obj& o=at_obj(v);\n  const str& signature=get_str(o,_s52);\n  if(is_struct(signature))\n   continue;\n  const str s=concat(signature,_s66);\n  push(r,s);\n }\n return r;\n}\narr_str cpl_struct(const arr& x)\n{\n arr_str r;\n for(int i=0;lt(i,x.len);i++)\n {\n  const var& v=at(x,i);\n  if(!is_struct(v))\n   continue;\n  const obj& o=at_obj(v);\n  const str& signature=get_str(o,_s52);\n  const arr& body=get_arr(o,_s51);\n  push(r,signature);\n  append(r,body);\n }\n return r;\n}\nvoid init(const arr_str& x)\n{\n if(is_empty(x))\n {\n  arr_str a;\n  push(a,_s68);\n  return init(a);\n }\n arr_str a1=copy(x);\n const str name=shift(a1);\n bool run=false;\n str compiler=_s69;\n if(extract(a1,_s70))\n  run=true;\n if(extract(a1,_s71))\n  assign(compiler,_s69);\n if(extract(a1,_s72))\n  assign(compiler,_s73);\n if(is_full(a1))\n {\n  print(_s74);\n  dump(a1);\n  return;\n }\n const str s1=path_concat(_s75,name);\n check(is_dir(s1));\n arr_str a2=cpl_import(_s76);\n const arr_str a3=cpl_import(s1);\n append(a2,a3);\n arr a4;\n for(int i=0;lt(i,a2.len);i++)\n {\n  const str& v=at(a2,i);\n  const str s1=to_lit(v);\n  echo(_s77);\n  space();\n  print(s1);\n  const str s2=file_read(v);\n  const arr a=cpl_parse(s2);\n  append(a4,a);\n }\n const arr a5=cpl_implement(a4);\n const arr a6=cpl_deduplicate(a5);\n const arr a7=cpl_flatten(a6);\n const arr_str a8=cpl_forward(a7);\n const arr_str a9=cpl_include(a7);\n const arr_str a10=cpl_prototype(a7);\n const arr_str a11=cpl_struct(a7);\n const arr_str a12=cpl_code(a7);\n const str out=concat(_s78,name,_s79);\n const str binary=concat(_s78,name);\n const arr_str a13=to_arr(_s80,out,_s81,binary,_s82,_s83,_s84,_s85,_s86,_s87);\n const str gcc=join(a13,_s4);\n const str gcc_instruction=concat(_s25,gcc);\n const arr_str a14=to_arr(_s88,out,_s81,binary,_s89,_s90,_s91,_s85,_s86,_s87);\n const str clang=join(a14,_s4);\n const str clang_instruction=concat(_s25,clang);\n const str date=date_get();\n const str generate=concat(_s92,date);\n const int generic=cpl_count_tpl(a4);\n arr_str result;\n push(result,gcc_instruction);\n push(result,clang_instruction);\n push(result,generate);\n push(result,_s93);\n push(result,_s94);\n push(result,_s95);\n append(result,a8);\n push(result,_s96);\n append(result,a9);\n push(result,_s97);\n append(result,a10);\n push(result,_s98);\n append(result,a11);\n push(result,_s99);\n append(result,a12);\n const str source=join(result);\n const str s2=to_lit(source);\n const str s3=concat(_s100,s2,_s66);\n push(result,_s101);\n push(result,s3);\n echo(_s77);\n space();\n print(a2.len);\n echo(_s102);\n space();\n print(a8.len);\n echo(_s9);\n space();\n print(a10.len);\n echo(_s103);\n space();\n print(generic);\n echo(_s104);\n space();\n print(result.len);\n const str content=join(result);\n file_save(out,content);\n const double n1=time_now();\n const str s4=to_str(n1);\n const str s5=concat(s4,_s27);\n echo(_s105);\n space();\n print(s5);\n if(is_file(binary))\n  path_unlink(binary);\n const double n2=time_now();\n if(eq(compiler,_s69))\n  os_system(gcc);\n else if(eq(compiler,_s73))\n  os_system(clang);\n else\n  stop();\n const double n3=time_now();\n const double n4=sub(n3,n2);\n const str s6=to_str(n4);\n const str s7=concat(s6,_s27);\n echo(_s68);\n space();\n print(s7);\n if(is_file(binary))\n {\n  const int n1=file_size(binary);\n  const int n2=div_(n1,1024);\n  const str s1=to_str(n2);\n  const str s2=concat(s2,_s106);\n  echo(_s107);\n  space();\n  print(s2);\n  if(run)\n  {\n   const str path=path_real(binary);\n   os_system(_s108,_s109,_s110,_s111,_s112,path);\n  }\n }\n}\nbool is_inline(const var& x)\n{\n if(!is_obj(x))\n  return false;\n const obj& o=at_obj(x);\n const str& signature=get_str(o,_s52);\n return eq(signature,_s113);\n}\nbool is_struct(const str& x)\n{\n if(!is_line(x))\n  return false;\n if(match_l(x,_s114))\n  return true;\n if(match_l(x,_s115))\n  return true;\n return false;\n}\nbool is_struct(const var& x)\n{\n if(!is_obj(x))\n  return false;\n const obj& o=at_obj(x);\n const str& signature=get_str(o,_s52);\n return is_struct(signature);\n}\nbool is_tpl(const str& x)\n{\n const arr_str a=split(x,_s4);\n const str s=front(a);\n return eq(s,_s116);\n}";