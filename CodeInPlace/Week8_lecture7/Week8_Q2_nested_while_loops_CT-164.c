//Roll. no: CT-164
#include <stdio.h>
int main(){
	int i,j;
	i=1;
	while (i<=5){
		j=1;
		while (j<=12){
			printf ("%d x %d = %d\n", i, j, i*j);
			j++;
		}
		printf("\n");
		i++;
	}
}