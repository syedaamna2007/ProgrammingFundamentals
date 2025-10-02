#include <stdio.h>
int main(){
	int d;
	printf("Enter the no. of day (here Sunday = 1 ,Monday =2 ,Tuesday =3 ,Wednesday =4 ,Thursday =5 ,Friday =6 ,Saturday =7): ");
	scanf("%d", &d);
	
	switch(d)
	{
	case 1: printf("\nToday is Sunday."); break;
	case 2: printf("\nToday is Monday."); break;
	case 3: printf("\nToday is Tuesday."); break;
	case 4: printf("\nToday is Wednesday."); break;
	case 5: printf("\nToday is Thursday."); break;
	case 6: printf("\nToday is Friday."); break;
	case 7: printf("\nToday is Saturday."); break;
	
	default : printf("\nYour input is INVALID!!"); }
}