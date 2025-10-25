#include <stdio.h>
int main(){
    char username[6], password[7];
    char user[6], pass[7];
    int i, cap, small, digit;

    while (1){
        printf("Enter username (5 alphabets): ");
        scanf("%5s", username);
        for (i = 0; i < 5; i++){
            if (!((username[i] >= 'A' && username[i] <= 'Z') ||(username[i] >= 'a' && username[i] <= 'z'))) {
                printf("Username must only contain alphabets and must be 5 alphabets!\n\n");
                break;
            }
        }
        if (i != 5) continue;
        printf("Username accepted!\n");
        break;
    }

    while (1){
        cap = small = digit = 0;
        printf("Enter password (6 characters including atleast 1 capital letter, 1 small letter, 1 digit): ");
        scanf("%6s", password);
        for (i = 0; i < 6; i++){
            if (password[i] >= 'A' && password[i]<= 'Z')
                cap = 1;
            else if (password[i] >= 'a' && password[i] <= 'z')
                small = 1;
            else if (password[i] >= '0' && password[i] <= '9')
                digit = 1;
        }
        if (cap && small && digit){
            printf("Password accepted!\n");
            break;
        } else{
            printf("Password must have 1 capital letter, 1 small letter, 1 digit!\n\n");
            continue;
        }
    }
    printf("\nAccount Created Successfully!\n\n");

    while (1){
        printf("\t\t\tLOGIN\n");
        printf("Enter username: ");
        scanf("%5s", user);
        printf("Enter password: ");
        scanf("%6s", pass);

        for (i = 0; i < 5; i++) {
            if (user[i] != username[i]) break;
        }
        if (i != 5){
            printf("Wrong username! Try again.\n\n");
            continue;
        }
        for (i = 0; i < 6; i++){
            if (pass[i] != password[i]) break;
        }
        if (i != 6){
            printf("Wrong password! Try again.\n\n");
            continue;
        }
        printf("\nWelcome %s, you are now logged in!\n", username);
        break;
    }
    return 0;
}
