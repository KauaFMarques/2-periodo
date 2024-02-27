#include <stdio.h>

int ordena(int vet[],int tam){
  int i,j,aux;
  for(j=0;j<tam;j++){
    for(i=0;i<tam;i++){
     if(vet[i]>vet[i+1]){
      aux=vet[i];
      vet[i]=vet[i+1];
      vet[i+1]=aux;
    }
  }
  }

}

int main(void) {
  int vet,t,i,x;
  t=10;
  printf("digite um valor:")
  scanf("%d",&x);
  
  ordena(&vet,t);
  for(i=0;i<5;i++){
    printf("%d,",vet[i]);
  }
  return 0;
}