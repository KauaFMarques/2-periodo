#include <stdio.h>

struct Aluno{
  int matricula;
  char nome[10];

};

int main(void) {

struct Aluno lista[2];
int i;
for(i=0;i<2;i++){
  printf("Insira a matrícula e o nome do aluno %d respectivamente: \n",i+1);
  scanf("%d",&lista[i].matricula);
  scanf("%s",&lista[i].nome);
}

for(i=0;i<2;i++){
  printf("A matrícula: %d e o nome do aluno: %s \n",lista[i].matricula,lista[i].nome);
}
  return 0;
}
/*
  struct Aluno aluno1;
  struct Aluno aluno2;

  printf("Insira a matrícula: \n");
  scanf("%d",&aluno1.matricula);
  printf("Insira o nome: ");
  fflush(stdin);//serve para limpar o buff no windows , ele deixa de receber a entrada.
  scanf("%s",aluno1.nome);

  printf("a matrícula do aluno %s é %d \n",aluno1.nome,aluno1.matricula);

  printf("Insira a matrícula: \n");
  scanf("%d",&aluno2.matricula);
  printf("Insira o nome: ");
  fflush(stdin);//serve para limpar o buff no windows , ele deixa de receber a entrada.
  scanf("%s",aluno2.nome);

  printf("a matrícula do aluno %s é %d",aluno2.nome,aluno2.matricula);
*/