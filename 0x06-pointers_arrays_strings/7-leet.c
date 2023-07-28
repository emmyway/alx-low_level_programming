#include "main.h"

/**
 * leet- 
 * @str: the string
 * Return: pointer to changed string
 */

char *leet(char *)
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
