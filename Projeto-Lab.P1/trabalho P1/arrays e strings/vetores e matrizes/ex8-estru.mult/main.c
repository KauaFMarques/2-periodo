#include <stdio.h>

int main(void) {
/*int i,j;

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
}*/
int i,j,k;

int mul[2][2][3];
for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    for(k=0;k<3;k++){
      scanf("%d ",&mul[i][j][k]);
    }
  }
}

for(i=0;i<2;i++){
  for(j=0;j<2;j++){
    for(k=0;k<3;k++){
      printf("%d ",mul[i][j][k]);
    }printf("\n");
  }printf("\n");
}

return 0;
}