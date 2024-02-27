#include <stdio.h>
#include <stdlib.h>

typedef struct{
int info;
struct Lista *prox;
}Lista;

Lista *inserir(Lista*inicio,int i){
  inicio=(Lista *)malloc(sizeof(Lista));
  inicio->info=i;
  inicio->prox=NULL;
  return inicio;
}

int main(void) {
/*
inicio->(inofrmação|PONTEIRO)->(inofrmação|PONTEIRO)....
(inofrmação|PONTEIRO)->NULL
*/
  Lista *inicio=NULL;
  
  if(inicio==NULL){//a lista está vazia 
  
    
  }
  return 0;
}