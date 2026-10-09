/*Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

/*
Sample Test Cases:
Input 1:
arr = [1, 3, 2, 4]
Output 1:
-1, -1, 3, -1

Input 2:
arr = [6, 8, 0, 1, 3]
Output 2:
-1, -1, 8, 8, 8

Input 3:
arr = [1, 2, 3, 5]
Output 3:
-1, -1, -1, -1

Input 4:
arr = [5, 4, 3, 1]
Output 4:
-1, 5, 4, 3

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void findPreviousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;
        
        // Left side me nearest greater element dhoondhna (i-1 se 0 ki taraf)
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; // Immediate nearest left greater element milte hi break
            }
        }
        
        // Comma separated output format
        if (i == n - 1) {
            printf("%d\n", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }
}

int main() {
    char input[500];
    
    // User se complete line input lena
    if (!fgets(input, sizeof(input), stdin)) {
        return 0;
    }

    int arr[100];
    int n = 0;

    // Line me se saare integers extract karna (brackets/commas filter karke)
    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i]) || (input[i] == '-' && isdigit(input[i + 1]))) {
            arr[n++] = atoi(&input[i]);
            if (input[i] == '-') i++;
            while (isdigit(input[i])) i++;
            i--;
        }
    }

    if (n > 0) {
        findPreviousGreater(arr, n);
    }

    return 0;
}