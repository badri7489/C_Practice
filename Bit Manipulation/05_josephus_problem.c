/**
  * Numbers 1 to n are standing in a circle and they are killed alternately.
  * 2, 4, 6 then it goes till n. Then it circles back.
  * The last remaining is the answer.
  * 
  * Biggest power of 2 closest to n.
  * n = 2 ^ x + l
  * answer = 2 * l + 1;
  */

#include<stdio.h>

int power_of_2 (int n) {
    int i = 1;
    while (i * 2 <= n) {
        i = i * 2;
    }
    return i;
}

void josephus_algorithm(int n) {
    int highest_power_of_2 = power_of_2(n);
    printf("The survivor is: %d", 2 * (n - highest_power_of_2) + 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    josephus_algorithm(n);
    return 0;
}