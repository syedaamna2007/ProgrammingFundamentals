// CT-164
// Write a program in which user enters his NTS and F.Sc marks and your program will help student in selection of university.
#include <stdio.h>
int main(){
	
	float f, n;
	char c;
	printf("Emter your marks in Fsc. : ");
	scanf("%f", &f);
	
	printf("Emter your marks in NTS : ");
	scanf("%f", &n);
	
	if (f>70 && n>70) c=1;
	else if (f>70 && n>60) c=2;
	else if (f>70 && n>50) c=3;
	else if (f>=60 && f<=70 && n==50) c=4;
	else if (f>=50 && f<=59 && n==50) c=5;
	else if (f>40 && f<50 && n==50) c=6;
	
	switch(c)
	{
	case 1: { printf("You are selected in OXFORD for IT Department.");
	}break;
	case 2: { printf("You are selected in OXFORD for Electronics Department.");
	}break;
	case 3: { printf("You are selected in OXFORD for Telecommunication Department.");
	}break;
	case 4: { printf("You are selected in MIT for IT Department.");
	}break;
	case 5: { printf("You are selected in MIT for Chemical Department.");
	}break;
	case 6: { printf("You are selected in MIT for Computer Department.");
	}break;
	default: { printf("Sorry! Your marks donot lie in our eligibilty criteria.");
	}
	}
} 