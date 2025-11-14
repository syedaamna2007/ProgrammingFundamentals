#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int i;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (arr + i));   
    }
    int sum = 0;
    int *ptr = arr;  

    for (i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("Sum of all elements = %d\n", sum);
    return 0;
}
