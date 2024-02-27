#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
char info[10];
struct Lista *prox;
}Lista;

Lista *insere(Lista*l,char v[]){
  Lista * novo;
  novo=(Lista*)malloc(sizeof(Lista));
  strcpy(novo->info,v);
  strcpy(novo->prox,l);
  return novo;
}

void imprime(Lista*l){
  Lista *p=l;

  while(p!=NULL){
    printf("lista: %s \n",p->info);
    p=p->prox;
  }
}

int main(void) {
  Lista*lista;
  char resp[3]="sim";
  char pessoa[50];

  while(resp != "nao"){
  printf("Qual a pessoa a ser inserido na lista: ");
  scanf("%s",pessoa);
  lista=insere(lista,pessoa);
  setbuf(stdin,NULL);
  printf("Continua?");
  scanf("%s",resp);
}
  imprime(lista);
  
  return 0;
}