#include <stdio.h>
int main() {
    int hours;
    float d1=0, d2=0, d3=0, d4=0, d5=0, total_distance, avg_speed;

    printf("Enter time traveled (in hours, between 1 and 5): ");
    scanf("%d", &hours);
    printf("Enter distance covered in hour 1: ");
    scanf("%f", &d1);
    printf("Enter distance covered in hour 2: ");
    scanf("%f", &d2);
    printf("Enter distance covered in hour 3: ");
    scanf("%f", &d3);
    printf("Enter distance covered in hour 4: ");
    scanf("%f", &d4);
    printf("Enter distance covered in hour 5: ");
    scanf("%f", &d5);

    total_distance = d1 + d2 + d3 + d4 + d5;
    avg_speed = total_distance / hours;

    printf("Average Speed = %.2f miles/hour\n", avg_speed);
    return 0;
}
