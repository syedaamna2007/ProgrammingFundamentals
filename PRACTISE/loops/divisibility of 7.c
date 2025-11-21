#include <stdio.h>
int main(){
	int n, x;
	printf("Enter the number of digits in your number: ");
	scanf("%d", &x);
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int a= n;
	
	for(int i=0; i<x; i++){
		int d= n % 10;
		n= (n/10) - (2*d);
		if (n==0 || n==7 || n==-7){
		printf("%d is divisible by 7.", a);
		return 0;
		}
	}
	printf("%d is not divisible by 7.", a);
	return 0;
}