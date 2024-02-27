#include <stdio.h>

int main(void) {
  int matriz[2][3]={{1,2,3},{4,5,6}};
  int *p=matriz[0];
  //indice 0 da linha 0 e coluna 0
  printf("%d \n",*p);
  //ele exibe o 2 partindo do primeiro endereço
  printf("%d \n",*(p+1));

  //outra forma: passando o endereço da linha e coluna 
  int *q=&matriz[0][0];
  printf("%d \n",*q);
  printf("%d \n",*(q+1));
  return 0;
}
