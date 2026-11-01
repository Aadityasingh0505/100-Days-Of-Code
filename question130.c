//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Store student records
    for (i = 1; i <= n; i++)
    {
        printf("\nEnter details of Student %d:\n", i);

        printf("Name: ");
        scanf("%49s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Read and display records
    while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %.0f\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}