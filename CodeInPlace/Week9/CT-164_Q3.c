//CT-164
#include <stdio.h>
int main(){
	int n, temp1=0, temp2=0; 
	printf("How many elements do you want??\n");
	scanf("%d", &n);
	int array[n];
	for (int i=0; i<n; i++){
		printf("Enter the %d number (positive numbers only): ", i+1);
		scanf("%d", &array[i]);
		if (array[i]>temp1){
		temp1=array[i];}	
	}
	for (int i=1; i<n; i++){
		if (array[i]>temp2 && array[i]!=temp1){
			temp2=array[i];
		}
	}
	
	printf("The largest number in your array is: %d\n", temp1);
	printf("The second largest number in your array is: %d\n", temp2);
	return 0;
}