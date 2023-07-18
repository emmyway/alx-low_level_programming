#include "main.h"

/**
 * _islower - checks for lower case xter.
 * @c: xter paramater to be checked
 * Return: 1 if c is lowercase else Returns 0
 */

int _islower(int c)
{
	int m;

	for (m = 'a'; m >= 'a' && m <= 'z'; m++)
	{
		if (m == c)
			return (1);
	}

	return (0);
}
