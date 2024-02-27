#include <stdio.h>
#include <string.h>

typedef struct {
  int matricula;
  char nome[10];
}aluno;

//typedef int idade;
//typedef serve para substituir o uso da palavra struct
//typedef struct Aluno aluno;


void ler(aluno a){
}


int main(void) {
  aluno a1;
  a1.matricula=123;
  strcpy(a1.nome,"maria");
  printf("nome: %s , matrícula: %d ",a1.nome,a1.matricula);
  return 0;
}