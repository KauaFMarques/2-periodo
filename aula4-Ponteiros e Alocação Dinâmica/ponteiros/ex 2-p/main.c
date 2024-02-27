#include <stdio.h>

int main(void) {
  int *p;
  int a=10;
  p=&a;

  printf("o valor de A é: %d \n",a);
  printf("o endereço de A é: %p \n",&a);
  printf("o valor de P é: %p \n",p);
  printf("o endereço de P é: %p \n",&p);

  //observe que o valor de P aponta exatamente o mesmo endereço de A. Observe que o endereço de P ainda é differente , mesmo tendo o mesmo valor do endereço de A//
  return 0;
}