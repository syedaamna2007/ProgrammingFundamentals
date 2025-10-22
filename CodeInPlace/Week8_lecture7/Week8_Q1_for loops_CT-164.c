//Roll. no: CT-164
//2. Find the factorial of a number using a for loop. Hint: 5!= 5*4*3*2*1

#include <stdio.h>
int main (){
	int n, i;
	long long int f=1;
	printf("Enter a number:");
	scanf("%d",&n);
	if (n==0 || n==1){
		printf("The factorial of %d is 1.\n", n);
		printf("%d!=1",n);
	}
	else if (n<0){
		printf("Invalid Input!!\nThe factorial for %d does not exist as it is a negative number.", n);
	}
	else if (n>20){
		printf("Error: Value too large to be stored.\nplease select a number from 0-20");
	}
	else {
		for (i=1; i<=n; i++)
	{
		f*=i;
	}
	printf("The factorial for %d is %llu. \n", n, f);
	printf("%d!=%llu",n,f);
	}
	return 0;
}