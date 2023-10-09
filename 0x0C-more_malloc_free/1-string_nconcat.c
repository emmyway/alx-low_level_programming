#include "main.h"

/**
 * string_nconcat - fxn concatenates string1 to n of string2
 * @s1: string1
 * @s2: string2
 * @n: the n amount to be concatenated
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, len3;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find length of strings */
	len1 = len2 = 0;
	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;

	len3 = len1 + n;

	/* allocate string */
	new_str = malloc(len3 + 1);
	if (new_str == NULL)
		return (NULL);
	/* begin copying */
	for (i = 0; i < len3; i++)
	{
		if (s1[i])
			new_str[i] = s1[i];
		else
			new_str[i] = s2[n - (len3 - i)];
	}
	new_str[i] = '\0';
	return (new_str);
}
