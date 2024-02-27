#include <stdio.h>

int main(void) {
  char *nomes[]={"maria","pedro","marta"};
  //temos 3 ponteiros e cada um vai apontar para uma string nesse vetor
  char **p;//este ponteiro vai apontar para os ponteiros do vetor nomes
  p=nomes;
//  printf("%s",*p);//p->nomes->{strings}

// exibir tds os strings
  while(*p){
    printf("%s\n",*p);
    p++;
  }
  
  return 0;
}