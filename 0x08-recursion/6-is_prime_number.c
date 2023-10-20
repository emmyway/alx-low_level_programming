#include "main.h"

int primeCheck(int n, int j, int i);

/**
 * is_prime_number - checks if number is prime
 * @n: the number to be checked
 * Return: 1 on success or 0 if not
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);

	else
		return (primeCheck(n, n / 2, 2));

}

/**
 * primeCheck - recursively check prime numbers more than 2
 * @n: the numbe to be checked
 * @j: the halve of n
 * @i: the indecex values from 2 to n/2
 * Return: 1 if prime 0r 0 if not
 */
int primeCheck(int n, int j, int i)
{
	if (n % i == 0)
		return (0);
	else if (i >= j)
		return (1);
	else
		return (primeCheck(n, j, i + 1));
}
