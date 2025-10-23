#include <stdio.h> 
int main( ){
	int number=0, count =0; 
	printf("Enter a number:")
	scanf("%d",&number); 
	while (number != 0){
		number = number/10; 
        count = count + 1;  
	}
	printf("The number of digits are: %d", count);  
	return 0;
}