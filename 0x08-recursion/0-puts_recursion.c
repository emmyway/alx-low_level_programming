#include "main.h"

/**
 * _puts_recursion - fxn prints a string
 * @s: the string to be printed
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
		_puts_recursion(s + 1);

	if (*s == '\0')
	{
		_putchar('\0');
		_putchar('\n');
	}
}
