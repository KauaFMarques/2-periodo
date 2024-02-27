#include <stdio.h>
#include <stdlib.h>

/* 0,1,2,3,4,5,6,7,8
v=[1,2,3,4,5,6,7,8,9]

x=2 vai pegar a posic~ção do meio (5)
dps x<v[meio]  ou x>v[meio]

int ini=0
int fim=tamanho do vet-1(9-1=8)
meio=(inicio+fim)/2

quantas vezes preciso fzr as verificações?:
enquanto ñ for encontrado o valor 
e enquanto houver valores para serem analisados
ini<=fim
meio=(ini+fim)/2

if(x==v[meio])\\valor encontrado
else if(x<v[meio])\\fim=meio-1
else(x>v[meio])\\ini=meio+1

*/
#include <stdio.h>

/*
     0 1 2 3 4 5 6 7 8
v = [1,2,3,4,5,6,7,8,9]

x=8
ini=0;
fim=8;
x==v[meio;
x<v[meio];
x>v[meio];

ini = 0;
fim = tamanho-1;
meio = (ini+fim)/2 = 4

ini <= fim

meio=(ini+fim)/2

if(x==v[meio]) // encontrou o valor
else if(x<v[meio]) // fim=meio-1
else(x>v[meio]) //ini=meio+1

*/

int buscaB(int v[],int t, int x){
	
int ini = 0;
int fim = t-1;
int meio;
int cont=0;

while(ini<=fim){
	cont++;
	printf("Execucao %d\n", cont);
	meio = (ini+fim)/2;
	printf("Valor ini %d, valor fim %d e valor meio = %d\n", ini,fim,meio);
	
	if (x==v[meio]){
		printf("Valor %d eh igual ao valor %d da posicao %d\n",x,v[meio],meio);
		return meio;
	}else if(x<v[meio]){
		printf("Valor %d eh menor que o valor %d da posicao %d\n",x,v[meio],meio);
		fim = meio-1;
	}else{
		printf("Valor %d eh maior que o valor %d da posicao %d\n",x,v[meio],meio);
		ini = meio+1;
	}
}

return -1;
	
}



main( )
{
printf("Busca Binaria\n");

int v[]={1,2,3,4,5,6,7,8,9};
int x = 5;
int r=buscaB(v,9,x);

if(r!=-1){
	printf("Valor %d foi encontrado na posicao %d que tem o valor %d", x,r,v[r]);
}else{
	printf("Valor nao encontrado");
}

return(0);
}