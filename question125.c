//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char text[200];

    // Open existing file in append mode
    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    // Take new text from user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append text at the end of the file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}