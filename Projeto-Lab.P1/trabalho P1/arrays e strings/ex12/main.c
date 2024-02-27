#include <stdio.h>
#include <string.h>

int main(void)
{
	
char senha[8] = "password";
char tentativa[10];
int retorno;

printf("Digite a entrada \n");
gets(tentativa);

retorno = strcmp(senha,tentativa);

//insira o seu código
if( retorno==0){
  printf("senha correta! ");
}

return(0);
}