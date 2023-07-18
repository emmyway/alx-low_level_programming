#include "main.h"

/**
 * main - entry of program
 * description: prints the alphabet in lower case
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n >= 'a' && n <= 'z'; n++)
		_putchar(n);

	_putchar('\n');
}
