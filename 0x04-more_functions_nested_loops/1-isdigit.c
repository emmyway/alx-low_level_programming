#include "main.h"

/**
 * _isdigit - checks if base 10 digit
 * @c: xter to be checked
 * Return: 1 if true, and 0 otherwise
 */

int _isdigit(int c)
{
	int n;

	for (n = '0'; n >= '0' && n <= '9'; n++)
	{
		if (n == c)
			return (1);
	}
	return (0);
}
