#include<stdio.h>

int reverse(int n) {
    int rev_n = 0;
    while (n > 0) {
        rev_n = rev_n * 10 + n % 10;
        n /= 10;
    }
    return rev_n;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int rev_n = reverse(n);
    if (n == rev_n)
        printf("Palindrome!!");
    else
        printf("Not a Palindrome!!");
    return 0;
}