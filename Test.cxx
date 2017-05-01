#include <iostream>
#include "ArbolBinario.h"

struct normal{
  std::string a ;
  int b ;
};

bool operator == (const normal t1 , const normal t2){
  return t1.a == t2.a ;
}
bool operator <  (const normal t1 , const normal t2){
  return t1.a < t2.a ;
}
bool operator >  (const normal t1 , const normal t2){
  return t1.a >  t2.a ;
}
bool operator >= (const normal t1 , const normal t2){
  return t1.a >= t2.a ;
}
bool operator <= (const normal t1 , const normal t2){
  return t1.a <= t2.a ;
}
bool operator != (const normal t1 , const normal t2){
  return t1.a != t2.a ;
}
std::ostream& operator << (std::ostream &o, const normal t1 ){
  o << "(" << t1.a << ", " << t1.b << ")";
     return o;
}

int main(int argc, char const *argv[]) {
/*
  normal var1 ;
  var1.a = "HOLA" ;
  var1.b = 5 ;
  normal var2 ;
  var2.a = "COMO";
  var2.b = 4 ;
  normal var3 ;
  var3.a = "ESTAS" ;
  var3.b = 9 ;
  normal var4 ;
  var4.a = "TU" ;
  var4.b =53 ;

  ArbolBinarioAVL<normal> arbol;
  arbol.insertar(var1);
  arbol.insertar(var2);
  arbol.insertar(var3);
  arbol.insertar(var4);
  arbol.preOrden();

  */

    ArbolBinarioAVL<int> arbol;
  int var = 7 ;
  int var1 = 3 ;
  int var2 = 20 ;
  int var3 = 0 ;
  int var4 = 5 ;
  int var5 = -3 ;
  int var6 = 1 ;
  int var7 = 4 ;
  int var8 = 6 ;
  int var9 = 15 ;
  int var10 = 25 ;
  int var11 = 30;
  int var12 = 35;
  int var13 = 8;
  int var14 = 16;
  int var15 = 14 ;
  int var16 = 9 ;
  int var17 = 40 ;
  int var18 = 2 ;
  int var19 = 10 ;
  int var20 = 18 ;


  arbol.insertar(var4);


  arbol.insertar(var14);
  arbol.insertar(var6);
  arbol.insertar(var13);
  arbol.insertar(var7);
  arbol.insertar(var10);
  arbol.insertar(var1);
  arbol.insertar(var8);
  arbol.insertar(var12);
  arbol.insertar(var9);
  arbol.insertar(var2);


  arbol.insertar(var5);
  arbol.insertar(var11);
  arbol.insertar(var);
  arbol.insertar(var3);


  std::cout<<std::endl ;
  arbol.preOrden();
  std::cout<<std::endl<<"ALTURA : "<<arbol.altura() ;
  std::cout<<std::endl<<"TAMAÑO : "<<arbol.tamano() ;
  std::cout<<std::endl<<"MINIMO : "<<arbol.minimo() ;
  std::cout<<std::endl<<"MAXIMO : "<<arbol.maximo() ;
  std::cout<<std::endl ;

  arbol.eliminar(var10);
  arbol.eliminar(var13);
  arbol.eliminar(var1);
  arbol.eliminar(var14);
  arbol.eliminar(var6);
  arbol.eliminar(var3);
  arbol.eliminar(var7);
  arbol.eliminar(var11);
  arbol.insertar(var14);
  arbol.insertar(var15);
  arbol.insertar(var13);
  arbol.insertar(var16);

  arbol.insertar(var16);
  arbol.insertar(var15);

  arbol.insertar(var17);
  arbol.insertar(var18);
  arbol.insertar(var19);
  arbol.insertar(var20);
  arbol.eliminar(var13);
  arbol.inOrden();
  std::cout<<std::endl ;
  for(ArbolBinarioAVL<int>::iterator it = arbol.begin() ; it != arbol.end() ; it++){
    std::cout<<"\n DATO --> "<<(*it);
  }
    std::cout<<std::endl ;
  return 0;
}
