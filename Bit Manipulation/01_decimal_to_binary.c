#include <stdio.h>
#include<math.h>

// Will print the bit representation of any data type.
void printBits(size_t const size, void const * const ptr) {
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u ", byte);
        }
        printf(" ");
    }
    puts("");
}

// Will print the 32 bit representation of integer type.
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
	int deci;
    printf("Enter a number: ");
    scanf("%d", &deci);

    printbits(deci);
    
    printBits(sizeof(deci), &deci);

    return 0;
}