#include <stdio.h>

int swap(int a, int b){
  int aux=a;
  a=b;
  b=aux;
  //valores dentro da função:
  printf("valores de %d e %d \n",a,b);
}
int main(void) {
  int a,b,aux;
  a=3;
  b=2;

  printf("valores de %d e %d \n",a,b);

  swap(a,b);
  
  printf("valores de %d e %d \n",a,b);
  
  return 0;
}