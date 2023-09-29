#include "main.h"

/**
 * factorial - fxn prints factorial of number
 * @n: the number to be calculated
 * Return: the coputed value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
