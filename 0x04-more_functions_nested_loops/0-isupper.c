#include "main.h"

/**
 * _isupper - checks if uppercase xter
 * @c: xter to be checked
 * Return: 1 if true, and 0 otherwise
 */

int _isupper(int c)
{
	int n;

	for (n = 'A'; n >= 'A' && n <= 'Z'; n++)
	{
		if (n == c)
			return (1);
	}
	return (0);
}
