#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char nome[10];
int idade;
}Pessoa;

int main(void) {
  FILE *a;
  Pessoa p;
  
  a=fopen("novo.txt","a");
  
  printf("digite o nome e idade: \n");
  scanf("%s",p.nome);
  scanf("%d",&p.idade);

  fwrite(&p, sizeof(Pessoa), 1, a);
  return 0;
}