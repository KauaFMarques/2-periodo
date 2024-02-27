#include <stdio.h>

void lervet(int vet[],int tam){
  int i;
  for(i=0;i<tam;i++){
    scanf("%d",&vet[i]);
  }
}

void exibirvet(int vet[],int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",vet[i]);
  }
}

int main(void) {
  int vet[2];
  lervet(vet,2);
  exibirvet(vet,2);
}