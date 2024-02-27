#include <stdio.h>

int main(void) {
  printf("olha a bolha \n");
  int vet[5]={5,3,1,2,4};
  int i,aux,j;

  for(i=0;i<5;i++){
    printf("%d,",vet[i]);
  }

  printf("\n");
  for(j=0;j<5;j++){
    printf("o valor de j é :%d \n",j);
    printf("\n");
    
     for(i=0;i<5;i++){
       printf("o valor de i é :%d \n",i);
       printf("o valor atual de i é :%d , e o proximo é:%d \n",vet[i],vet[i+1]);
       
    if(vet[i]>vet[i+1]){
      aux=vet[i];
      vet[i]=vet[i+1];
      vet[i+1]=aux;
      
      printf("trocou \n");
    }
    printf("o valor atualizado de i é :%d , e o proximo é:%d \n",vet[i],vet[i+1]);
    printf("\n");
  }
  }

  for(i=0;i<5;i++){
    printf("%d,",vet[i]);
  }

  /* o vetor fica ordenado, pois ele compara com execuções no total de valores desejados 

o 5 será comparado até ser encontrado com todos os valores , até existir um valor maior que ele
quando enconntrado este último número é levado para a posição final do vetor
*/
  return 0;
}