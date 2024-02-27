#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
char info[50];
char d[15];
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

void imprime(Lista*l,Lista*g){
  Lista *p=l;
  Lista *j=g;
  
  while(p!=NULL && j!=NULL){
    printf("médico: %s \n",p->info);
    p=p->prox;
    printf("data: %s \n",j->info);
    j=j->prox;
    
  }
}


int main(void){
  Lista*lista;
  Lista*dia;
  char r="s";
  char pessoa[50];
  char data[30];
  
  lista=criar();
  while(r!='n'){
    printf("Qual o médico deseja ser atendido?: ");
    scanf("%s",&pessoa);
    lista=insere(lista,pessoa);
    printf("Qual o dia deseja ser atendido?: ");
    scanf("%s",&data);
    dia=insere2(dia,data);
    setbuf(stdin,NULL);
    printf("Continua?");
    scanf("%c",&r);
  }
  imprime(lista,dia);
//  imprime2(dia);
}
//jjajshsbz
