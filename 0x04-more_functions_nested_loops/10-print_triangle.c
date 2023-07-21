#include "main.h"

/**
 * print_triangle - prints a triangle with # for n size
 * @n: the size of the triangle
 * Return: nothing
 */

void print_triangle(int size)
{
	int a, b, c, count;

	if (size > 0)
	{
		count = 0;
		for (a = 1; a >= 1 && a <= size; a++) /*cares for column*/
		{
			count++;
			for (b = 0; b >= 0 && b < (size - count); b++) /*cares for row spaces*/
				_putchar(' ');
			for (c = (size - count); c >= (size - count) && c < size; c++)
				_putchar('#');	/**
						  * cares for row # drawing, starts
						  * where space stops
						  */
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
