// %[flags][width][.precision][length]specifier

#include<stdio.h>

int addd(int x, int y) {
    return printf("%*c", ' ');
}

int main() {
    int x = 2, y = 6;
    printf("%d", addd(x, y));
    
    
    return 0;
}