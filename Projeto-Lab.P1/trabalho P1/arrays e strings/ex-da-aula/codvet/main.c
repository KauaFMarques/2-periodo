#include <stdio.h>
#define TAM 10

int main( )
{

int tam;
scanf("%d",&tam);

int vet[tam]; // 0 - 9

int i=0;

for (i=0;i<sizeof(vet)/sizeof(vet[0]);i++){
	scanf("%d",&vet[i]);
}

for (i=0;i<sizeof(vet)/sizeof(vet[0]);i++){
	printf("%d, ",vet[i]);
	
}

return (0);
}