#include <stdio.h>

struct dataN{
  int m,a;//mês e ano
};

struct put{
  char end[50];
  int cel;
  char dis[20];
};

struct Aluno{
  int matricula;
  char nome[10];
  struct dataN d;
  struct put p;
};

void ler(struct Aluno lista[]){
  int i;
for(i=0;i<2;i++){
  printf("Insira a matrícula e o nome do aluno %d respectivamente: \n",i+1);
  scanf("%d",&lista[i].matricula);
  scanf("%s",&lista[i].nome);
  printf("Insira o endereço e o telefone do aluno %d respectivamente: \n",i+1);
  scanf("%s",&lista[i].p.end);
  scanf("%d",&lista[i].p.cel);
  printf("Insira algumas disciplinas que o aluno %d está estudando:\n",i+1);
  scanf("%s",&lista[i].p.dis);
  printf("Insira a o mes e ano do aniversário do aluno %d \n",i+1);
  scanf("%d %d",&lista[i].d.m,&lista[i].d.a);
}

for(i=0;i<2;i++){
  printf("A matrícula: %d e o nome do aluno: %s , seu aniversário é no mês/ano : %d / %d \n",lista[i].matricula,lista[i].nome,lista[i].d.m,lista[i].d.a);
  printf("O endereço e o telefone do aluno %d respectivamente: \n",i+1);
  printf("%s",&lista[i].p.end);
  printf("%d",lista[i].p.cel);
  printf("Algumas disciplinas que o aluno %d está estudando:\n",i+1);
  printf("%s",&lista[i].p.dis);

}
}


int main(void) {

struct Aluno lista[2];
ler(lista);
  return 0;
}