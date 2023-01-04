#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[]="Hello World.";

    printf("Value of str: %s\n",str);

    //convert into uppercase
    strupr(str);
    printf("Value of str (Uppercase): %s\n",str);
     
    return 0;
}