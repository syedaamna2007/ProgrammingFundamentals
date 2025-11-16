#include <stdio.h>
int h, a;
float volumeCal(){
	float V;
	V= a*a*h*(1.0/3.0);
	return V;
}
float getData(int h, int a){
	float volume= volumeCal();

	return volume;
}
void main(){
	printf("Enter the value of 'a' (base): ");
	scanf("%d", &a);
	printf("Enter the value of 'h' (height): ");
	scanf("%d", &h);
	float V= getData(h,a);
	printf("The volume is: %.2f", V);
}