#include <stdio.h>
int main() {
    int i, j, r;
    for (int r = 1; r <= 2; r++) 
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); 
    }
    return 0;
}