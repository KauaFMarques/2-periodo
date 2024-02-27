#include <stdio.h>

int main( )
{

int mult[2][2][3];
int i, j, k;

for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		for (k=0;k<3;k++){
			scanf("%d",&mult[i][j][k]);
		}
		
	}	
}

for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		for (k=0;k<3;k++){
			printf("%d, ",mult[i][j][k]);
		}
		printf("\n");
	}	
	printf("\n");
}


return(0);
}