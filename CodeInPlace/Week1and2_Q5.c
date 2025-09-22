// ROLL.NO: CT-164
// Hands On- Activity:2
// Power Converter (from Watts to KiloWatts)

#include <stdio.h>
int main(void){
	float Watts, KiloWatts; //to declare the float variables.
	
	printf("Enter power in Watts:");
	scanf("%f",&Watts); //TO INPUT POWER IN WATTS
	
	KiloWatts= Watts / 1000; //CONVERSION FORMULA
	
	printf("The power in KiloWatts is:%f",KiloWatts); //POWER IN KILOWATTS
	
	return 0; //tells OS: program executed successfully.
}