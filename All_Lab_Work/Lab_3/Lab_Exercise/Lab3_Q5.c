#include <stdio.h>
int main(){
    float principal, rate, time, simpleInterest;

    printf("Enter Principal amount (between Rs. 100 and Rs. 1,000,000): ");
    scanf("%f", &principal);
    (principal < 100 || principal > 1000000) 
        ? (printf("Invalid Principal! Please enter a value between Rs. 100 and Rs. 1,000,000.\n"), exit(0))
        : 0;
    printf("Enter Rate of Interest (between 5%% and 10%%): ");
    scanf("%f", &rate);
    (rate < 5 || rate > 10)
        ? (printf("Invalid Rate! Please enter a value between 5%% and 10%%.\n"), exit(0))
        : 0;
    printf("Enter Time period in years (between 1 and 10 years): ");
    scanf("%f", &time);
    
    (time < 1 || time > 10)
        ? (printf("Invalid Time! Please enter a value between 1 and 10 years.\n"), exit(0))
        : 0;

    simpleInterest = (principal * rate * time) / 100;

    printf("\n Simple Interest = %.2f\n", simpleInterest);
    printf("Total Amount after %.0f years = %.2f\n", time, principal + simpleInterest);

    return 0;
}
