#include <stdio.h>

void swap(int c , int d){
  int aux;
  aux=c;
  c=d;
  d=aux;
}
int main(void) {

  int a=10;
  int b=20;

  swap(a,b);
  printf("O valor de A é :%d, o valor de B é : %d",a,b);
  //Observe que o valor ainda é o mesmo , pois foi chamado o valor dos valores fora da função.//
  return 0;
}