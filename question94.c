//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[50], longest[50];
    int i = 0, j = 0, max = 0;

    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;

            if (sentence[i] == '\0' || sentence[i] == '\n')
                break;
        }

        i++;
    }

    printf("%s", longest);

    return 0;
}