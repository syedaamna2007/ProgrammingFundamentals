//Roll. no: CT-164

#include <stdio.h>
int main() {
    int program, year;

    printf("Select Program Type:\n");
    printf("1 = Computer Science\n");
    printf("2 = Electrical Engineering\n");
    printf("Enter your choice:");
    scanf("%d", &program);

    switch (program) {
        case 1: // Computer Science
            printf("Select Year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Enter your choice:");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Courses for First Year of Computer Science:\n");
                    printf("1. IT Fundamentals and Applications\n");
                    printf("2. Programming Fundamentals\n");
                    printf("3. Functional English\n");
                    printf("4. Islamic studies/ Ethical Behaviour\n");
                    printf("5. Applied Physics\n");
                    printf("6. Ideology And Constitution of Pakistan\n");
                    printf("7. Introduction to Mathematics. (for pre-medical students)\n");
                    
                    break;
                case 2:
                    printf("Courses for Second Year of Computer Science:\n");
                    printf("1. Logic Design and Switching Theory.\n");
                    printf("2. Discrete Structures.\n");
                    printf("3. Object-Oriented Programming.\n");
                    printf("4. Calculus and Analytical geometry.\n");
                    printf("5. Pakistan Studies\n");
                    break;
                default:
                    printf("Invalid year selection.\n");
            }
            break;

        case 2: // Electrical Engineering
            printf("Select Year:\n");
            printf("1 = First Year\n");
            printf("2 = Second Year\n");
            printf("Enter your choice:");
            scanf("%d", &year);

            switch (year) {
                case 1:
                    printf("Courses for First Year of Electrical Engineering :\n");
                    printf("1. Basic Electrical Engineering\n");
                    printf("2. Functional English\n");
                    printf("3. Calculus and Analytical geometry\n");
                    printf("4. IT Fundamentals and Applications\n");
                    printf("5. Islamic studies/ Ethical Behaviour\n");
                    printf("6. Pakistan Studies\n");
                    printf("7. Essentials of Chemistry (For CS backgroung students)\n");
                    break;
                case 2:
                    printf("Courses for Second Year of Electrical Engineering :\n");
                    printf("1. Circuit Analysis\n");
                    printf("2. Linear Algebra and ordinary differential equations\n");
                    printf("3. Computer Programming\n");
                    printf("4. Ideology And Constitution of Pakistan\n");
                    printf("5. Applied Physics\n");
                    break;
                default:
                    printf("Invalid year selection.\n");
            }
            break;

        default:
            printf("Invalid program selection.\n");
    }

    return 0;
}
