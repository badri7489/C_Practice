#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[]="Hello World.";

    printf("Value of str: %s\n",str);
    
    //convert into lowercase
    strlwr(str);
    printf("Value of str (Lowercase): %s\n",str);    
    
    return 0;
}