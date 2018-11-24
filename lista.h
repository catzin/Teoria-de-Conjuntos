#include"elem.h"
#include<stdlib.h>
typedef struct NODO{

  elem dato;

  struct NODO*sig;

}*list;

list cons(elem,list);
list vacia(void);
int es_vacia(list);
elem cabeza(list);
list resto(list);
void imp_list(list);
elem Num_ele(list);
list pega_list(list, list);
list invierte_list(list);
list elimina(list);
list agrega(elem,list);
list ins_ord(elem,list);
list ord_list(list);
list ord_listhaz(list);
int esta_en(elem,list);
