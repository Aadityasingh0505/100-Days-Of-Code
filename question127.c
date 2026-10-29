//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("input.txt", "r");

    if (fp1 == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    fp2 = fopen("output.txt", "w");

    if (fp2 == NULL) {
        printf("Error: Cannot create output.txt\n");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper((unsigned char)ch), fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File converted successfully!\n");
    printf("Output written to output.txt\n");

    return 0;
}