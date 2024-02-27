#include <stdio.h>

typedef struct{
  char nome[10];
  int idade;
}Pessoa;

void alteraridade(Pessoa *ponteiro){
/*  int altera;
  printf("Altere a idade: \n");
  scanf("%d",&altera);
  ponteiro->idade=altera;*/
  printf("Altere a idade: \n");
  scanf("%d",&ponteiro->idade);
}

int main(void) {
  Pessoa p;
  printf("Digite o nome: \n");
  scanf("%s",p.nome);
  printf("Digite a idade: \n");
  scanf("%d",&p.idade);
  printf("Nome: %s e idade: %d \n",p.nome,p.idade);
  alteraridade(&p);
  printf("Nome: %s e idade alterada: %d \n",p.nome,p.idade);
  return 0;

  //utiliza-se o p como . com a variável dentro da função pessoa para anexar o valor dentro da função, dps ao ser chamada usa se o & e -> para substituir o valor da idade 
}