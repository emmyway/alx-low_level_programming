#include "main.h"

/**
 * print_sign - checks sign of number
 * @n: number to be checked
 * Return: 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);	/**
			  * because of the returning type, but we
			  * can use the return zero condtional statement
			  */
}
