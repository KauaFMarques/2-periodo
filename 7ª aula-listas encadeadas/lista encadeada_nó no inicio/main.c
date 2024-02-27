#include <stdio.h>
#include <stdlib.h>

typedef struct{
int info;
struct Lista *prox;
}Lista;

Lista *inserir(Lista*no,int i){
  if(no==NULL){
  no=(Lista *)malloc(sizeof(Lista));
  no->info=i;
  no->prox=NULL;
  return no;
  }else{
    Lista *novo;
    novo=(Lista *)malloc(sizeof(Lista));
    novo->info=i;
    novo->prox=no;
    return novo;
  }
}

int main(void) {
/*
inicio->(inofrmação|PONTEIRO)->(inofrmação|PONTEIRO)....
(inofrmação|PONTEIRO)->NULL
*/
  Lista *inicio=NULL;
  
  if(inicio==NULL){//a lista está vazia 
    inicio=inserir(inicio,100);
//    printf("o valor é : %d ",inicio->info);
    
  }
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
//https://www.youtube.com/watch?v=mlBkWbpDl98