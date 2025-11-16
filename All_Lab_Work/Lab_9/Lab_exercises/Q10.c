#include <stdio.h>
int main(){
    float arr[20];
    printf("ENTER 20 NUMBERS OF YOUR CHOICE: ");
    for (int i=0; i<20; i++){
    	scanf("%f", &arr[i]);
	}
	float *ptr= &arr[0];
	float h1,h2, temp=0;
	if(*ptr> *(ptr+1)){
		h1=*ptr;
		h2=*(ptr+1);
	}
    else{
    	h1= *(ptr+1);
    	h2= *ptr;
	}
	for (int i=2; i<20; i++){
		if (*(ptr + i)>h1){
			temp=h1;
			h1= *(ptr + i);
			h2= temp;
		}
		else if (*(ptr + i)<h1 && *(ptr + i)>h2){
			h2= *(ptr + i);
		}
	}
	printf("Second highest (float type) number: %.2f", h2);
	return 0;
}