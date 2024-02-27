#include <stdio.h>
int main(void) {
/* printf("vetores e matrizes \n");

  int tam;
  scanf("%d",&tam);
  int vet[tam];
  int i=0;

for(i=0;i<sizeof(vet)/sizeof(vet[0]);i++){
 scanf("%d",&vet[i]); 
  }
for(i=0;i<sizeof(vet)/sizeof(vet[0]);i++){
  printf("%d ",vet[i]); 
  }

  return 0;
}*/
int i,j;

int mat[2][3];
for(i=0;i<2;i++){
  for(j=0;j<3;j++){
    scanf("%d",&mat[i][j]);
  }
}

for(i=0;i<2;i++){
  for(j=0;j<3;j++){
    printf("%d ",mat[i][j]);
  }printf("\n");
}

return 0;
}