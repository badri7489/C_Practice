#include<stdio.h>

/**
  * This is the algo to calculate the rightmost set bit all the time and then subtract it from the number.
  * So we get the rightmost set bit and then we remove it and again find the rmsb.
  * This is more efficient as it jumps from one set bit to the other and ignores all the 0's in between.
  */
void kerninghan_rmsb_algo(int n) {
    int rmsb, count = 0;
    while (n > 0) {
        rmsb = (n & -n);
        n = n - rmsb;
        count++;
    }
    printf("\nTotal set bits using algo: %d", count);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i, count = 0;
    // This is the basic approach and checks for all the 32 bits one by one.
    for (i = 0; i < 32; ++i) {
        if (n & (1 << i))
            count++;
    }
    printf("Total set bits: %d", count);
    kerninghan_rmsb_algo(n);
    return 0;
}