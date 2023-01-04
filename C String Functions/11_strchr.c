// Can also be used to find if a certain character is there or not.

#include <stdio.h>
#include <string.h>

int main () {
    char str[] = "Sanghita Badri";
    char* ch = strchr(str, 'd');    // Gets the address of t.

    int pos = ch - str + 1;
    printf("%d", pos);
    
    return 0;
}