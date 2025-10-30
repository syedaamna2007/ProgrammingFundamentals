#include <stdio.h>
int main(){
	int n, d=0;
	float sum=0;
	printf("How many numbers do you want to enter?\n");
    scanf("%d", &n);
    if (n>0){
	int arr[n];
	int i;
	for(i = 0; i<n; i++){
		printf("\nEnter number %d: ", i + 1);
		scanf("%d", &arr[i]);
		if (arr[i]>0){
			sum+=arr[i];
			d++;
		}
	}
}
    else {
    	printf("INVALID INPUT!!");
    	return 0;
	}
	float avg= sum/d;
	printf("\nthe sum of the positive numbers is: %.0f\n", sum);
	printf ("the averge of the positive numbers is: %.2f", avg);
	return 0;
}