#include <stdio.h>

typedef struct{
char nome[10];
int idade;
} pessoa;

void alteraIdade(pessoa *ponteiro){
    printf(" digite um valor para alterar a idade :\n");
    scanf("%d",&ponteiro->idade);
/*
  int altera;
  printf(" digite um valor para alterar a idade :\n");
  scanf("%d",&altera);
  ponteiro->idade=altera;
*/
}

int main(void) {
  pessoa p;
  printf("digite o nome :\n");
  scanf("%s",p.nome);
  printf(" digite a idade: \n");
  scanf("%d",&p.idade);
  
  printf("Nome:%s , Idade:%d \n",p.nome,p.idade);

  alteraIdade(&p);//ele vai receber os elementos da estrutura e vai apontar os elementos da estrutura
  printf("Nome:%s , Idade alterada :%d",p.nome,p.idade);
  
  return 0;
}