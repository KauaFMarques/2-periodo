#include <stdio.h>

int main(void) {
  char nome[10];
  fgets(nome,sizeof(nome),stdin);
  printf("%s",nome);
  return 0;
}