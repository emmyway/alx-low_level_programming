#include "main.h"

/**
 * print_line - prints a line on the terminal with _ to a given count
 * @n: the given number to be drawn
 * Return: nothing
 */

void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 1; a >= 1 && a <= n; a++)
			_putchar('_');
	}
	
	_putchar('\n');
}
