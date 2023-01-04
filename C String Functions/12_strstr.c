#include <string.h>
#include <stdio.h>

int main()
{
	// Take any two strings
	char s1[] = "GeeksforGeeks";
	char s2[] = "for";
	char* p;

	// Find first occurrence of s2 in s1
	p = strstr(s1, s2);

    printf("Address: %p s1[]: %c\n", s1 + 0, s1[5]);
    printf("Address: %p p: %c\n", p, *p);

	// Prints the result
	if (p) {
		printf("String found\n");
		printf("First occurrence of string '%s' in '%s' is '%p'", s2, s1, p);
	} else
		printf("String not found\n");

	return 0;
}
