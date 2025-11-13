#include <stdio.h>
void inputMatrix(int rows, int col, int mat[rows][col]);
void multiply(int r1, int c1, int c2, 
              int A[r1][c1], int B[c1][c2], int result[r1][c2]);
void output(int rows, int col, int mat[rows][col]);

int main() {
    int r1, c1, r2, c2;


    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);


    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], result[r1][c2];


    printf("\nEnter Matrix A:\n");
    inputMatrix(r1, c1, A);

    printf("\nEnter Matrix B:\n");
    inputMatrix(r2, c2, B);

    multiply(r1, c1, c2, A, B, result);

    printf("\nResultant Matrix (A x B):\n");
    output(r1, c2, result);

    return 0;
}


void inputMatrix(int rows, int col, int mat[rows][col]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiply(int r1, int c1, int c2,
              int A[r1][c1], int B[c1][c2], int result[r1][c2]) {

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void output(int rows, int col, int mat[rows][col]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
