#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints all given string to output
 * @n: number of strings given
 * @separator: either commer or space
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int t;
	va_list args;
	char *str;

	va_start(args, n);

	for (t = 0; t < n; t++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);

		if (t != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
