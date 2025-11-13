#include <stdio.h>
void input(int *x, int *y);      
int sum(int *x, int *y);        

int main() {
    int a, b, result;

    input(&a, &b);               

    result = sum(&a, &b);       
    printf("The sum is: %d\n", result);

    return 0;
}

void input(int *x, int *y) {
    printf("Enter first number: ");
    scanf("%d", x);

    printf("Enter second number: ");
    scanf("%d", y);
}

int sum(int *x, int *y) {
    return (*x + *y);            
}
