#include "main.h"

/**
 * _abs - finds the absolute value of a number
 *
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0'  + n);
	return (0);
}
