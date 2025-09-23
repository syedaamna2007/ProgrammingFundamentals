// NAME: SYEDA AMNA HASNAIN
// ROLL.NO: CT-164
// ACTIVITY.3: EVEN / ODD NUMBER CHECKER
#include <stdio.h>
int main(){
	int n ;
	printf("Enter a number:");
	scanf("%d",&n);
	
	if (n%2== 0){ // if the remainder of given number when divided by 2 is 0
		printf("The given number is an EVEN NUMBER!");} // the given number will be zero
	else { // otherwise
	    printf("The given number is an ODD NUMBER!");} // the given number is odd
    return 0;
}