/*Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
3, 4, 4, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
8, -1, 1, 3, -1

Input 3:
arr = [1, 2, 3, 5]
Output 3:
2, 3, 5, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, -1, -1, -1

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[500];
    // Poori line input lega (e.g., [1, 3, 2, 4] ya arr = [1, 3, 2, 4])
    if (!fgets(str, sizeof(str), stdin)) return 0;

    int arr[100];
    int n = 0;

    // Line me se saare integers extract karna
    for (int i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i]) || (str[i] == '-' && isdigit(str[i+1]))) {
            arr[n++] = atoi(&str[i]);
            // Number ke agle character tak jump karna
            if (str[i] == '-') i++;
            while (isdigit(str[i])) i++;
            i--;
        }
    }

    if (n == 0) return 0;

    // Brute Force Approach (Nested Loops)
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        // Comma separated output
        if (i == n - 1) {
            printf("%d\n", nextGreater);
        } else {
            printf("%d, ", nextGreater);
        }
    }

    return 0;
}