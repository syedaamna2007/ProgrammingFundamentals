#include <stdio.h> 
int main ( ){
	int stop, next;
	printf("Enter ending value:");
	scanf("%d",&stop); 
	for(next = 0 ; next <= stop ; next=next+1){
		printf("%d\t", next);
	} 

return 0; 
} 
