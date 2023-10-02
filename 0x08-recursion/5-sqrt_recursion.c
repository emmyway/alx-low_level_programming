#include "main.h"
/**
 * _sqrt_recursion - fxn finds square root of number
 * @n: the number to be computed
 * description: the ethod used here is to continually subtract odd number
 * from the number n untill n becomes 0, the the resut becomes the number
 * iteration of the the process.
 * Return: return the result on success or -1 if not
 */

int _sqrt_recursion(int n)
{
	int static odd, count, result;

	odd = 1;
	count = result = 0;

	if (n == 0 || n == 1)
		return (n);
	else if (n < 0)
		return (-1);
	else
	{
		result = ++count;
		odd += 2;
		_sqrt_recursion(n - odd);
	}
}
