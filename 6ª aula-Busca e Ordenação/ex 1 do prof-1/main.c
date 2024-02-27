#include <stdio.h>
#include <stdlib.h>
/*main( )
{
printf("Busca Linear\n");

int numeros[5]={50,20,10,70,15};
int i, valor;

printf("Qual eh o valor a procurar?\n");
scanf("%d", &valor);

for (i=0;i<5;i++){
	if (numeros[i]==valor){
		printf("Valor encontrado!");
		exit(1);
	}
}

printf("Valor nao encontrado");

}*/
int PesquisaBinaria (int vet[], int chave, int tam)
{
     int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
     int sup = tam-1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
     int meio;
     
     while (inf <= sup)
     {
          meio = (inf + sup)/2;
          
          if (chave == vet[meio]){
		  
               return meio;
               
			   }else
          if (chave < vet[meio]){
		  
               sup = meio-1;
           }
          else{
		  
               inf = meio+1;
           }
     }
     return -1;   // não encontrado
}
int main(void)
{
printf("Busca Linear\n");

int numeros[10]={1,2,3,4,5,6,7,8,9,10};
int i, valor;

printf("Qual eh o valor a procurar?\n");
scanf("%d", &valor);

int e;
e = PesquisaBinaria (numeros, valor, 10);

if (e != -1){
	printf("Achou na posicao %d!", e);
}

return(0);
}