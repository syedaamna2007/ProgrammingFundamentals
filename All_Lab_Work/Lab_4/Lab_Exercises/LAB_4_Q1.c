// CT-164
// Write a C program to input a character from user and check whether given character is small alphabet, capital alphabet, digit or special character, using if else. 

#include <stdio.h>
int main(){
	char c;
	
	printf("Enter a character: ");
	scanf("%c", &c);
	
	if (c>='a' && c<='z'){
		printf("The given character is a small alphabet.");
	}
	
	else if (c>='A' && c<='Z'){
		printf("The given character is a capital alphabet.");
	}
	
	else if (c>='0' && c<='9'){
		printf("The given character is a digit.");
	}
	else{
		printf("The given character is a special character.");
	}

	return 0;
}
	
