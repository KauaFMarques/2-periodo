#include <stdio.h>
int main (){
  //Sabemos que uma cadeia de caracteres em c é um vetor. Então para declarar um array de string em C, fazemos da seguinte forma:
	char strings [5][100]; //tamanho 5
	int i;
	for (i=0;i<5;i++)
        {
        	printf ("\n\nDigite uma string: ");
        	gets(strings[i]);
        }
	printf ("\n\n\nAs strings que voce digitou foram:\n\n");
	for (i=0;i<5;i++)
                printf ("%s\n",strings[i]);
        return(0);
}