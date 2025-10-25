#include<stdio.h>
int main(){
	int A[3][3];
	int i, j;
	printf("Enter elements for matrix A (3X3):");
	for (i=0; i<3;i++){
		for (j=0; j<3; j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter elements for matrix B (3X3):");
	int B[3][3];
	for (i=0; i<3;i++){
		for (j=0; j<3; j++){
			scanf("%d",&B[i][j]);
		}
	}
	int C[3][3];
	int k;
	for (i=0; i<3;i++){
		for(j=0;j<3; j++){
			C[i][j]=0;
			for (k=0;k<3;k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("\n resultant matrix C:\n");
	for (i=0; i<3;i++){
	for (j=0; j<3; j++){	
	printf("%d\t",C[i][j]);
	}
	printf("\n");
	}
	
	return 0;
}