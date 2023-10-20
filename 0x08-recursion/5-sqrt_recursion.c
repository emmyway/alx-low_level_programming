#include "main.h"

int square_root_check(int n, int j);

/**
 * _sqrt_recursion - finds square root of number
 * @n: the number to be checked
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square_root_check(n, 0));
}

/**
 * square_root_check - recursively finds square-root of numbers
 * description: i am a helper function to _sqrt_recursion
 * @n: the numbe to be checked
 * @j: the halve of n
 * Return: result
 */
int square_root_check(int n, int j)
{
	if (j * j > n)
		return (-1);
	else if (j * j == n)
		return (j);
	return (square_root_check(n, j + 1));
}
