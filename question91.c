//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include <stdio.h>

int main() {
    char str[100];
    int i;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != 'a' && str[i] != 'e' && str[i] != 'i' &&
           str[i] != 'o' && str[i] != 'u') {
            printf("%c", str[i]);
        }
    }

    return 0;
}