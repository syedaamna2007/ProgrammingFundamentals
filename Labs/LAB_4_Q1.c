#include <stdio.h>
int main(){
	int age;
	char i;
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Do you have a valid ID? (enter in y/n):");
	scanf(" %c", &i);
	
	if (age>=18 && i=='y'){
		printf("You  are eligible for voting!");
	}
	else if (i!='y' && i!='n'){
		printf("INVALID input for ID!! please answer y for yes and n for no. No other answers are acceptable.");
	}
	else if (age<0){
		printf("INVALID input for age!!");
	}
	else {
		printf("Sorry! You are NOT eligible for voting!");
	}
	return 0;
}
