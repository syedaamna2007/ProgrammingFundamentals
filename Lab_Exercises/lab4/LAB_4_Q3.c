//CT-164
//An online shopping store is providing discounts on the items due to the Eid. If the cost of items is more than 1999 it will give a discount upto 50%. If the cost of shopping is 2000 to 4000, a 20% discount will be applied. If the cost of shopping is 4001 to 6000, a 30% discount will be applied.If it's more than 6000 then 50% discount will be applied to the cost of shopping. Print the actual amount, saved amount and the amount after discount. 
#include <stdio.h>
int main(){
	float a, c, d; // declaring float variables, c for original amount, d for the amount saved, a for amount payable after discount.
	
	printf("The cost of the items is: Rs. ");
	scanf("%f", &c);
	
	if (c<= 1999){
		printf("NO DISCOUNTS APPLICABLE!");
	}
	else if (c>=2000 && c<=4000){
		d= c*0.2;  //using c for original amount, d for the amount saved.
		a=c-d;     //using a for amount payable after discount.
		printf("\nYour original amount  was: %.2f Rs.", c);
		printf("\nYour amount payable after discount is: %.2f Rs.", a);
		printf("\nThe amount you saved is: %.2f Rs.", d);
	}
	else if (c>4000 && c<=6000){
		d= c*0.3;   //using c for original amount, d for the amount saved.
		a=c-d;      //using a for amount payable after discount.
		printf("\nYour original amount  was: %.2f Rs.", c);
		printf("\nYour amount payable after discount is: %.2f Rs.", a);
		printf("\nThe amount you saved is: %.2f Rs.", d);
	}
    else if (c>6000){
		d= c*0.5;  //using c for original amount, d for the amount saved.
		a=c-d;     //using a for amount payable after discount.
		printf("\nYour original amount  was: %.2f Rs.", c);
		printf("\nYour amount payable after discount is: %.2f Rs.", a);
		printf("\nThe amount you saved is: %.2f Rs.", d);
	}
	return 0;
}
	