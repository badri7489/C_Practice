// Stringize Operator inserts double quotes around the string

#include <stdio.h>

#define getVariableName(x)  #x

#define printText(text) #text

int main()
{
    int student_age=21;

    printf("value of %s is = %d\n", getVariableName(student_age), student_age);

    printf(printText(Hello Guys));

    return 0;
}
