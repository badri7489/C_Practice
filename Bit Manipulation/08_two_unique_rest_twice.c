/**
  * x ^ 0 = x
  * x ^ x = 0
  * First we xor all the elements. So x ^ y is finally left.
  * Then we check the right most set bit of the xor of all elements.
  * According to that rmsb we will now seperate all the elements in 2 groups.
  * And we xor them all in both groups. Hence we seperate those number.
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
    for (i = 0; i < n; i++)
        xxory ^= arr[i];

    int rmsb = xxory & -xxory;  // Right most set bit.
    int x = 0, y = 0;

    for (i = 0; i < n; i++) {
        if (rmsb & arr[i])
            x ^= arr[i];
        else
            y ^= arr[i];
    }
    (x < y) ? printf("Two uniques are: %d, %d", x, y) : printf("Two uniques are: %d, %d", y, x);
    return 0;
}