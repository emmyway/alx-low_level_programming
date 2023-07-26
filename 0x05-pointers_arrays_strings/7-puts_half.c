#include "main.h"

/**
 * puts_half - prints half the string
 * @str: the string pointer input
 */

void puts_half(char *str)
{
	int str_len, n;

	/*cal. str length */
	while (str[str_len])
		str_len++;

	/* print half string */
	if (str_len % 2 == 0)
	{
		for (n = (str_len)/ 2; n < str_len; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = (str_len + 1)/ 2; n < str_len; n++)
			_putchar(str[n]);
	}
}
