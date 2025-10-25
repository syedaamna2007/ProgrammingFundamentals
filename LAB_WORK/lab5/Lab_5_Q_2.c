#include <stdio.h>
int main(){
	int d, sd;
	
	printf("Choose your department (Enter 1 for Computer Science, 2 for Electrical Engineering) :");
	scanf("%d", &d);
	
	switch (d)
	{
	case 1: {
		printf("You have chosen Computer Science.");
		printf("Now choose a sub-department (Enter 1 for AI, 2 for CYS, 3 for DS, 4 for gaming and animation):");
		scanf("%d", &sd);
		switch (sd){
		case 1: printf("You have chosen AI"); break;
		case 2: printf("You have chosen CYS"); break;
		case 3: printf("You have chosen DS"); break;
		case 4: printf("You have chosen Gaming and Animation"); break;
		default: printf("INVALID INPUT!!");}
		break;
	}
	case 2: {
	    printf("You have chosen Electrical Engineering"); break;
		default:printf("INVALID INPUT!!");
    }}
}