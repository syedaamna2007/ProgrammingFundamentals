#include <stdio.h>
int main(){
    int arr[3][3];
    int sum = 0;

    printf("ENTER ELEMENTS OF YOUR MATRIX (3X3):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        sum += arr[i][i]; 
    }
    printf("Sum of diagonal elements = %d", sum);
    return 0;
}
