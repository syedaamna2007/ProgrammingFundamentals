#include <stdio.h> 
int main( ){
	int y = 5;  
	int z = 6; 
	int const *yPtr = &y; 
	printf("memory address of y: %p\n", yPtr); 
	yPtr = &z; 
	printf("memory address of z: %p\n", yPtr); 
}

