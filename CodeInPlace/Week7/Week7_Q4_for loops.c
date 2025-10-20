//Roll.no: CT-164

#include <stdio.h>
int main (){
	int i,j, n;
	printf("Enter the number n= ");
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		for (j=1; j<=n; j++){
			if ((i+j)%2==0){
				printf("(%d,%d) ",i,j);
		}
	  }
    }
	return 0;
}