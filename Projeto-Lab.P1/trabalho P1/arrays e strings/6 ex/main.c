#include <stdio.h>
#include <string.h>

int main(void){
char nome[10];
char sobrenome[10]=" oliveira";

scanf("%s",nome);
strcat(nome,sobrenome);
printf("%s",nome);

return 0;
}