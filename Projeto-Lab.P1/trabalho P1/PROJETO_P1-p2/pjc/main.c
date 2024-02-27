#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct consulta{ 
  char nome[30];
  float valor;
  
  struct consulta *prox;
} Consulta;

int main(void) {

  char r = 's';
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
  while (r!='n'){
    Consulta *lista = malloc(sizeof(Consulta));
    printf("Nome do médico: ");
    scanf("%s",lista->nome);
    printf("valor da consulta: R$ ");
    scanf("%f",&lista->valor);
    printf("Deseja continuar o agendamento?: ");
    scanf("%s",&r);
    //if(r = "s")
     
    lista->prox = lista;
  }
    return 0;
  }