#include <stdio.h>

int main(void) {
typedef struct
{
int matricula ;
float nota;
}tAluno;
tAluno a1 ;
tAluno *ptrAluno = &a1;
(*ptrAluno).nota;
(*ptrAluno).nota = 8.5;
ptrAluno->nota = 8.5;
printf("%d",ptrAluno->nota);
printf("%d"(*ptrAluno).nota);
  return 0;
}