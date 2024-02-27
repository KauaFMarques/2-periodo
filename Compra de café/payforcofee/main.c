#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
char info[50];
struct Lista *prox;
}Lista;

Lista*criar(){
  return NULL;
}

Lista *insere(Lista*l,char *v[]){
  Lista * novo;
  novo=(Lista*)malloc(sizeof(Lista));
  strcpy(novo->info,v);
  novo->prox = l;
//  novo->info=v;
//  novo->prox=l;
  return novo;
}

void imprime(Lista*l){
  Lista *p=l;

  while(p!=NULL){
    printf("lista: %s \n",p->info);
    p=p->prox;
  }
}


int main(void){
  Lista*lista;
  char r="s";
  char pessoa[50];
  
  lista=criar();
  while(r!='n'){
    printf("Qual a pessoa a ser inserido na lista: ");
    scanf("%s",&pessoa);
    lista=insere(lista,pessoa);
    setbuf(stdin,NULL);
    printf("Continua?");
    scanf("%c",&r);
  }
  imprime(lista);
  
}