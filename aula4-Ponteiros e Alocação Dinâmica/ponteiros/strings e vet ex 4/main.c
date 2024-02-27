#include <stdio.h>

void vetor(int *v){
  while (*v){
    printf("%d, \n",*v);
    v++;
  }
  /*while (*v<sizeof(v)){
    printf("%d, \n",*v);
    v++;

    POR ALGUM MOTIVO O PROF FEZ DESSES JEITO E Ñ DEU CERTO ,POIS SEMPRE APARECE UM 0 NO FINAL. 
  }*/
}
int main(void){
  int v[5]={1,2,3,4,5};
  int *p;

  p = v;

  p=&v[2];

  printf("%d \n",*p);

  vetor(v);

  char nome [10]="Maria sá";
  char *c;
  c=nome;
  printf(" a string é referenciada por %c \n",*c);
  while (*c){
    putchar(*c);
    c++;
    //enquanto existir valor ele é incrementado na linha até aparecer o valor completo
  }
    return 0;
}