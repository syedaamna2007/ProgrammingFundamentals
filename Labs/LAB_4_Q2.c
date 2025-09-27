// roll. no: CT-164
// This program is takes input and identifies the greater number.

#include <stdio.h>
int main(){
	int n1, n2;
	
	printf("Enter the value of first number: ");
	scanf("%d", &n1);
	
	printf("Enter the value of second number: ");
	scanf("%d", &n2);
	
	if (n1!=n2){
		printf ("First number (%d) and second number (%d) are not equal.", n1, n2);
		
		if (n1>n2){
			printf ("\nFirst number (%d) is greater than second number (%d).", n1, n2);	
		}
		
		else if (n1<n2){
			printf ("\nSecond number (%d) is greater than first number (%d).", n2, n1);	
		}
	}
	
	else {
		printf("First number (%d) and second number (%d) are equal.", n1, n2);
	}
	return 0;
}