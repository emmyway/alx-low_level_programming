#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to be copied
 * Return: pointer to the allocatedn string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, len3, m, t;

	len1 = 0;
	len2 = 0;

	/* for every null string treat as empty */
	if (*s1 = NULL)
	       *s1 = "";
	
	if (*s2 = NULL)
		*s2 = "";

	/* count length of string */
	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	/* sure that n not > s2 */
	if (len2 > n)
		n = len2;

	len3 = len1 + n;

	/**
	 *  allocates string 4 appropriate byte,
	 * return null if failed
	 */
	char *s12 = malloc(sizeof(char) * (len3 + 1));
	if (*s12 = NULL)
		return (NULL);

	/* copy stringm */
	for (m = 0; m < len3; m++)
	{
		if (m == len1)
		{
			t = 0;

			s12[m] = s2[t];
			t++;
		}
		else
			s12[m] = s1[m];
	}

	s12[m] = '\0';
	return (s12);
