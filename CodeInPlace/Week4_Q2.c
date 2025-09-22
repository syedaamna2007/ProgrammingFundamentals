// NAME: SYEDA AMNA HASNAIN
//ROLL. NO: CT-164
// Interactive Challenge 2:
#include <stdio.h>
 int main(){
 	
 	printf(" TRIANGLE TYPE IDENTIFIER!\n\n");
 	
	float A, B, C; // declaring float variables.
	
	printf("The length of side A is:"); // to get input for side 1
	scanf("%f",&A);
	
	printf("The length of side B is:"); // to get input for side 2
	scanf("%f",&B);
	
	printf("The length of side C is:"); // to get input for side 3
	scanf("%f", &C);
	
	if (A==B==C){ // checking for condition for equilateral triangle
		printf("\nThe triangle is EQUILATERAL. (all sides equal)\n");
	}
	else if (A==C!=B || B==C!=A || A==B!=C){ // checking for condition for isoceles triangle
		printf("\nThe triangle is ISOCELES. (two sides equal)\n");
	}
	else if (A!=B!=C){ // checking for condition for scalene triangle
		printf("\nThe triangle is SCALENE. (all sides different)\n");
	}
	
	if (A+B>C || B+C>A || A+C>B){ // checking for condition for a valid triangle
		printf("\nIt is a VALID Triangle.");
	}
	return 0;
}
