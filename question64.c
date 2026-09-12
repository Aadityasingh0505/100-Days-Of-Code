//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int n, digit;
    int count[10] = {0};
    int max = 0, result = 0;

    scanf("%d", &n);

    while (n != 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for (digit = 0; digit <= 9; digit++)
    {
        if (count[digit] > max)
        {
            max = count[digit];
            result = digit;
        }
    }

    printf("%d", result);

    return 0;
}