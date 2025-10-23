#include<stdio.h>
int main(){
	float marks[3][3];
	int i,j, stud;
	for (i=0; i<=2; i++){
		printf("for student %d\n",i+1);
		for (j=0;j<=2; j++){
			if (j==0){
				printf("enter Programming fundamentals (PF) marks:");
				scanf("%f",&marks[i][j]);
			}
			else if (j==1){
				printf("enter applied physics (AP) marks:");
				scanf("%f",&marks[i][j]);
			}
			else if (j==2){
				printf("enter Functional English (FE) marks:");
				scanf("%f",&marks[i][j]);
			}
		}
		printf("\n");
	}
	printf("enter the student you want the marks for (respond in 1, 2 or 3):");
	scanf("%d",&stud);
	printf("The marks in PF are: %.1f\n",marks[stud-1][0]);
	printf("The marks in AP are: %.1f\n", marks[stud-1][1]);
	printf("The marks in FE are: %.1f\n", marks[stud-1][2]);

return 0;
}