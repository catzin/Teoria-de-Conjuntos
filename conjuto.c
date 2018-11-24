#include"conjuto.h"

conjunto vacioc(void){
  return NULL;
}

int esvacioc(conjunto s){
  return  s == NULL;
}

int estaenc(elem e, conjunto s){

  if(esvacioc(s)){

    return 0;
  }

  else
    if(son_igu(e,cabeza(s))){

      return 1;
    }


  else{

    return estaenc(e,resto(s));
  }

}

conjunto inserta(elem e, conjunto s){
  if(esvacioc(s))
    return cons(e,s);

  else if(estaenc(e,s))

    return s;

  else

  return cons(e,s);

  }


  conjunto eliminac(elem e, conjunto s){

    if(!estaenc(e,s))

    return s;

    else if(son_igu(e,(cabeza(s))))

    return resto(s);

    else

    return cons(cabeza(s),eliminac(e,resto(s)));

  }

  conjunto unionc(conjunto s1, conjunto s2){

    if(esvacioc(s2)){

      return s1;

    }

    if(esvacioc(s1)){

      return s2;

    }

    else{

      return pega_list(s1,s2);

    }
  }


  int Cardinalidad(conjunto s1){

    return (Num_ele(s1));
  }

  conjunto interseccion(conjunto s1, conjunto s2){

    conjunto s3 = vacioc();
    int con = 0;
    int aux = Cardinalidad(s1);

    if(esvacioc(s1)||esvacioc(s2)){
      return vacioc();
    }

     while(con != aux){
       if(estaenc(cabeza(s1),s2)){

         s3 = cons(cabeza(s1),s3);
       }

       s1 = resto(s1);
       con++;
     }

    return s3;
}


conjunto Diferencia(conjunto s1 , conjunto s2){

  conjunto s3 = vacioc();
  int aux = Cardinalidad(s2);
  int con = 0;

  while(con != aux){

    if(estaenc(cabeza(s2),s1)){

      s1 = eliminac(cabeza(s2),s1);

    }

    s2 = resto(s2);
    con++;

  }

  return s1;
}
