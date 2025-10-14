#include <stdio.h>
int main(){
	printf("Fabionacci series upto 1000:\n");
	int n1=0, n2=1, n3=0,i, sum=0;
	
	for(i=2; ; i++){
		n3=n1+n2;
		if (n3 < 0 || n3>1000) {
		break;
	}
		printf ("%d ", n3);
	if (n3%3==0 && n3%5==0 && n3%7==0){
			sum+=n3;
		}
		n1=n2;
		n2=n3;
	}
	if (sum!=0){
		printf("\nsum of numbers in series divisible by 3, 5 and 7: %d",sum);
	}
	else {
		printf("\nsum of numbers in series divisible by 3, 5 and 7: 0");
	}
	return 0;
}