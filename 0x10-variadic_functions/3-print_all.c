#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**o
 * print_all - prints anythingngiven to it
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int t;

	char *sr, *sp = "";

	va_list list;
	va_start(list, format);
	t = 0;
	if (format)
	{
		while (format[t])
		{
			switch (format[t])
			{
				case 'c':
					printf("%s%c", sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(list, double));
					break;
				case 's':
					sr = va_arg(list, char *);

					if (!sr)
					sr = "(nil)";
					printf("%s%s", sp, sr);
					break;
				default:
					t++;
					continue;
			}
			sp = ", ";
			t++;
		}
	}
	printf("\n");
	va_end(list);
}
