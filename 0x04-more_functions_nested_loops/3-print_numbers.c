#include "main.h"

/**
 * print_numbers - prints base 10 digit
 * Return: nothing
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n >= '0' && n <= '9'; n++)
	{
		_putchar(n);
	}
		_putchar('\n');
}
