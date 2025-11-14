#include <stdio.h>
int main(){
    double pi = 3.0;
    int sign = 1;
    double a = 2.0;
    int term = 1;

    int reached314 = 0, reached3141 = 0, reached31415 = 0, reached314159 = 0;
    printf("Term\tReached\n");
    while (1) {
        double fraction = 4.0 / (a * (a + 1) * (a + 2));
        if (sign == 1)
            pi = pi + fraction;
        else
            pi = pi - fraction;

        if (!reached314 && (int)(pi * 100) == 314) {
            printf("%d\t3.14\n", term);
            reached314 = 1;
        }
        if (!reached3141 && (int)(pi * 1000) == 3141) {
            printf("%d\t3.141\n", term);
            reached3141 = 1;
        }
        if (!reached31415 && (int)(pi * 100000) == 31415) {
            printf("%d\t3.1415\n", term);
            reached31415 = 1;
        }
        if (!reached314159 && (int)(pi * 1000000) == 314159) {
            printf("%d\t3.14159\n", term);
            reached314159 = 1;
        }

        if (reached314 && reached3141 && reached31415 && reached314159)
            break;

        sign = -sign;
        a = a + 2;
        term++;
    }

    return 0;
}
