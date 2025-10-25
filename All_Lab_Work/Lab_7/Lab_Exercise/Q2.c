#include <stdio.h>
int main(){
	int m,n, T=0;
	printf("enter the no of rows you want in matrix: ");
	scanf("%d",&m);
	printf("enter the no of coloumns you want in matrix: ");
	scanf("%d",&n);
	int A[m][n];
	int i, j;
	printf("Enter elements for the matrix:\n");
	for (i=0; i<m;i++){
		for (j=0; j<n; j++){
			scanf("%d",&A[m][n]);
			if (A[m][n]==0){
				T++;
			}
		}
	}
	if (T >= (m*n)/2)
	printf("The given matrix is a sparse matrix.");
	else 
	printf("The given matrix is not a sparse matrix.");
	return 0;
}
	