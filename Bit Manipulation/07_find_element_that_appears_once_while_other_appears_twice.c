/**
  * x ^ 0 = x
  * x ^ x = 0
  * So if there is only one element appearing once and others appearing twice then all those who are appearing twice
  * will be cancelled by each other and only the element appearing once will be left.
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
    
    int xori = 0;
    for (i = 0; i < n; i++)
        xori ^= arr[i];

    printf("The element appearing once is: %d", xori);

    free(arr);
    return 0;
}