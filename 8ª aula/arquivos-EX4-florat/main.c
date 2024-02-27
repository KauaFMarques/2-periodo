#include <stdio.h>

int main(void) {
  FILE *a;
  float n1,n2,media;
  a=fopen("exemplo.txt","r");
  while (fscanf(a,"%f %f",&n1,&n2)==2){
    media=(n1+n2)/2;
    if (media>=7){
      printf("Aprovado!\n");
      }
    else{
      printf("Reprovado!\n");
      }
  }
  return 0;
} 
