#include <stdio.h>
#include <string.h>

int main(void){
int v;
char nome[10];
char sobrenome[10]="maria";

scanf("%s",nome);
v=strcmp(nome,sobrenome);
printf("nome : %s é %d",nome,v);

return 0;
}