#include <stdio.h>
#include <string.h>
int main() {
    char first[20] = "Syeda Amna";
    char last[] = " Hasnain";

    strcat(first, last);
    printf("Full Name: %s", first);
    return 0;
}
