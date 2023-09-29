#include "main.h"

/**
 * _puts_recursion - prints a string in reverse
 * @s: the strint to be printed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_puts_recursion(s + 1);
	_putchar(*s);
}
