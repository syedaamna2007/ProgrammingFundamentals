#include <stdio.h>
void swap(int *x, int *y){
	int temp=0;
	temp= *x;
	*x=*y;
	*y=temp;
}
int main(){
	int a, b;
	printf("ENTER THE FIRST NUMBER: ");
	scanf("%d", &a);
	printf("ENTER THE SECOND NUMBER: ");
	scanf("%d", &b);
	swap(&a,&b);
	printf("SWAPPED: \nFIRST NUMBER: %d\nSECOND NUMBER: %d", a, b);
}