/**
  * x ^ 0 = x
  * x ^ x = 0
  * Same as two unique and rest twice. We introduce all numbers from 1 to n.
  * So that all numbers are twice.
  * Missing number would be once and Repeating number would be thrice.
  * 2 occurences of repeating number would cancel each other.
  * Now solve it as two unique and rest twice.
  */
 
#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *arr = (int*) malloc(n * sizeof(int));

    printf("\nEnter the numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int xxory = 0;
    for (i = 0; i < n; i++) {
        xxory ^= arr[i];
        xxory ^= (i + 1);
    }

    int rmsb = xxory & -xxory;  // Right most set bit.
    int x = 0, y = 0;

    for (i = 0; i < n; i++) {
        if (rmsb & arr[i])
            x ^= arr[i];
        else
            y ^= arr[i];
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Missing Number: %d", y);
            printf("\nRepeating Number: %d", x);
            break;
        } else {
            printf("Missing Number: %d", x);
            printf("\nRepeating Number: %d", y);
            break;
        }
    }
    return 0;
}