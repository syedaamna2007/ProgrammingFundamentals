//Roll.no: CT-164
#include <stdio.h>
int main(){
	int n, d, rev;
	printf("Enter a number (it must be a positive number greater than 0): ");
	scanf("%d", &n);
	while (n>0){
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("The reverse of the given number is %d", rev);
	return 0;
}