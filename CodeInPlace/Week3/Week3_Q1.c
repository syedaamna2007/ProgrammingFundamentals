// NAME: SYEDA AMNA HASNAIN.
// ROLL.NO: CT-164
// Activity 1: Temperature Converter
#include <stdio.h>
int main() {
    // TO ENTER INPUT IN CELSIUS
    float C;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);

    float F;
    // FORMULA FOR CONVERSION
    F = C * 9 / 5 + 32;
    
    // CONVERSION
    printf("Temperature in Fahrenheit: %.2f\n", F);
    
    // For 100C = 212F 
	// For 0C = 32F
	// For -40C = -40F
	return 0;
}