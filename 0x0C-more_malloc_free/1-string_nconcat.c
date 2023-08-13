#include "main.h"
int str_len(char *str);
char *make_empty(char *str);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to be copied
 * Return: pointer to the allocatedn string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3, m, t;
	char *s12;

	len1 = 0;
	len2 = 0;

	/* for every null string treat as empty */
	s1 = make_empty(s1);
	s2 = make_empty(s2);

	/* count length of string */
	len1 = str_len(s1);
	len2 = str_len(s2);

	/* sure that n not > s2 */
	if (n > len2)
		n = len2;

	len3 = len1 + n;

	/* allocates string 4 appropriate byte, return null if failed */

	s12 = malloc(sizeof(char) * (len3 + 1));
	if (s12 == NULL)
		return (NULL);

	/* copy string */
	t = 0;
	for (m = 0; m < len1; m++)
		s12[m] = s1[m];

	for (t = 0; t < n; t++)
	{
		s12[m] = s2[t];
		m++;
	}

	s12[m] = '\0';
	return (s12);
}


/**
 * str_len - count length of string
 * @str: first string
 * Return: length of string
 */

int str_len(char *str)
{
	int count;

	count = 0;
	while (str[count])
	count++;
	return (count);
}


/**
 * make_empty - makes null string empty
 * @str: first string
 * Return: pointer to new string
 */

char *make_empty(char *str)
{
	if (str == NULL)
	str = "";
	return (str);
}
