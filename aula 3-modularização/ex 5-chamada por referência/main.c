#include <stdio.h>

int valores(int *a,int *b);
int main(void) {
  int n1;
  int n2;

  n1=4;
  n2=5;

  printf("os valores da variáveis antes da chamada da função: n1= %d , n2= %d \n",n1,n2);

  valores(&n1,&n2);

  printf("os valores da variáveis depois da chamada da função: n1= %d , n2= %d \n",n1,n2);

  return 0;
}

int valores(int *a, int *b){
  *a=*a+1;
  *b=*b+1;
  printf("os valores da variáveis dentro da função: a= %d , b= %d \n",*a,*b); 
 }
// na chamada por referência os valores se alteram pois é usado a referência para substituí-lo, visto que ñ trabalamos com cópias de valores , e sim com a refência //