#include <stdio.h>
int main(){
	double m, b=0, d, t, f;
	
	printf("Enter the MBs of Internet you have used: ");
	scanf("%lf", &m);
	
	if (m<0){
		printf("Error! Your input must not be negative");
	}
	if (m>=0){
	if (m<= 100){
	b=m*2;
	printf("Your internet bill is Rs.%.2lf (exclusive of service tax)", b);
	}
	else if (m>100 && m<= 200){
	    d=m-100;
	b=200+(d*1.5);
	printf("Your internet bill is Rs.%.2lf (exclusive of service tax)", b);
	}
	else if (m>200 && m<= 400){
	    d=m-200;
	b=200+ (1.5*100)+(d*1);
	printf("Your internet bill is Rs.%.2lf (exclusive of service tax)", b);
	}
	else if (m> 400){
	    d=m-400;
	b=200+ (1.5*100)+200+ (d*0.5);
	printf("Your internet bill is Rs.%.2lf (exclusive of service tax)", b);
	}}
	
	t=b*0.1;
	f=b +t;
	printf("\nThe total amount payable for internet bill is Rs. %.2lf (inclusive of service tax)", f);
	return 0;
}
	
	