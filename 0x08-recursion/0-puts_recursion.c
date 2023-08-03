#include "main.h"

/**
 * _puts_recursion - prints a xter or a string using recursion
 * @s: the string to pe printed
 */

void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')	/* prints before unwinding */
		_puts_recursion(s + 1);

	if (*s == '\0')	/* performs only when unwinding */
	{
		_putchar('\0');
		_putchar('\n');
	}
}
