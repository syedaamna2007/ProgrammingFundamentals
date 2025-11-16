#include <stdio.h>
float F, T, C;
void displayinstructionToUser(){
	printf("You need to provide :\n1. Initial house cost\n2. Annual Fuel cost\n3. Annual Tax rate.\nthis program will then tell you the total cost of this house for 5 years.");
}
float total(float F,float T, float C){
	float fuel5yr= 5 * F;
	float tax1yr= T * C;
	float tax5yr= 5 * tax1yr;
	
	return fuel5yr + C + tax5yr;
}
int main(){
	void displayIntructionsTouser();
	
	printf("Enter your initial house cost: ");
	scanf("%f", &C);
	printf("Enter the annual tax rate: ");
	scanf("%f", &T);
	printf("Enter your annual fuel cost: ");
	scanf("%f", &F);
	
	int Total= total(F, T, C);
	printf("Total cost of your house after a 5 year period: %.2f",Total);
}