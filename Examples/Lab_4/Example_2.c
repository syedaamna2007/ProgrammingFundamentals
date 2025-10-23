//Example 02: Find maximum of two numbers. 
#include <stdio.h> 
int main( ){ 
int n1, n2; 
printf("Input the value of First number:"); 
scanf("%d", &n1); 
printf("Input the value of Second number:"); 
scanf("%d",&n2); 
if (n1 !=n2){
	printf("First number is not equal to Second number.\n"); 
if (n1 > n2) 
printf("First number is greater than Second number.\n"); 
else if (n2 > n1) 
printf("Second number is greater than First number.\n"); 
} 
else  
printf("First number is equal to Second number.\n");    
return 0; 
} 