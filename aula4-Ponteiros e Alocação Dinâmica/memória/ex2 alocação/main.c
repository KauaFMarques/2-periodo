#include <stdio.h>

int main(void) {
  int vetor[5]={1,2,3,4,5};
  int *p=vetor;
  printf("%d\n",p[3]);

  int matriz[2][3]={{1,2,3},{4,5,6}};
  int *m=matriz[0];
  //a sintaxe exige que seja exibido pelo menos o primeiro indice
  printf("%d",m[3]);
  //poderia colocar *(m+1) seria exibido o valor 2
  //poderia colocar *m=&matriz[0][0]
  return 0;
}

int matriz(void){

  return 0;
}