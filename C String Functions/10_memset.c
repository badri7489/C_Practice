#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[30];
 
    //set NULL value to complete string
    memset(str, '\0', 30);
    printf("str: %s Size: %d\n", str, strlen(str));
     
    /*  set SPACE to first 29 characters
        do not assign space or other character
        to last character, it contains NULL.
    */
    memset(str, ' ', 29); 
         
    printf("str: %s Size: %d\n", str, strlen(str));
     
    //set A to first 10 characters and B to next 5 characters
    memset(str, 'A', 10);
    memset(str+10, 'B', 5);
    printf("str: %s Size: %d\n", str, strlen(str));
 
    return 0;
}