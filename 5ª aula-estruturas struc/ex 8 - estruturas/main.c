#include <stdio.h>
#include <string.h>

typedef struct {
  int matricula;
  char nome[10];
}aluno;


void ler(aluno a){
}


int main(void) {
  aluno alunos[2];
  int i;
  for(i=0;i<2;i++){
    printf("digite o nome e a matrícula do aluno %d \n",i+1);
    setbuf(stdin,NULL);
    fgets(alunos[i].nome,sizeof(alunos[i].nome),stdin);
    scanf("%d",&alunos[i].matricula);
  }
  for(i=0;i<2;i++){
    printf("Nome:%s e  matrícula: %d do aluno:%d\n",alunos[i].nome,alunos[i].matricula,i+1);
  }
  return 0;
}