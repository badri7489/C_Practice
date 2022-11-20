#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#include<time.h>

/**
  * Here we check the count of all the set bits in all 32 positions in all of the numbers.
  * Where ever there is a 3n + 1 set bits, there we set the bits in our answer.
  * Time complexity is 32 * n.
  */
void solution(int n, int* arr) {
    int i, j, mask, count, ans = 0;
    for (i = 31; i >= 0; --i) {
        mask = 1 << i;
        count = 0;
        for (j = 0; j < n; j++) {
            if (mask & arr[j])
                count++;
        }
        if (count % 3)
            ans = ans | mask;
    }
    printf("The answer is: %d", ans);
}

/**
  * This is same as previous version but we just for how many bits are set.
  * Then categorize to 3n, 3n + 1 and 3n + 2.
  * Then output 3n + 1.
 */
void solution(int n, int* arr) {
    int i, tn = INT_MAX, tnp1 = 0, tnp2 = 0;

    for (i = 0; i < n; ++i) {
        int cwtn = arr[i] & tn;
        int cwtnp1 = arr[i] & tnp1;
        int cwtnp2 = arr[i] & tnp2;

        tn = tn & (~cwtn);
        tnp1 = tnp1 | cwtn;

        tnp1 = tnp1 & (~cwtnp1);
        tnp2 = tnp2 | cwtnp1;

        tnp2 = tnp2 & (~cwtnp2);
        tn = tn | cwtnp2;
    }

    printf("The answer is: %d", tnp1);
}

int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));

    printf("\nEnter the numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    clock_t t;
    t = clock();
    solution(n, arr);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;

    printf("\nTime taken is: %f seconds", time_taken);
    
    return 0;
}