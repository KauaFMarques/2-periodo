#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
char nome[50];
struct pessoa *prox;
}pessoa;

pessoa*criar(){
  return NULL;
}

pessoa *insere_fim(pessoa *l, char *v){
  pessoa *novo;
  novo =(pessoa*) malloc(sizeof(pessoa));
  strcpy(novo ->nome,v);
  if(l==NULL){
  novo->prox = NULL;
  return novo;
  }else{
  pessoa *p = l;

  while(p->prox!=NULL){
  p = p->prox;
  }
  novo->prox = NULL;
  p->prox = novo;
  return l;
  }

  }
    
void imprime(pessoa *l){
  pessoa *p=l;

  while(p!=NULL){
    printf("%s",p->nome);
    p=p->prox;
  }
}
pessoa *reinserir(pessoa *inicio){
  pessoa *novo=(pessoa *)malloc(sizeof(pessoa));
  pessoa *p = inicio;
  pessoa *aux = inicio ->nome;
  strcpy(novo->nome,aux);
  
   if (inicio == NULL){
    novo ->prox = NULL;
    return novo;
    
  }else{
    pessoa *p = inicio;

    while(p->prox != NULL){
      p = p->prox;
    }
    novo ->prox = NULL;
    p->prox = novo;
    inicio = inicio ->prox;
    return inicio;
  }
}


  
int main(void){
pessoa*lista;
  int valor;
  char pes[50];
  
  lista = criar();

  while(valor!= 0){
    printf("BEM VINDO AO CLUBE DO CAFÉ\n");
    printf("\n");
    printf("Escolha uma das opções abaixo\n\n"
"1 - Inserir novo contribuinte\n"
"2 - Informar próximo membro a contribuir\n"
"3 - Imprimir lista completa\n"
"0 - Sair\n");
    printf("\n");
    scanf("%d",&valor);
    setbuf(stdin,NULL);
    switch(valor){
      case 1:
      printf("\n");  
      printf("Insira um novo contribuinte\n\n");
      fgets(pes,sizeof(pes),stdin);
      lista = insere_fim(lista,pes);
      printf("\n");
      printf("novo contribuinte adicionado\n\n");
      break;
      case 2:
      printf("O proximo contribuinte a contribuir será:\n\n");
      printf(lista);
      printf("\n");
       lista=reinserir(lista);
      
      break;
      case 3:
     imprime(lista);
     printf("\n");
     break;
      default:
      printf("Sair");
    }
    
    }
 
 

 return 0;       
  }