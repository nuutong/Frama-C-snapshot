/* Generated by Frama-C */
#include "stdio.h"
#include "stdlib.h"
struct toto {
   
};
int main(void)
{
  int __retres;
  struct toto s;
  struct toto *p;
  __e_acsl_memory_init((int *)0,(char ***)0,(size_t)8);
  __e_acsl_store_block((void *)(& p),(size_t)8);
  __e_acsl_store_block((void *)(& s),(size_t)0);
  /*@ assert \valid(&s); */
  {
    int __gen_e_acsl_valid;
    __gen_e_acsl_valid = __e_acsl_valid((void *)(& s),sizeof(struct toto),
                                        (void *)(& s),(void *)0);
    __e_acsl_assert(__gen_e_acsl_valid,(char *)"Assertion",(char *)"main",
                    (char *)"\\valid(&s)",9);
  }
  __e_acsl_full_init((void *)(& p));
  p = & s;
  /*@ assert \valid(p); */
  {
    int __gen_e_acsl_initialized;
    int __gen_e_acsl_and;
    __gen_e_acsl_initialized = __e_acsl_initialized((void *)(& p),
                                                    sizeof(struct toto *));
    if (__gen_e_acsl_initialized) {
      int __gen_e_acsl_valid_2;
      __gen_e_acsl_valid_2 = __e_acsl_valid((void *)p,sizeof(struct toto),
                                            (void *)p,(void *)(& p));
      __gen_e_acsl_and = __gen_e_acsl_valid_2;
    }
    else __gen_e_acsl_and = 0;
    __e_acsl_assert(__gen_e_acsl_and,(char *)"Assertion",(char *)"main",
                    (char *)"\\valid(p)",12);
  }
  __retres = 0;
  __e_acsl_delete_block((void *)(& p));
  __e_acsl_delete_block((void *)(& s));
  __e_acsl_memory_clean();
  return __retres;
}


