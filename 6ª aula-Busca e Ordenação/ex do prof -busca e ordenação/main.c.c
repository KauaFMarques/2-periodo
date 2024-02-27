#include <stdio.h>
#include <stdlib.h>
main()
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

return(0);
}
/*
Atenção para as linhas:

int numeros[5]={50,20,10,70,15}; //nosso vetor possui 5 elementos
printf("Valor encontrado!"); exit(1); //ao comparar e encontrar o valor, uma mensagem é exibida e a execução para, ao ser chamada a função exite(1) da <stdlib.h>

Esse tipo de pesquisa pode ser ineficiente se tivermos um vetor de muitos elementos. Nesse casos, a busca binária pode ser utilizada.
*/