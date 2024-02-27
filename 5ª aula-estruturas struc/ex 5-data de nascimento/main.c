#include <stdio.h>

struct dataN{
  int m,a;//mês e ano
};

struct Aluno{
  int matricula;
  char nome[10];
  struct dataN d;
};

int main(void) {

struct Aluno lista[2];
int i;
for(i=0;i<2;i++){
  printf("Insira a matrícula e o nome do aluno %d respectivamente: \n",i+1);
  scanf("%d",&lista[i].matricula);
  scanf("%s",&lista[i].nome);
  printf("Insira a o mes e ano do niver do aluno %d \n",i+1);
  scanf("%d %d",&lista[i].d.m,&lista[i].d.a);
}

for(i=0;i<2;i++){
  printf("A matrícula: %d e o nome do aluno: %s , seu niver é no mês/ano : %d / %d \n",lista[i].matricula,lista[i].nome,lista[i].d.m,lista[i].d.a);
}
  return 0;
}