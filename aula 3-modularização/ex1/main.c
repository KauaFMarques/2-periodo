#include <stdio.h>

int soma(int a,int b){
  int c=a+b;
  return c;
}
int main(void) {
  int a,b,c;
  scanf("%d %d",&a,&b);
  printf("a soma de %d com %d resulta: %d",a,b,soma(a,b));
  return 0;
}