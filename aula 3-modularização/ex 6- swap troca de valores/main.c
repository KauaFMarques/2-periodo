#include <stdio.h>

int main(void) {
  int n1;
  int n2;

  n1=4;
  n2=5;

  swap(&n1,&n2);

}

int swap(int *a, int *b){
  int an;
  an=*a;
  *a=*b;
  *b=an;
  printf("os valores da variáveis dentro da função: a= %d , b= %d \n",*a,*b); 
 }