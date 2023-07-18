#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n >= 'a' && n <= 'z'; n++)
		_putchar(n);

	_putchar('\n');
}
