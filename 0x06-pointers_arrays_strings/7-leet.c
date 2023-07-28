#include "main.h"

/**
 * leet - converts some letters to integers in a string
 * @str: the string
 * Return: pointer to changed string
 */

char *leet(char *str)
{
	int m, n;
	/*char *s1, *s2;*/

	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	m = 0;
	while (str[m])
	{
		for (n = 0; n >= 0 && n < 10; n++)
		{
			if (str[m] == s1[n])
				str[m] = s2[n];
		}
		m++;
	}
	return (str);
}
