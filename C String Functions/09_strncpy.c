#include <stdio.h>
#include <string.h>
 
int main()
{
    char str1[30] = {0};
    char str2[30] = {0};
 
    printf("Enter string1: ");
    gets(str1);

    //copy first 3 characters of str1
    //before copy insert null in target string 

    strncpy(str2, str1, 3);

    printf("After copying str2 is: %s\n", str2);
    
    return 0;
}