//Roll.no: CT-164
#include <stdio.h>
int main (){
	int n, sum=0,d, temp;
	printf("Enter a number (number > 0):");
	scanf("%d",&n);
	temp=n;
	do {
		d=temp%10;
		sum+=d;
		temp=temp/10;
	}
	while (temp>0);
	if(n>0){
		printf("The sum of the number provided is: %d", sum);
	}
	else{
		printf("Invalid Input!! please enter a positive number (number greater than 0).");
	}
	return 0;
}
