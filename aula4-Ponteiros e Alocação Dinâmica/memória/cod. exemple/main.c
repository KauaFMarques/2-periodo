#include <stdio.h>
#include <stdlib.h> //biblioteca necessária

int main(void) {
  int *p;
  p = (int *) malloc(sizeof(int)); 

// sizeof retorna o tamanho em bytes de um inteiro, o retorno do ponteiro void é convertido para o tipo inteiro

  if (!p){
    printf("Erro");
  }else{
    printf("Memória alocada");
  }

free(p);

  return 0;
}