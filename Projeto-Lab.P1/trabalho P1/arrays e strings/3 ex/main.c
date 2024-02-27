#include <stdio.h>

main(){

char nome[10];

printf("Digite o seu nome: \n ");
gets(nome);

printf("Olá %s, ", nome);

return 0;
}