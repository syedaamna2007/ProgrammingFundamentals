//CT-164
#include <stdio.h>
int main(){
	double x=1, s=1.0;
	while (x<=100){
		s=s+(1/(4*x));
		x++;
		}
		printf("The sum will be %lf", s);
		return 0;
	}