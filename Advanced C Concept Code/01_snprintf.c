// C program to demonstrate snprintf()
#include <stdio.h>

// int main()
// {
// 	char buffer[50];
// 	char* s = "gee";

// 	// Counting the character and storing
// 	// in buffer using snprintf
// 	printf("Writing %s onto buffer with capacity 6",s);
// 	int j = snprintf(buffer, 6, "%s\n", s);

// 	// Print the string stored in buffer and
// 	// character count
// 	printf("\nString written on buffer = %s", buffer);
// 	printf("\nValue returned by snprintf() method = %d\n", j);
	

// 	return 0;
// }

int main()
{
	char buffer[50];

	// join two or more strings
	char* str1 = "quick";
	char* str2 = "brown";
	char* str3 = "lazy";
	int max_len = sizeof buffer;

	int j = snprintf(buffer, max_len, "The %s %s fox jumped over the %s dog. I want to eat ass.", str1, str2, str3);
	printf("\nThe number of bytes printed to 'buffer' (excluding the null terminator) is %d\n", j);
	if (j >= max_len)
		fputs("Buffer length exceeded; string truncated", stderr);
	puts("Joined string:");
	puts(buffer);

	return 0;
}
