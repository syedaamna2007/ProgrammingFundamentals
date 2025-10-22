//Roll.no: CT-164
// Nested loop Q.1
#include <stdio.h>
int main(){
	int i,j;
	for (i=1; i<=3; i++){
		for (j=1; j<=i; j++){
			printf ("*");
		}
		printf("\n");
	}
	return 0;
}