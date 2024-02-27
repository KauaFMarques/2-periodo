#include <stdio.h>

int main(void) {

  int x=2;
  int y=8;
  int *p=&x;
  int *q=&y;

  printf("o endereço de x é: %p \n",&x);
  printf("o valor de x é: %d \n",x);
  
  printf("o valor de P é: %d \n",p);
  printf("o valor de *P é: %d \n",*p);

  printf("o endereço de y é: %p \n",&y);
  printf("o valor de y é: %d \n",y);
  
  printf("o valor de q é: %d \n",q);
  printf("o valor de *q é: %d \n",*q);

  printf("o endereço de p é: %p \n",&p);
  printf("o endereço de q é: %p \n",&q);
  return 0;
}
/*Crie as variáveis x e y e os ponteiros p e q. Atribua o valor 2 a x e 8 a y, o endereço de x para p e o endereço de y para q. Depois, imprima os seguintes resultados:                                                                        a) o endereço de x e o valor de x;                                                 b) o valor de p e o valor de *p;                                                   c) o endereço e o valor de y;                                                      d) o valor de q e o valor de *q;                                                  e) o endereço de p e o endereço de q.*/ 