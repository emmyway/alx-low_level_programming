#include "main.h"

/**
 * factorial - prints factorial of a number
 * @n: the number to be calculate
 * Return: factorial value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
