#include <stdio.h>

int main(void) {
  FILE *a;
  char texto[30];
  a=fopen("exemplo.txt","r");
  while (fscanf(a,"%s",texto)!=EOF){
    printf("%s ",texto);
    // tb poderíamos usar um /n p pular linha
  }
  return 0;
}