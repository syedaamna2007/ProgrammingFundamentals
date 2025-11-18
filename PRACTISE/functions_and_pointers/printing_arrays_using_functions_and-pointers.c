#include <stdio.h>
void printFunction(int* arr, int size){
	for (int i=0;i< size; i++){
		printf("%d ", arr[i]);
	}
	
}
int main(){
	int size;
	printf("ENTER THE SIZE OF YOR ARRAY: ");
	scanf("%d", &size);
	int arr[size];
	printf("Enter the elements of your array (integers)): ");
	for (int i=0;i<size; i++){
		scanf("%d",& arr[i]);
	}
	printFunction(arr, size);
	return 0;
}