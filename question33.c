//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main()
{
    int n, original, remainder, sum = 0;

    scanf("%d", &n);

    original = n;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder * remainder * remainder;
        n = n / 10;
    }

    if (original == sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");

    return 0;
}