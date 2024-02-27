#include <stdio.h>

int soma(int a,int b);

int leitura(void){
  int a,b,c;
  scanf("%d %d",&a,&b);
  printf("a soma de %d com %d resulta: %d",a,b,soma(a,b));
  return 0;
}

int soma(int a,int b){
  return a+b;
}

int main(void) {
 leitura(); 
}