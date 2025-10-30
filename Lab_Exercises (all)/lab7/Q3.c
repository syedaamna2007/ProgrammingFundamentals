#include <stdio.h>
#include <string.h>
int main() {
    char firstName[50], lastName[50], fullName[100];
    int length;
    printf("Enter your first name (donot use spaces)): ");
    scanf("%s", firstName);
    printf("Enter your last name (donot use spaces)): ");
    scanf("%s", lastName);

    strcpy(fullName, firstName);  
    strcat(fullName, " ");       
    strcat(fullName, lastName);   

    length = strlen(fullName);  

    printf("\nFull name: %s\n", fullName);
    printf("Number of characters (including space between first and last name): %d\n", length);
    return 0;
}
