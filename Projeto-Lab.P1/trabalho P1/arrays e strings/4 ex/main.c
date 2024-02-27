#include <stdio.h>
#include <string.h>

int main(void){
char nome[10];
char sobrenome[10];
scanf("%s",sobrenome);

strcpy(nome,"maria");
printf("%s e %s",nome,sobrenome);

return 0;
}