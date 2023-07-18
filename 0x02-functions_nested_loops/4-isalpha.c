#include "main.h"

/**
 * _isalpha - checks alphat letter
 * @c: xter paramater to be checked
 * Return: 1 if c is a letter, lowercase or uppercase else Returns 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
