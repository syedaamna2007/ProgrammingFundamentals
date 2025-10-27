//Roll.no: CT-164
#include <stdio.h>
int main(){
	int n, count;
	printf("How many elements do you want??\n");
	scanf("%d", &n);
	int array[n];
	for (int i=0; i<n; i++){
		printf("Enter the %d number: ", i+1);
		scanf("%d", &array[i]);
		if (array[i]%2==0){
			count++;
		}
		printf("\n");
	}
		printf("The even numbers in your array are: %d", count);
	
	return 0;
}