#include <stdio.h>

int main(void) {
  FILE *a,*e;
  float n1,n2,media;
  a=fopen("exemplo.txt","r");
  e=fopen("novo.txt","w");
  while (fscanf(a,"%f %f",&n1,&n2)==2){
    media=(n1+n2)/2;
    fprintf(e,"%.2f",media);
    if (media>=7){
      fprintf(e," Aprovado\n");
      }
    else{
      fprintf(e," Reprovado!\n");
      }
  }
  return 0;
} 
