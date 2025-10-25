#include<stdio.h>
int main(){
	int g,h,p,q;
	printf("enter the no of rows you want in matrix A: ");
	scanf("%d",&g);
	printf("enter the no of coloumns you want in matrix A: ");
	scanf("%d",&h);
	int A[g][h];
	int i, j;
	printf("Enter elements for matrix A: ");
	for (i=0; i<g;i++){
		for (j=0; j<h; j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the no of rows you want in matrix B: ");
	scanf("%d",&p);
	printf("enter the no of coloumns you want in matrix B: ");
	scanf("%d",&q);
	printf("Enter elements for matrix B: ");
	int B[p][q];
	for (i=0; i<p;i++){
		for (j=0; j<q; j++){
			scanf("%d",&B[i][j]);
		}
	}
	if (h==p){
		int C[g][q];
	int k;
	for (i=0; i<g;i++){
		for(j=0;j<q; j++){
			C[i][j]=0;
			for (k=0;k<h;k++){
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("\n resultant matrix C:\n");
	for (i=0; i<g;i++){
	for (j=0; j<q; j++){	
	printf("%d\t",C[i][j]);
	}
	printf("\n");
	}
	}
	else 
	printf("Multiplication not possible. No. of coloumns of matrix A must be equal to No. of rows of matrix B.");
	
	
	return 0;
}