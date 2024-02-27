#include <stdio.h>
int main(void) {

  printf("vetores e matrizes \n");

  int tam;
  scanf("%d",&tam);
  int vet[tam];
  int i=0;

for(i=0;i<tam;i++){
 scanf("%d",&vet[i]); 
  }
for(i=0;i<tam;i++){
  printf("%d ",vet[i]); 
  }

  return 0;
}