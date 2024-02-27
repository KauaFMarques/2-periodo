#include <stdio.h>
struct dataN{
	
	int m,a;
	
};

struct Aluno{
	int matricula;
	char nome[10];
	struct dataN d;
};

void ler(struct Aluno lista[]){
	
int i;

for (i=0;i<2;i++){
	printf("Insira a matricula e o nome do aluno %d\n",i+1);
	scanf("%d",&lista[i].matricula);
	fflush(stdin);
	scanf("%s",lista[i].nome);
	printf("Insira a data de nascimento aluno %d\n",i+1);
	scanf("%d %d",&lista[i].d.m,&lista[i].d.a);
}

for (i=0;i<2;i++){
	printf("A matricula do aluno %s eh %d\n",lista[i].nome,lista[i].matricula);
	printf("Data de nascimento: %d/%d", lista[i].d.m,lista[i].d.a);
	
	
}
	
}


main( )
{
printf("Estruturas (Registros)\n");

struct Aluno lista[2];

ler(lista);


return(0);
}