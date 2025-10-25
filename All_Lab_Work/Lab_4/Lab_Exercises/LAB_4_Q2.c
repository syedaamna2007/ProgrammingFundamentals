#include <stdio.h>
int main(){
	
    int num, d1, d2, d3, d4, d5, d6, d7, d8;

    printf("Enter a binary 8 bits number: ");
    scanf("%d", &num);
    
    if (num < 10000000 || num > 99999999){
	printf("Error: Please enter an 8-digit number!\n");
	}

    d1 = num / 10000000 % 10;
    d2 = num / 1000000 % 10;
    d3 = num / 100000 % 10;
    d4 = num / 10000 % 10;
    d5 = num / 1000 % 10;
    d6 = num / 100 % 10;
    d7 = num / 10 % 10;
    d8 = num % 10;
    
    if ((d1 != 0 && d1 != 1) ||(d2 != 0 && d2 != 1) ||(d3 != 0 && d3 != 1) ||(d4 != 0 && d4 != 1) ||(d5 != 0 && d5 != 1) ||(d6 != 0 && d6 != 1) ||(d7 != 0 && d7 != 1) ||(d8 != 0 && d8 != 1)) {
	   printf("Invalid Input! Enter only 0s and 1s.\n");
    
	}

    
    if (d5 == 1) d5 = 0; // 4th in binary.
    if (d2 == 1) d2 = 0; //7th in binary.
    
    int newNum = d1 * 10000000+ d2 *1000000 + d3 *100000 + d4 *10000+ d5 *1000 + d6 *100 + d7 *10 + d8;

    printf("Your New 8 digit binary number is: %d", newNum);

    return 0;
}

	