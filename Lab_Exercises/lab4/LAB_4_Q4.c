//CT-164
//Write a C program to find all roots of a quadratic equation by using the quadratic formula; it is required to take user input for a, b and c values. 

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, disc, r1, r2, rp, ip;

    printf("Enter value of a: ");
    scanf("%f", &a);
    
    printf("Enter value of b: ");
    scanf("%f", &b);
    
    printf("Enter value of c: ");
    scanf("%f", &c);

    disc = (b * b )- (4 * a * c);

    if (disc > 0) {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("root 1 = %.2f and root 2 = %.2f\n", r1, r2);
    } 
	else if (disc == 0) {
        r1 = r2 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("root1 = root2 = %.2f\n", r1);
    } 
    else if (a==0){
    	printf("INVALID INPUT! You cannot have 0 in denominator");
	}
	else {
        rp = -b / (2 * a);
        ip = sqrt(-disc) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("root1 = %.2f+%.2fi and root2 = %.2f-%.2fi\n", rp, ip, rp, ip);
    }

    return 0;
}