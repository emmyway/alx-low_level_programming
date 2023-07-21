#include "main.h"

/**
 * print_diagonal - prints a diagonal with \ for n times
 * @n: the number of times the character \ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 1; a >= 1 && a <= n; a++)
		{
			for (b = 0; b >= 0 && b <= a; b++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
