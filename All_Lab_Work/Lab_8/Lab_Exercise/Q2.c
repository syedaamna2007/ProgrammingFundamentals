#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    char courses[500];

    printf("Enter your name: ");
    fgets(name, 100, stdin);
    name[strlen(name)-1] = '\0'; 

    printf("Enter your courses (separated by commas): ");
    fgets(courses, 500, stdin);
    courses[strlen(courses)-1] = '\0'; 


    int freq[26] = {0}; 
    int i, max = 0;
    char max_char = 'a';

    for(i = 0; name[i] != '\0'; i++) {
        char ch = name[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + ('a' - 'A');
        }

        if(ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
            if(freq[ch - 'a'] > max) {
                max = freq[ch - 'a'];
                max_char = ch;
            }
        }
    }

    printf("\nMost frequent character in your name: '%c'.\nit is appearing %d times.\n", max_char, max);


    int start = 0;
    for(i = 0; courses[i] != '\0'; i++) {
        if(courses[i] == ',' || courses[i+1] == '\0') {
            char course[100];
            int j = 0;
            int end = (courses[i] == ',') ? i : i+1;


            for(int k = start; k < end; k++) {
                course[j++] = courses[k];
            }
            course[j] = '\0';

            int index = 0;
            while(course[index] == ' ') index++;

            for(int f = 0; f < 26; f++) freq[f] = 0;
            max = 0;
            max_char = 'a';

            for(int k = index; course[k] != '\0'; k++) {
                char ch = course[k];
                if(ch >= 'A' && ch <= 'Z') ch = ch + ('a' - 'A');
                if(ch >= 'a' && ch <= 'z') {
                    freq[ch - 'a']++;
                    if(freq[ch - 'a'] > max) {
                        max = freq[ch - 'a'];
                        max_char = ch;
                    }
                }
            }

            printf("\nMost frequent character in course '%s': '%c'.\nit is appearing %d times.\n", &course[index], max_char, max);

            start = i + 1;
        }
    }

    return 0;
}
