#include<stdio.h>
int main(){
	int g,h,max=0;
	printf("enter the no of rows: ");
	scanf("%d", &g);
	printf("enter the no of coloumns: ");
	scanf("%d", &h);
	printf("Enter the elements of the matrix:\n");
	int A[g][h];
	int i, j;
	for (i=0; i<g;i++){
		for (j=0; j<h; j++){
			scanf("%d",&A[i][j]);
			if (A[i][j]>max){
				max= A[i][j];
			}
		}
	}
	printf("\nThe matrix provided is:\n");
	for (i=0; i<g;i++){
	for (j=0; j<h; j++){	
	printf("%d\t", A[i][j]);
	}
	printf("\n");
	}
	printf("\nThe maximum element is: %d",max);
	return 0;
}