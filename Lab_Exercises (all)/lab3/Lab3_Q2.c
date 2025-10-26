#include <stdio.h>
int main() {
    float sal, tr, ta, st;

    printf("Enter your salary: ");
    scanf("%f", &sal);
	printf("Enter tax rate (in percentage): ");
    scanf("%f", &tr);

    ta = (sal * tr) / 100;
    st = sal-ta;

    printf("Tax to pay: %.2f\n", ta);
    printf("Salary after tax: %.2f\n", st);

    return 0;
}
