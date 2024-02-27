#include <stdio.h>

void swap(int *c , int *d){
  int aux;
  aux=*c;
  *c=*d;
  *d=aux;
  /*
  Para mudar os valores é necessário utilizar os apontadores * e & visto que é com eles que se muda o endereço das variáveis
  */
}
int main(void) {

  int a=10;
  int b=20;

  swap(&a,&b);
  printf("O valor de A é :%d, o valor de B é : %d",a,b);
  return 0;
}