#include <stdio.h>

int main(void) {
  FILE *a;
  int valor,soma=0;
  a=fopen("exemplo.txt","r");
  while (fscanf(a,"%d",&valor)==1){
    soma=soma+valor;
  }
  printf("soma: %d ",soma);
  return 0;
} 
