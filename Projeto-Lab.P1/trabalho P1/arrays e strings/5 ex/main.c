#include <stdio.h>
#include <string.h>

int main(void){
char nome[10];
char sobrenome[10]="oliveira";

strcpy(nome,sobrenome);
printf("%s",nome);

return 0;
}