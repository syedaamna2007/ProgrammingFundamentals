#include <stdio.h>
char takesInput(){
	char i;
	printf ("Enter something (an alphabet, digit or character): ");
	scanf("%c", &i);
	return i;
}
void checks(char i){
	if (i>='A' && i<='Z')
		printf("This is an UPPERCASE LETTER.");
	else if (i>='a' && i<='z')
	    printf("This is a LOWERCASE LETTER.");
	else if (i>='0' && i<='9')
	    printf("This is a NUMBER.");
	else
	    printf("This is a SPECIAL CHARACTER.");
}
void main(){
	char ch= takesInput();
	checks(ch);
}