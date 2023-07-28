#include "main.h"

/**
 * string_toupper - changes every lowercase letter to uppercase in a string
 * @str: the string
 * Return: pointer to changed string
 */

char *string_toupper(char *str)
{
	int m, n;

	m = 0;
	while (str[m])
	{
		for (n = 'a'; n >= 'a' && n <= 'z'; n++)
		{
			if (str[m] == n)
				str[m] = str[m] - 32;
		}
		m++;
	}
	return (str);
}
