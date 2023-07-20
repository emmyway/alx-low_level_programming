#include "main.h"

/**
 * print_diagona - prints a diagonal line on the terminal with \ to a given count
 * @n: the given number to be drawn
 * Return: nothing
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int a, b;

		for (a = 1; a >= 1 && a <= n; a++)
		{
			for (b = 2; b >= 2 && b <= n; b++)
			_putchar(' ');

			_putchar('\\');
		}
	}
	
	_putchar('\n');
}
