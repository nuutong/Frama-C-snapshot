/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
struct bitfields {
   int i : 2 ;
   _Bool j : 1 ;
};
struct bitfields t;
int test(struct bitfields *a)
{
  int __retres;
  __retres = (int)a->i;
  return __retres;
}

void __e_acsl_globals_init(void)
{
  __e_acsl_store_block((void *)(& t),(size_t)4);
  __e_acsl_full_init((void *)(& t));
  return;
}

int main(int argc, char **argv)
{
  int tmp;
  __e_acsl_memory_init(& argc,& argv,(size_t)8);
  __e_acsl_globals_init();
  /*@ assert \valid_read(&t.j); */ ;
  /*@ assert \valid_read(&t.j + (1 .. 3)); */ ;
  ;
  t.j = (_Bool)1;
  /*@ assert \initialized(&t.j); */ ;
  tmp = test(& t);
  __e_acsl_delete_block((void *)(& t));
  __e_acsl_memory_clean();
  return tmp;
}

