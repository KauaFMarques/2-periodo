#include <stdio.h>

int main(void) {
  int v[5]={1,2,3,4,5};
  int *p;
  //v==&v[0]; o nome do vetor representa a primeira posição(v representa o endereço da posição 0)
  p = v;

  p=&v[2];
  printf("%d\n",*p);
  p++;

  printf("%d\n",*p);
  char nome [10]="Maria sá";
  char *c;
  c=nome;
  printf(" a string é referenciada por %c \n",*c);
  while (*c){
    putchar(*c);
    c++;
    //enquanto existir valor ele é incrementado na linha até aparecer o valor completo
  }
  return 0;
}
