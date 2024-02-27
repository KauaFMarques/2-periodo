#include <stdio.h>

int main(void) {
  
  int a=10;
  int *p=&a;

  printf("o valor de A é: %d \n",a);
  printf("o endereço de A é: %p \n",&a);
  printf("o valor de P é: %p \n",p);
  printf("o endereço de P é: %p \n",&p);
  *p=20;// *p significa acessar a variável para quem p aponta//
  printf("o valor o valor da variável A apontada por P é: %d \n",*p);
  return 0;
}