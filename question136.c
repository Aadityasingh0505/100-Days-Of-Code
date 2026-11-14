//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>

enum Menu
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main()
{
    enum Menu choice;
    int a, b;

    char operation[20];

    scanf("%s %d %d", operation, &a, &b);

    if(operation[0] == 'A')
        choice = ADD;
    else if(operation[0] == 'S')
        choice = SUBTRACT;
    else if(operation[0] == 'M')
        choice = MULTIPLY;
    else
    {
        printf("Invalid choice");
        return 0;
    }

    switch(choice)
    {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}