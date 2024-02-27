#include <stdio.h>

int main(void) {
  FILE *a;
  a=fopen("exemplo1.txt","w");
  return 0;
  //ao escrever alguma arquivo novo e usar o "w" , ele cria um novo arquivo, entretanto a cada RUN ele substitui o antigo por algo novo.
}