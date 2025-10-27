//Roll.no:CT-164
#include <stdio.h>
int main(){
	int n;
	printf("How many elements do you want??\n");
	scanf("%d", &n);
	int array[n];
	for (int i=0; i<n; i++){
		printf("Enter the %d number: ", i+1);
		scanf("%d", &array[i]);
		printf("\n");
	}
	int rev[n];
	for (int i=0; i<n; i++){
		rev[i]=array[n-i-1];
	}
	printf("The reverse of your array is: {");
	for (int i=0; i<n; i++){
		printf("%d", rev[i]);
		if (i<n-1){
			printf(", ");
		}
	}
	printf("}");
	return 0;
}