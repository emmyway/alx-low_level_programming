#include "main.h"
int find_sqrt(int n, int t);

/**
 * _sqrt_recursion - finds the natural square root of a number
 * find_sqrt: fxn that calc. actual square root
 * @n: the number
 * @t: the iterator
 *
 * Return: the result of the square root
 */


int find_sqrt(int n, int t)
{
	if (t * t > n)
		return (-1);

	if (t * t == n)
		return (t);

	return (find_sqrt(n, t + 1));
}

int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (find_sqrt(n, 0));
}
