#include <stdio.h>
#include <string.h>

int main(void){
int v;
char nome[10];
char sobrenome[10]=" oliveira";

scanf("%s",nome);
v=strlen(nome);
printf("o tamanho de %s é %d",nome,v);

return 0;
}