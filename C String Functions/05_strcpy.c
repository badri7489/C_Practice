#include<stdio.h>
#include<string.h>
 
int main()
{
    char str1[30];
    char str2[30];
 
    printf("Enter string 1: ");
    fgets(str1, 30, stdin);
     
    //copy str1 into str2
    strcpy(str2,str1);
     
    printf("str1: %s \nstr2: %s \n",str1,str2);
     
    return 0;
}