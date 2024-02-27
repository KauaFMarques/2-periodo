#include <stdio.h>
#include <string.h>

int main(void) {

  int v;
  char nome[10];
  char sobrenome[10]=" Oliveira";
  scanf("%s",nome);
  strcat(nome,sobrenome);
  printf("%s",nome);
  return 0;
}