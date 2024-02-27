#include <stdio.h>

int main(void) {
  int v[5]={1,2,3,4,5};
  int *p;
  //v==&v[0]; o nome do vetor representa a primeira posição(v representa o endereço da posição 0)
  p = v;
  printf("%d",*p);
  char nome [10]="Maria sá";
  char *c;
  c=nome;
  printf(" a string é referenciada por %c \n",*c);
  c++;//incrementamos o valor de char
  printf(" a string é referenciada por %c \n",*c);
  //dps do c++ ele acessa o outro valor posterior ao anterior
  return 0;
}