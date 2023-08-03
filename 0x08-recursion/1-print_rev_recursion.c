#include "main.h"

/**
 *  _print_rev_recursion - prints a xter or a string
 *  using recursioni in reverse
 * @s: the string to pe printed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);	/* prints only when unwinding */
}
