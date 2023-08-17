#include  "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers with separators
 * @separator: this is a commer, or space or both
 * @n: the number of variadic arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int t;

	va_list args;

	va_start(args, n);

	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(args, int));

		if (t != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
