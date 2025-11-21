#include <stdio.h>
int main() {
	int n;
	printf("ENTER THE SIZE OF ARRAY: ");
	scanf("%d",&n);
	
	printf("ENTER YOUR ARRAY: ");
	int a[n];
	
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	
	int temp=0;

	printf("\n\nBefore sorting: ");
	for (int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	
	for(int i=0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if (a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\n\nAfter sorting: ");
	for (int i=0; i<n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}