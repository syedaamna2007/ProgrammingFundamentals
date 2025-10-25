//CT-164
//You must have seen the question before deleting anything like “Are you sure to delete [Y/y] / [N/n] ? Create a program that asks for this question if user enters Y or y it prints “Deleted successfully”. If the user enters N or n it prints “Delete cancelled” otherwise it prints choose the right option using switch statement
#include <stdio.h>
int main(){
	char d;
	
	printf("Are you sure to delete? (Enter Y or  for yes and N or n for no): ");
	scanf(" %c", &d);
	
	switch(d){
		case 'y' : case 'Y': printf ("Deleted successfully."); break;
		case 'n' : case 'N': printf ("Delete cancelled"); break;
	default: printf ("INVALID RESPONSE! Please respond in Y or y for yes or N or n for no");
	
	}
	
}