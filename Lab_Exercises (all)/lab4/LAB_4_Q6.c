#include <stdio.h>

int main() {
    float cal, f, calFromF, per;

    printf("Enter total calories: ");
    scanf("%f", &cal);

    printf("Enter fat grams: ");
    scanf("%f", &f);

    if (cal < 0 || f < 0){
        printf("Error!! Calories and fat grams cannot be less than 0.\n");
    } 
    else {
        calFromF = f * 9;

        if (calFromF > cal){
            printf("Error!! Calories from fat cannot be greater than total calories.\n");
        } 
        else {
            per = (calFromF/ cal) * 100;
            printf("Percentage of calories from fat: %.2f%%\n", per);

            if (per < 30){
                printf("This food is low in fat.\n");
            }
        }
    }

    return 0;
}
