// NAME: SYEDA AMNA HASNAIN
//ROLL. NO: CT-164
// Interactive Challenge 4:
#include <stdio.h>
int main(){
	
	printf("CHARACTER CLASSIFICATION!");
	
	char x; //declaring char variables
	
	printf("Enter a character: "); // taking input
	scanf("%c", &x);
	
	//using conditional statements to check for conditions of uppercase letter, lowercase letter, digit and special character.
	if (x>='A' && x<='Z'){
		printf("%c is an uppercase letter.\n",x);
	}
	
	else if (x>='a' && x<='z'){
		printf("%c is an lowercase letter.\n",x);
	}
	
	else if (x>='0' && x<='9'){
		printf("%c is a digit.\n",x);
	}
	else{
		printf("%c is an special character.\n",x);
	}
	return 0;
}