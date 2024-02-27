#include <stdio.h>

int main(void) {
  int vetor[5]={1,2,3,4,5};
  int *p=vetor;
  //ele vai apontar  o valor vetor[0]
  printf("%d \n",*p);
  printf("%d \n",*(p+3));   printf("%d \n",p[3]);
  return 0;
}