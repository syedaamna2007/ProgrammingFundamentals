#include <stdio.h>
int main(){
	int n,d,sum=0,reverse=0, i;
	printf("Enter a number with 5 digits: ");
	scanf("%d", &n);
	if (n<10000 || n>99999){
		printf("Invalid Number. Please enter a 5 digit positive number.");
		return 0;
	}
	else{
	int	temp=n;
		while (temp>0){
			d=temp%10;
			temp/=10;
			sum+=d;
			reverse=reverse*10+d;	
			}
			if (sum%2==0){
				printf("\nThe sum of digits of given number is even.\n");
			  for (i = 2; i * i <= n; i++){
			  	if (n%i==0){
					printf("The given number number is not prime.\n");
					return 0;
					}
			  }
					printf("The given number is prime.\n");
					}
			else {
				printf("The sum of digits of number is odd.\n");
				if (n==reverse){
					printf("The given number is palindrome\n");}
				else {
					printf("The given number is not palindrome.");
				}
			}
		}
		return 0;
	}
