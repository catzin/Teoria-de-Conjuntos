#include"elem.h"

typedef struct NODO{

  elem dato;

  struct NODO*sig;

}*list;


list cons(elem e,list l ){
  list aux;

  aux = (list)malloc(sizeof(struct NODO));
  aux -> dato = e;
  aux -> sig  = l;

  return aux;
}

list vacia(void){
  return NULL;
}

int es_vacia(list l){

return l == NULL;
}

elem cabeza(list l){

  return l -> dato;
}

list resto(list l){

  return l -> sig;
}

void imp_list(list l){
  if(!es_vacia(l)){
    imp_elem(cabeza(l));
    imp_list(resto(l));
  }
}

elem Num_ele(list l){
  if(es_vacia(l)){
    return 0;
  }

  else{
    return 1+Num_ele(resto(l));
    }
}

list pega_list(list l , list m){

  if(es_vacia(l)){
    return m;
  }
  else return cons(cabeza(l),pega_list(resto(l),m));

}

list invierte_list(list l){

  if(es_vacia(l)){
    return l;
  }
  else{
    return pega_list(invierte_list(resto(l)),cons(cabeza(l),vacia()));
  }
}

/*list mult(list l){

  if(es_vacia(l)){

    return l;

  }

  else return cons(cabeza(l)*3,mult(resto(l)));
}
*/

list elimina(list l){

  if(!es_vacia(l)){

    free(l);
  }

  return vacia();

}

list agrega(elem e,list l){

  list aux;
  list x;

  aux = cons(e,vacia());

  x = pega_list(aux,l);

  return x;

}

list ins_ord(elem e, list l){


  if(es_vacia(l)){

    return cons(e,l);

  }

  else if(es_menor(e,cabeza(l))){

    return cons(e,l);

  }

  else{

    return cons(cabeza(l),ins_ord(e,resto(l)));
  }

}



list ord_list(list l){

  if(es_vacia(l)){

    return l;
  }
  else {

    return ins_ord(cabeza(l),ord_list(resto(l)));
  }


}

list ord_listhaz(list l){

  if(es_vacia(l)){
    return l;
  }
  else
  return invierte_list(ord_list(l));

}




int esta_en(elem e ,list l){

  if(es_vacia(l)){

    return 0;
  }

  else
    if(son_igu(e,cabeza(l))){

      return 1;
    }


  else{

    return esta_en(e,resto(l));
  }

}
