// NAME: SYEDA AMNA HASNAIN
//ROLL. NO: CT-164
// Interactive Challenge 3:
#include <stdio.h>
int main(){
	
	printf("ELECTRICITY BILL CALCULATOR!");
	
	float unit, bill; //declaring float variables.
	
	printf("Enter the amount of units consumed:"); // to get input
	scanf("%f", &unit);
	
	// using if-else statements to calculate the bill depending upon units consumed.
	if (unit<=100){
		bill= unit*5;
		printf("Your electricity bill is: %.2f Rs", bill); 
	}
	
	else if (unit>100 && unit<=200){
		bill= unit*7;
		printf("Your electricity bill is: %.2f Rs", bill);
	}
	
    else if (unit>200){
		bill= unit*10;
		printf("Your electricity bill is: %.2f Rs", bill);
	}
	return 0;
}
