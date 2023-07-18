#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case 10X.
 */

void print_alphabet_x10(void)
{
	char n;	/* still works when i use int */
	int m;

	for (m = 0; m >= 0 && m <= 9; m++)
	{
		for (n = 'a'; n >= 'a' && n <= 'z'; n++)
			_putchar(n);

		_putchar('\n');
	}
}
