#include <stdio.h>
#include <stdlib.h>

/*
malloc
calloc
realloc
free
*/
int main(void) {
  int *p;
  int i,t;

  scanf("%d",&t);
  //6 x quant de byte por inteiro
  //o retorno do malloc é um ponteiro do tipo void,ele aponta para um valor não primitivo
  p=(int *)malloc(6*sizeof(int));
  //p=malloc(6*sizeof(int)); esse parenteses int* é usado para converter essa função em um valor inteiro
  if(!p){
    printf("error");
    //exit(1);    foi usado pelo prof nesta linha
  }else{
    printf("alocação feita !\n");
  }

  for(i=0;i<t;i++){
    scanf("%d",&p[i]);
  }

  for(i=0;i<t;i++){
    printf("%d, ",p[i]);
  }

  p=(int *)realloc(p,2*sizeof(int));

  free(p);//liberar o espaço do primeiro bloco
  return 0;
}