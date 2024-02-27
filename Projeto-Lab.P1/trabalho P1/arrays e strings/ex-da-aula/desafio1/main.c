#include <stdio.h>


int main(void) {


  int i,j,k;

  char nomes[2][5][10];

  float notas[2][5][2]; 

/*

  maria  marcio pedro  luana pablo

  danilo engels joao carla  marta

*/


  for (i=0;i<2;i++){

    for (j=0;j<5;j++){

      printf("Digite o nome do aluno %d da turma %d\n",j+1,i+1);

      scanf("%s",nomes[i][j]);

    }

  }


  for (i=0;i<2;i++){

    for (j=0;j<5;j++){

      printf("%s ",nomes[i][j]);

    }

    printf("\n");

  }


  for (i=0;i<2;i++){

    for (j=0;j<5;j++){

      for (k=0;k<2;k++){

        printf("Insira a nota %d do aluno %s da turma %d \n",k+1,nomes[i][j],i+1);

        scanf("%f",&notas[i][j][k]);

      }

    }

  }


  for (i=0;i<2;i++){

    printf("Turma %d\n",i+1);

    for (j=0;j<5;j++){

      printf("Nome do aluno: %s\n",nomes[i][j]);

      for (k=0;k<2;k++){

        printf("Nota %d: %0.2f\n",k+1,notas[i][j][k]);        

      }

    }

  }



  return 0;
}