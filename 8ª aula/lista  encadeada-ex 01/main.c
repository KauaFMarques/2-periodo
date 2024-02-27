#include <stdio.h>
#include <stdlib.h>

typedef struct{
int info;
struct Lista *prox;
}Lista;

Lista*criar(){
  return NULL;
}

Lista *insere(Lista*l,int v){
  Lista * novo;
  novo=(Lista*)malloc(sizeof(Lista));
  novo->info=v;
  novo->prox=l;
  return novo;
}

void imprime(Lista*l){
  Lista *p=l;

  while(p!=NULL){
    printf("o valor é: %d \n",p->info);
    p=p->prox;
  }
}

void busca(Lista*l,int p){
  Lista *pont=l;
  while(pont!=NULL){
    if(pont->info==p){
      printf("Valor encontrado!\n");
    }
    pont=pont->prox;
  }
}

int main(void){
  Lista*lista;
  char r="s";
  int valor;
  int procura;
  
  lista=criar();
  while(r!='n'){
    printf("Qual o valor a ser inserido na lista: ");
    scanf("%d",&valor);
    lista=insere(lista,valor);
    setbuf(stdin,NULL);
    printf("Continua?");
    scanf("%c",&r);
  }
  imprime(lista);

  printf("Qual o valor que está buscando?\n");
  scanf("%d",&procura);

  busca(lista,procura);
  
}