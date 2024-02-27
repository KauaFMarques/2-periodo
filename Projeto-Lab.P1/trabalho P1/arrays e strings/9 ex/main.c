#include <stdio.h>
#include <string.h>

int compara(char v1[],char v2[]){
  int r;
  r=strcmp(v1,v2);

return r;
}

int main(void){
int v;
char nome[10];
char sobrenome[10]="maria";

scanf("%s",nome);

if(compara(nome,sobrenome)==0){
  printf("são iguais");
}else{
printf("não são iguais.");
}
  
return 0;
}