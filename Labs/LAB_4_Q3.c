// CT-164
// this program takes marks as input and prints the grade. (it works using conditional statements (ladder else-if))

#include <stdio.h>
int main(){
	float marks;
	
	printf("Enter your marks: ");
	scanf("%f", &marks);
	
	if (marks>=90){
		printf ("Your grade is A.");
	}
	else if (marks>=80){
		printf ("Your grade is B.");
	}
	else if (marks>=70){
		printf ("Your grade is C.");
	}
	else if (marks>=60){
		printf ("Your grade is D.");
	}
	else if (marks>=50){
		printf ("Your grade is E.");
	}
	else if (marks>=40){
		printf ("Your grade is F.\nSorry! You FAILED the exam.");
	}
	else {
		printf("Your grade is F.\nSorry! You FAILED the exam.");
	}
	return 0;
}