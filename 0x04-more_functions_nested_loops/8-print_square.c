#include "main.h"

/**
 * print_square - prints a square with # for n size
 * @size: the size of the square
 * Return: nothing
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 0; a >= 0 && a < size; a++)
		{
			_putchar('#');

			for (b = 0; b >= 0 && b < (size - 1); b++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
