#include "main.h"

/**
 * puts2 - prints every second character of a string starting with the first
 * @str: the string pointer input
 */

void puts2(char *str)
{
	int str_len, n;

	str_len = 0;

	/* counts length of string */
	while (str[str_len])
		str_len++;

	/* prints string in reverse */
	for (n = 0; n >= 0 &&  n <= str_len; n++)
	{
		if (n % 2 != 0)
			continue;
		_putchar(str[n]);
	}

	_putchar('\n');
}
