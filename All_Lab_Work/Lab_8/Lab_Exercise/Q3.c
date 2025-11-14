#include <stdio.h>
#include <string.h>
int main() {
	char a[50];    
	printf("Enter the first string: ");   
	fgets(a, 50, stdin);
	char b[50];    
	printf("Enter the second string: ");   
	fgets(b, 50, stdin);    
	int result = strcmp(a, b);
	if(result == 0){
		printf("Strings are equal");
	}
	else if(result < 0){
		printf("a is smaller than b");
	}
	else{
		printf("a is greater than b");
	}
	return 0;
}