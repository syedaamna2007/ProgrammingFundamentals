// ROLL.NO: CT-164
// Hands-On Activity: 1
//Dosage calculator that calculates patient's dosage (in mg) depending upon their weight (in kg).

#include <stdio.h>
int main(void){
	float weight , dosage; //to declare the float variables.

	printf("Enter patient's weight (in kg):");	
	scanf("%f",&weight); //TO INPUT PATIENT's WEIGHT

	dosage =weight * 0.8; //DOSAGE CALCULATION FORMULA

	printf("The dosage(mg) for patient is: %f",dosage);	//CALCULATED DOSAGE
	
	return 0; //tells OS: program executed successfully.
}