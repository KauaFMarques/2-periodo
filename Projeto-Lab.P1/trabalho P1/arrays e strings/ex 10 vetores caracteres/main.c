#include <stdio.h>
#include <string.h>

int compara(char v1[],char v2[]){
  int r;
  r=strcmp(v1,v2);

return r;
}

int main(void){
  int i;
  char nome[2][10];
for (i=0;i<2;i++){
  printf("digite o nome: %d\n",i+1);
  scanf("%s",nome[i]);
}
for (i=0;i<2;i++){
  printf("Nome:%s ,linha: %d\n",nome[i],i+1);
}
  
return 0;
}