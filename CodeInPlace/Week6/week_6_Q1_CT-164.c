//Roll. no: CT-164
//Write a C program to implement a simple calculator using a switch statement.

#include <stdio.h>
int main() {
    int num1, num2; //numbers must be int as given in question
    char op; //because we use char for special characters.

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): "); //using % sign twice because using it only once might cause issues while compilation because we use that for marking format specifiers in print and scan statements)
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (op) {
        case '+':
            printf("Answer: %d\n", num1 + num2);
            break;
        case '-':
            printf("Answer: %d\n", num1 - num2);
            break;
        case '*':
            printf("Answer: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0)
                printf("Error: Division by zero.\n"); //cannot be handled by a simple calculator
            else
                printf("Answer: %d\n", num1 / num2);
            break;
        case '%':
            if (num2 == 0)
                printf("Error: Modulus by zero\n");  //cannot be handled by a simple calculator
            else
                printf("Answer: %d\n", num1 % num2);
            break;
        default:
            printf("Invalid operator\n"); 
    }

    return 0;
}
