#include<stdio.h>
#include<string.h>
 
int main()
{
    char title[5], fName[30], lName[30];
    char name[100] = {0}; //assign null
     
    printf("Enter title (Mr./Mrs.): ");
    gets(title);
    printf("Enter first name: ");
    gets(fName);
    printf("Enter last name: ");
    gets(lName);

    //create complete name using string concatenate
    strcat(name, title);
    strcat(name, " ");

    strcat(name, fName);
    strcat(name, " ");

    strcat(name, lName);
    strcat(name, " ");

    printf("Hi.... %s\n", name);

    return 0;
}