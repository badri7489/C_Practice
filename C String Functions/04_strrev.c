#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[30];
 
    printf("Enter string: ");
    gets(str);
     
    printf("Entered string is: %s\n",str);
     
    //Reverse string 
    strrev(str);
    printf("Reversed string is: %s\n",str);
     
    return 0;
}