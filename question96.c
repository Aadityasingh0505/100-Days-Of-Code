//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>

int main() {
    char str[200];
    int i, start = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; ; i++) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\0') {

            int j;

            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;
    }

    return 0;
}