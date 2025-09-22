// NAME: SYEDA AMNA HASNAIN.
// ROLL.NO: CT-164
// Activity. 5 

#include <stdio.h>
int main(){
	float C; //Declaring float variable
    printf("Enter temperature in Celsius: "); //to give temprature input in celsius.
    scanf("%f", &C);
    float F;
    F = C * 9/5 + 32;
    printf("Temperature in Fahrenheit: %f\n", F);
    
    if (C>=30){ //if C is less than or equal to 30
	printf("It's hot! Stay hydrated and wear light clothes.");} //the message to be printed on above input
	
    else if (20<=C && C<=29){ //if C is between 20 to 29
	printf("Nice weather! Perfect for outdoor activities.");} //the message to be printed on above input
	
	else if (10<=C && C<=19){ //if C is between 10 to 19
	printf("Cool weather! Wear a light jacket.");} //the message to be printed on above input
	
	else if (0<=C && C<=9){ //if C is between 0 to 9
	printf("Cold! Wear warm clothes.");} //the message to be printed on above input
	
	else if (0>C){ //if C is is less than 0
	printf("Freezing! Stay indoors and bundle up.");} //the message to be printed on above input
	
	return 0; 
}