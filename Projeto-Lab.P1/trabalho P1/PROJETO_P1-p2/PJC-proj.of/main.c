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
  return novo;
}

void imprime(Lista*l,Lista*g,Lista *u){
  Lista *p=l;
  Lista *t=g;
  Lista *y=u;
  FILE *e;
  e=fopen("novo.txt","w");
  while(p!=NULL && t!=NULL){
    fprintf(e,"Paciente: %s\n",y->info);
    printf("Paciente: %s \n",y->info);
    y=y->prox;
    fprintf(e,"médico: %s \n",p->info);
    printf("médico: %s \n",p->info);
    p=p->prox;
    fprintf(e,"data: %s \n",t->info);
    printf("data: %s \n",t->info);
    t=t->prox;
    printf("\n");
  }
  
}


int main(void){
  Lista*lista;
  Lista*data;
  Lista*pac;
  char r="s";
  char pessoa[50];
  char dia[15];
  char doente[15];

  printf("------------------------------------------\n");
  printf("| OLÁ SEJA BEM VINDO A CLÍNICA DJK MEDIC |\n");
  printf("------------------------------------------\n");
  
  printf("ATENDIMENTO: Segunda à sexta manhã e tarde\n\n");
  printf("\n");
  
    printf("|QUADRO MÉDICO E ESPECIALIDADES|\n");
    printf("______________\n\n");
    printf("| Dr. Roberto Amorin (Cardiologista)\n");
    printf("| Valor da consulta: R$ 350,00\n\n");
    printf("| Dr. Marcelo Duarte (Ortopedista)\n");
    printf("| Valor da consulta: R$ 250,00\n\n");
    printf("| Dra. Iara Thalyta (Pediatra)\n");
    printf("| Valor da consulta: R$ 200,00\n\n");
    printf("| Dr. Damião da Silva (Neurologista)\n");
    printf("| Valor da consulta: R$ 300,00\n\n");
    printf("| Dra. Fabiana Santos (Nutricionista)\n");
    printf("| Valor da consulta: R$ 150,00\n\n");
    printf("Agende sua consulta preenchendo os campos abaixo.\n\n");


  lista=criar();
  while(r!='n'){
    printf("Informe o nome do paciente: ");
    scanf("%s",&doente);
    pac=insere(pac,doente);
    printf("Qual médico deseja ser atendido?: ");
    scanf("%s",&pessoa);
    lista=insere(lista,pessoa);
    printf("Qual o dia deseja ser atendido?: ");
    scanf("%s",&dia);
    data=insere(data,dia);
    setbuf(stdin,NULL);
    printf("\nDeseja continuar o agendamento?\n");
    printf("Digite 's' para sim, e 'n' para não: ");
    scanf("%c",&r);
    printf("\n");
  }
  imprime(lista,data,pac);

  return 0;
}