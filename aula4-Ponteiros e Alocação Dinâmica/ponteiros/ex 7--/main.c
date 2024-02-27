#include <stdio.h>

int main(void) {

  int a=10;
  int *p=&a;
  int **pp=&p;
  //**pp guarda p endereço de memória do ponteiro p//

  printf("o valor de A é: %d \n",a);
  printf("o endereço de A é: %p \n",&a);
  printf("o valor de P é: %p \n",p);
  printf("o endereço de P é: %p \n",&p);
  printf("o valor o valor da variável A apontada por P é: %d \n",*p);
  printf("o valor de PP é: %p \n",pp);
  printf("o endereço de PP é: %p \n",&pp);
  printf("o valor da variável apontada por PP é: %d \n",**pp);
  // pp -> p -> a//
  return 0;
}
