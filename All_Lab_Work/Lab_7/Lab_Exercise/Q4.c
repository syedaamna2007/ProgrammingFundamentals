#include <stdio.h>
int main(){
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int A[n][n], transpose[n][n];

    printf("Enter elements of matrix A (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            transpose[j][i] = A[i][j];
        }
    }

    int symmetric = 1; 
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (A[i][j] != transpose[i][j]){
                symmetric = 0;
                break;
            }
        }
    }
    
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\nTranspose Of given Matrix:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    if (symmetric!=0)
        printf("\nMatrix is symmetric.\n");
    else
        printf("\nMatrix is asymmetric.\n");

    return 0;
}
