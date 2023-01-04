#include<stdio.h>

#define SUM(A, B)   A + B
#define SUB(A, B)   A - B
#define AVG(A, B)   (A + B) / 2

int main() {
    printf("Sum: %d\n", SUM(10, 5));
    printf("Sub: %d\n", SUB(10, 5));
    printf("Sum: %d\n", AVG(10, 5));

    return 0;
}