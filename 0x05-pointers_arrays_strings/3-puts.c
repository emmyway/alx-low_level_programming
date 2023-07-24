#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string pointer input
 */

void _puts(char *str)
{
	int str_len;

	str_len = 0;

	while (str[str_len])
	{
		_putchar(str[str_len]);
		str_len++;
	}
	_putchar('\n');
}
