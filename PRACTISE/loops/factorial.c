#include <stdio.h>
int main (){
	long long int f, fact=1;
	
	printf("ENTER A NUMBER YOU WANT FACTORIAL OF: ");
	scanf("%lld", &f);
	if (f<0){
		printf("Please enter a positive number!!");
		return 0;
	}
	else if (f==0 || f==1){
		printf("The factorial of %lld is %lld.", f, fact);
		return 0;
	}
	else{
		for(int i= f; i>=1; i--){
		fact= fact * i;
		}
		printf("The factorial of %lld is %lld.", f, fact);
	}
	return 0;
}