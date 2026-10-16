//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000];
    int last[256];
    int i, start = 0, max = 0;

    scanf("%999s", s);

    for (i = 0; i < 256; i++)
        last[i] = -1;

    for (i = 0; s[i] != '\0'; i++)
    {
        unsigned char ch = s[i];

        if (last[ch] >= start)
            start = last[ch] + 1;

        last[ch] = i;

        if (i - start + 1 > max)
            max = i - start + 1;
    }

    printf("%d", max);

    return 0;
}