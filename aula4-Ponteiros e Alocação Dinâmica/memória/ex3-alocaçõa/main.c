#include <stdio.h>

int main(void) {
  char *nomes[]={"maria","pedro","marta"};
  char **p;
  p=nomes;
  printf("%s\n",*p);
  //p -> nome -> string

  while (*p){
    printf("%s\n",*p);
    *p++;
  }
  return 0;
}