#include<stdio.h>
int main(){
	int n, fact=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	int t=n;
	
	if (n<0){
		return 0;
	}
	else {
		while(t>=2){
			fact *= t;
			t=t-1;
		}
		printf("Factorial of %d = %d", n, fact);
		return 0;
	}
}