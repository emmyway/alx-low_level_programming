#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints integers with given separator
 * @separator: string holding separator
 * @n: the number of inputed integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(args, unsigned int));
		if (m != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
