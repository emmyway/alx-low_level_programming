#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints nums 0-14 ten times
 * Return: nothing
 */

void more_numbers(void)
{
	int n, m, count;

	for (m = 0; m >= 0 && m <= 10; m++)
	{
		count = -1;

		for (n = 0; n >= 0 && n <= 14; n++)
		{
			if (n <= 9)	/* prints numbers 0-9 */
				_putchar('0' + n);

			else
			{	/* prints numbers 10-14 */
				count++;
				_putchar('1');
				_putchar('0' + count);
			}
		}
		_putchar('\n');
	}
}
