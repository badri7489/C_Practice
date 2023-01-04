#include<stdio.h>
#include<string.h>

int my_strlen(char* str) {
    return (*str) ? my_strlen(++str) + 1 : 0;
}
 
int main()
{
    char str[] = "www.includehelp.com";
    int length;
     
    //string length
    length = strlen(str);
    printf("String Length: %d\n", length);

    length = my_strlen(str);
    printf("My String Length: %d\n", length);

    return 0;
}