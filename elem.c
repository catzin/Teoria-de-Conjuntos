#include"elem.h"

void imp_elem(elem e){
  printf("%d\n",e);
}

int es_menor(elem e1, elem e2){

  return e1 < e2;
}

int son_igu(elem e1, elem e2){

  return e1 == e2;
}

int esMoi(elem e1,elem e2){

  return (es_menor(e1,e2)||son_igu(e1,e2));
}
