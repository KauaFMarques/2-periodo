#include <stdio.h>
#include <stdlib.h> //biblioteca necessária

int * pt; //declaração do ponteiro para armazenar o endereço do bloco alocado
 
pt = (int *) malloc(10*sizeof(int)); //chamada da função malloc para reservar espaço para 10 elementos do tipo int
 
if (pt == NULL)
{
   //memória insuficiente
}
else
{
    pt = (int *) realloc(pt, 10*sizeof(int)); //chama a função realloc para reservar espaço para mais 10 elementos
 
    if (pt == NULL)
    {
      //memória insuficiente
    }
}
 
free(pt); //chama a função free para liberar o bloco indicado por pt
pt = NULL; //atribui NULL para indicar que o ponteiro não tem um endereço válido