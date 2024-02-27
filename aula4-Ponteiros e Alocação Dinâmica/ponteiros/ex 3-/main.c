#include <stdio.h>

int main(void) {
  
  int a=10;
  int *p=&a;

  printf("o valor de A é: %d \n",a);
  printf("o endereço de A é: %p \n",&a);
  printf("o valor de P é: %p \n",p);
  printf("o endereço de P é: %p \n",&p);
  printf("o valor o valor da variável A apontada por P é: %d \n",*p);// usas-se o * para indicar para quem o P está apontando.//

  /*nossas variáveis  possuem : 
  |tipo|nome|valor|endereço|
  */
  return 0;
}