#include <stdio.h>
#include <stdlib.h>

typedef struct{
int info;
struct Lista *prox;
}Lista;

Lista *inserir(Lista*inicio,int i){
  Lista *novo;
  novo=(Lista *)malloc(sizeof(Lista));
  novo->info=i;
  
  if(inicio==NULL){
  novo->prox=NULL;
  return novo;
  }else{
    Lista * pont=inicio;

    while(pont->prox!=NULL){
      pont=pont->prox;
    }
    novo->prox=NULL;
    pont->prox=novo;
    return inicio;
  }
}

int main(void) {
/*
inicio->(inofrmação|PONTEIRO)->(inofrmação|PONTEIRO)....
(inofrmação|PONTEIRO)->NULL
*/
  Lista *inicio=NULL;
  
    inicio=inserir(inicio,100);
    inicio=inserir(inicio,200);
    inicio=inserir(inicio,300);

    Lista *p;
    p=inicio;
  
  while(p!=NULL){
    printf("o valor é : %d \n",p->info);
    p=p->prox;
  }
    inicio=inserir(inicio,400);
    printf("o valor é : %d \n",inicio->info);

  p=inicio;
  while(p!=NULL){
    printf("o valor é : %d \n",p->info);
    p=p->prox;
  }
  return 0;
}