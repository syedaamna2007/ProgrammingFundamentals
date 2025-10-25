#include <stdio.h>
#include <string.h>
int main() {
    char firstName[50], lastName[50], fullName[100];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);

    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);

    int length = strlen(fullName);
    printf("Reversed string: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", fullName[i]);
    }
    printf("\n");
    return 0;
}
