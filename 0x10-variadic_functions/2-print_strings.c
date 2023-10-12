#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - fxn prints string with a separator
 * @separator: string of separator to be pri ted along
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *letter;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (j = 0; j < n; j++)
	{
		letter = va_arg(args, char *);
		if (letter == NULL)
			letter = "(nil)";

		printf("%s", letter);
		if (j != n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
