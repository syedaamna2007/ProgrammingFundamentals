#include <stdio.h>

int main() {
    int  n;
    printf("Enter a number (upto 5 digits): ");
    scanf("%d", &n);
    
    if (n<0 || n>=100000){
    	printf("Error! Enter a positive number having upto 5 digits.");}
	else{
    int last = n % 10;
    int rest = n / 10;
    int result = rest - 2 * last;

    if (result == 0 || result == 7 || result == -7) {
        printf("Divisible by 7!\n");}
    
    
        last = result % 10;
        rest = result / 10;
        result = rest - 2 * last;
        
        if (result == 0 || result == 7 || result == -7) {
            printf("Divisible by 7!\n");
        }
        else {
        last = result % 10;
        rest = result / 10;
        result = rest - 2 * last;

        if (result == 0 || result == 7 || result == -7) {
            printf("Divisible by 7!\n");
            }
            else {
            
            last = result % 10;
            rest = result / 10;
            result = rest - 2 * last;

            if (result == 0 || result == 7 || result == -7) {
                printf("Divisible by 7!\n");}
            else {
				last = result % 10;
                rest = result / 10;
                result = rest - 2 * last;

                if (result == 0 || result == 7 || result == -7) {
                    printf("Divisible by 7!\n");}
                    else{
					last = result % 10;
                    rest = result / 10;
                    result = rest - 2 * last;
                     if (result == 0 || result == 7 || result == -7) {
                    printf("Divisible by 7!\n");
                }
                else {
                    printf("Not divisible by 7!\n");
                }}}
            }}}
    return 0;
}
