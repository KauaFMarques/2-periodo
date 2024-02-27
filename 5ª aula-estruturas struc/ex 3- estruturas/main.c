#include <stdio.h>

struct Aluno{
  int matricula;
  char nome[10];

};

int main(void) {

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
  return 0;
}