/**
  * We need to find the bit which is set(it means set to 1).
  * Ex: (72)10 - (1001000)2
  * Has the 4th bit from the left set.
  * 
  * To find this, we need to do: (n & -n)
  * -n means the 2's compliment of n.
  * That is how the number is stored in binary form.
  */

#include<stdio.h>
#include<math.h>

void printbits(int n) {
    int i = 31;
    for (; i >= 0; i--) {
        if ((n >> i) & 1)
            printf("1 ");
        else
            printf("0 ");
        if (i % 8 == 0)
            printf(" ");
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int rmsb = (n & (-n));

    printbits(rmsb);
    printf("The Right Most set is the %dth", (int)log2(rmsb));
    return 0;
}