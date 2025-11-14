#include <stdio.h>
#include <string.h>

int main() {
    char first[50], last[50], full[100];

    printf("Enter your first name: ");
    gets(first); 

    printf("Enter your last name: ");
    gets(last);

    strcpy(full, first);     
    strcat(full, " ");       
    strcat(full, last);      

    int length = strlen(full);

    printf("\nFull name: %s\n", full);
    printf("Total characters: %d\n", length);

    return 0;
}
