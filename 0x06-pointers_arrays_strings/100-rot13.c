#include "main.h"

/**
 * rot13 - encodes a spring using Rot13
 * @str: - string to be encoded
 * Return: pointer to encoded spring
 */

char *rot13(char *str)
{
	int m, n;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	 m = 0;

	while(str[m])
	{
		for (n = 0; n < 52; n++)
		{
			if (str[m] == s1[n])
				str[m] = s2[n];
			break;
		}
		m++;
	}
	return (str);
}

