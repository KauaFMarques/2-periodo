#include <stdio.h>
#include <string.h>

void ler(char v[2][10]){
int i;
for (i=0;i<2;i++){
  printf("digite o nome: %d\n",i+1);
  scanf("%s",v[i]);
 }
}

void exibir(char v[][10],int t){
  int i;
  for (i=0;i<2;i++){
  printf("Nome:%s ,linha: %d\n",v[i],i+1);
  }
}

int main (void){
  char nome[2][10];
  ler(nome);
  exibir(nome,2);
  
return 0;
}