#include<stdio.h>
int main(){
	int n;
	long long int fact=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	int t=n;
	
	if (n<0){
		return 0;
	}
	else if (n==0 || n==1){
		printf("The factorial of %d is 1.\n", n);
		printf("%d!=1",n);}
	else if (n>20){
		printf("Error: Value is too large to be stored.\nplease select a number from 0 to 20");
	}
	else {
		while(t>=2){
			fact *= t;
			t=t-1;
		}
		printf("Factorial of %d is %llu.\n", n, fact);
		printf("%d!=%llu",n,fact);
		return 0;
	}
}