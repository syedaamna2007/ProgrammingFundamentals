#include <stdio.h>
int main(){
    float arr[20];
    float *ptr = arr;
    int i;

    printf("Enter 20 float numbers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%f", (ptr + i));
    }

    float highest, s_highest;

    if (*ptr > *(ptr + 1)) {
        highest = *ptr;
        s_highest = *(ptr + 1);
    } else {
        highest = *(ptr + 1);
        s_highest = *ptr;
    }

    for (i = 2; i < 20; i++) {
        float current = *(ptr + i);
        if (current > highest) {
            s_highest = highest;
            highest = current;
        }
        else if (current > s_highest && current < highest) {
            s_highest = current;
        }
    }
    printf("Second highest number = %.2f\n", s_highest);
    return 0;
}
