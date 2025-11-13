#include <stdio.h>
int sum(int a, int b) {
   int sum;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    sum = a + b;
    printf("The sum is: %d\n", sum);
    return sum;
}

int main() {
	int m,  n;
    sum(m,n);  
    return 0;
}


