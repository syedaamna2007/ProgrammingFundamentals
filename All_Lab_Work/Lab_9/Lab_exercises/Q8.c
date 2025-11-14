#include <stdio.h>
void swaped(int *aPtr, int *bPtr, int *cPtr){
    int temp;
    temp = *bPtr;
    *bPtr = *aPtr;
    *aPtr = *cPtr;
    *cPtr = temp;
}

int main() {
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Enter value of c: ");
    scanf("%d", &c);

    printf("\nBefore swapping:\n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    swaped(&a, &b, &c);

    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return 0;
}
