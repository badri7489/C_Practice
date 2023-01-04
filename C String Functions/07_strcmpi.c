#include<stdio.h>
#include<string.h>
 
int main()
{
    char str1[30];
    char str2[30];
 
    printf("Enter string1: ");
    fgets(str1, 30, stdin);
    printf("Enter string2: ");
    fgets(str2, 30, stdin);
    
    //using strcmpi
    printf("Using strcmpi: ");
    if(strcmpi(str1,str2) == 0)
        printf("strings are same.\n");
    else
        printf("strings are not same.\n");
         
    return 0;
}