// NAME: SYEDA AMNA HASNAIN
// ROLL.NO: CT-164
// Activity. 4
#include <stdio.h>
int main(){
	float D, N, div;
	printf("Enter the DENOMINATOR:");
	scanf("%f", &D);
	
	if (D==0){
	    printf("ERROR!!");}
	else {
		printf("Enter the NUMERATOR:");
	    scanf("%f", &N);
	    div= N/D;
		printf("Your required answer is: %f",div);}
	return 0;
	
} 