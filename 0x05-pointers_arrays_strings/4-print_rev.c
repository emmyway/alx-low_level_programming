#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: the string pointer input
 */

void print_rev(char *s)
{
	int str_len, n;

	str_len = 0;

	/* counts length of string */
	while (s[str_len])
		str_len++;

	/* prints string in reverse */
	for (n = str_len; n <= str_len && n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}
