#include <stdio.h>
#include <stdlib.h>
//buble sort
void bubble_sort (int vetor[], int n) {
    int k, j, aux;

    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
//buble sort
void lervet(int *vet,int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("Digite um valor para a posição %d: ",i+1);
    scanf("%d",&vet[i]);
  }
}

void exibirvet(int vet[],int tam){
  int i;
  for(i=0;i<tam;i++){
    printf("%d ",vet[i]);
  }
}
//busca binária
int buscaB(int v[],int t, int x){
	
int ini = 0;
int fim = t-1;
int meio;
int cont=0;

while(ini<=fim){
	cont++;
	//printf("Execucao %d\n", cont);
	meio = (ini+fim)/2;
	//printf("Valor ini %d, valor fim %d e valor meio = %d\n", ini,fim,meio);
	
	if (x==v[meio]){
		//printf("Valor %d eh igual ao valor %d da posicao %d\n",x,v[meio],meio);
		return meio;
	}else if(x<v[meio]){
		//printf("Valor %d eh menor que o valor %d da posicao %d\n",x,v[meio],meio);
		fim = meio-1;
	}else{
		//printf("Valor %d eh maior que o valor %d da posicao %d\n",x,v[meio],meio);
		ini = meio+1;
	}
}

return -1;
	
}

int main(void) {
  printf("busca binária\n");
//  int v[10]={1,2,3,4,5,6,7,8,9,10};
  printf("o vetor terá tamanho 10:\n");
  int t=10;
  int vet[t];
  lervet(&vet,t);
  bubble_sort (vet,t);
  exibirvet(vet,t);
  printf("Digite um valor para procurar: \n");
  int x;
  scanf("%d",&x); 
  int r=buscaB(vet,t,x);

  if(r!=-1){
    printf("O valor %d foi encontrado! Sua posição é : %d \n",x,r);
  }else{
    printf("Valor ñ foi encontrado\n");
  }
  
  return 0;
}