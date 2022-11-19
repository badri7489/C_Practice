/**
  * OR is for turning the bits on.
  * AND is for turning the bits off.
  * XOR is for toggling the bits.
  */
#include<stdio.h>

int main() {
    int n, i, j, k, l, on_mask, of_mask, toggle_mask, check_mask;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter place to on the bit: ");
    scanf("%d", &i);
    printf("Enter place to off the bit: ");
    scanf("%d", &j);
    printf("Enter place to toggle the bit: ");
    scanf("%d", &k);
    printf("Enter place to check the bit: ");
    scanf("%d", &l);

    on_mask = (1 << (i - 1));
    of_mask = ~(1 << (j - 1));
    toggle_mask = (1 << (k - 1));
    check_mask = (1 << (l - 1));

    printf("\nAfter turning on: %d", n | on_mask);
    printf("\nAfter turning off: %d", n & of_mask);
    printf("\nAfter toggling: %d", n ^ toggle_mask);
    printf("\nChecking bit is on or off: %s", (n & check_mask) ? "on" : "off");
    return 0;
}