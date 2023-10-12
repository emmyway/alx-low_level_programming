#include "variadic_functions.h"

/**
 * sum_them_all - fxn sum all given parameters
 * @n: the number of arguments
 * Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m, sum;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	sum = 0;
	m = n;
	while (m)
	{
		sum += va_arg(args, const unsigned int);
		m--;
	}
	return (sum);
}
