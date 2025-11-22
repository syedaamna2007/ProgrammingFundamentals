//CT-164
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of floats: ");
    scanf("%d", &n);

    float *arr = (float*) malloc(n * sizeof(float));
    if (arr == NULL) {
        printf("SORRY! Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter float %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    free(arr); 
    return 0;
}
