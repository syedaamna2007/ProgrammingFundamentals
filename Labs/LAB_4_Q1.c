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
	else {
		printf("You are NOT eligible for voting!");
	}
	return 0;
}