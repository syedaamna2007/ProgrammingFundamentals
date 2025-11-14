#include <stdio.h>
int main() {
    char first[50], last[50], full[100];
    int i = 0, j = 0, length = 0;

    printf("Enter your first name: ");
    scanf("%s", first);

    printf("Enter your last name: ");
    scanf("%s", last);

    while (first[i] != '\0') {
        full[i] = first[i];
        i++;
    }

    full[i] = ' ';
    i++;

    while (last[j] != '\0') {
        full[i] = last[j];
        i++;
        j++;
		}
        
    full[i] = '\0';

    for (length = 0; full[length] != '\0'; length++);

    printf("\nFull name: %s\n", full);
    printf("Total characters: %d\n", length);

    return 0;
}
