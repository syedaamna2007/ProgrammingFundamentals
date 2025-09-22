/ NAME: SYEDA AMNA HASNAIN
//ROLL. NO: CT-164
// Interactive Challenge 1:
#include <stdio.h>
int main(){
	
	printf("LEAP YEAR CHECKER!\n\n");
	int year; // declaring int variable
	printf ("ENTER THE YEAR: "); //to get input 
	scanf("%d", &year);
	
	if (year%400==0) { // if year is divisible by 400
		printf("IT IS A LEAP YEAR!"); // print IT IS A LEAP YEAR!
	}
	else if (year % 4 == 0 && year % 100 != 0){ //if year is divisible by 4 but not by 100
		printf("IT IS A LEAP YEAR!"); // print IT IS A LEAP YEAR!
	}
	else {
		printf("IT IS NOT A LEAP YEAR!"); //if neither of above conditions are true, print IT IS NOT A LEAP YEAR!
	}
	return 0;
}