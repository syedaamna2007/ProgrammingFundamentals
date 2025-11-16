#include <stdio.h>
#include <math.h>
int main() {
    float num, rounded;
    
    printf("Enter a positive number with fractional part: ");
    scanf("%f", &num);
    
    num= num * 100;
    rounded = round(num) / 100;
    printf("Your number rounded to two decimal places would be %.2f\n", rounded);  
    return 0;
}