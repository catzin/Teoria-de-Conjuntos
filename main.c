#include<stdio.h>
#include<stdlib.h>
#include"conjuto.h"

int main(void){

  list x = cons(0,cons(1,cons(2,cons(3,vacioc()))));
  list z = cons(3,cons(4,cons(5,vacioc())));
  list r = vacia();
  printf("Elementos en conjunto x:\n");
  imp_list(x);
  printf("\n");
  printf("Elementos en conjunto z:\n");
  imp_list(z);
  printf("\n");
  r  = Diferencia(x,z);
  printf("Resultado de aplicar Diferencia:\n");
  printf("\n");
  imp_list(r);
  printf("\n");

  return 0;

}
