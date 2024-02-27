#include <stdio.h>

struct Aluno{
  int matricula;
  char nome[10];

};

int main(void) {
  struct Aluno aluno1;
  printf("Insira a matrícula: ");
  scanf("%d",&aluno1.matricula);
  printf("Insira o nome: ");
  fflush(stdin);//serve para limpar o buff no windows , ele deixa de receber a entrada.
  scanf("%s",aluno1.nome);

  printf("a matrícula do aluno %s é %d",aluno1.nome,aluno1.matricula);


  return 0;
}