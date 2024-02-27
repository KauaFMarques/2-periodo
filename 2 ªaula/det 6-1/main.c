#include <stdio.h>
#include <string.h>

int main(void) {

  int v;
  char nome[10];
  char sobrenome[10]=" Oliveira";
  scanf("%s",nome);
  v=strcmp(nome,sobrenome);
  printf("Nome: %s é %d",nome,v);
  return 0;
}