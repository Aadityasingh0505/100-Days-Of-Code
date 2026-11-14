//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/

#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[3];
    int i, topper = 0;

    // Input student details
    for(i = 0; i < 3; i++)
    {
        scanf("%49s %d %f",
              s[i].name, &s[i].roll, &s[i].marks);
    }

    // Find highest marks
    for(i = 1; i < 3; i++)
    {
        if(s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    // Print topper details
    printf("Topper: %s (Marks: %.0f)",
           s[topper].name, s[topper].marks);

    return 0;
}