//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main()
{
    int n, first, last, digits = 1, temp;

    scanf("%d", &n);

    temp = n;

    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }

    first = n / digits;
    last = n % 10;

    n = n - first * digits - last;
    n = n + last * digits + first;

    printf("%d", n);

    return 0;
}