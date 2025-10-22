//Example 01: Find out if a person is eligible for voting or not.
#include <stdio.h> 
int main( ){ 
int age; 
printf("Enter your age:"); 
scanf("%d",&age); 
if(age >=18) 
printf("You are eligible for voting.");
else if (age<=0)
printf("Invalid Input!! Age cannot be negative.");
else 
printf("You are not eligible for voting."); 
return 0; 
} 