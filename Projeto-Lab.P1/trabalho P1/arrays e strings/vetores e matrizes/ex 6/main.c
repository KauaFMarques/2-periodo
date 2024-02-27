#include <stdio.h>
int main(void) {

  printf("vetores e matrizes \n");

  int tam;
  scanf("%d",&tam);
  int vet[tam];
  int i=0;

for(i=0;i<sizeof(vet)/sizeof(vet[0]);i++){
 scanf("%d",&vet[i]); 
  }
for(i=0;i<sizeof(vet)/sizeof(vet[0]);i++){
  printf("%d ",vet[i]); 
  }
//o sizeof dá o valor em bytes. daí o ao dividir uma quantidade de valores desconhecidos pelo inicial(1) obtem-se o quantidade de n°'s
  return 0;
}