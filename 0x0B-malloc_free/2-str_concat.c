#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to concaenated string
 */

char *str_concat(char *s1, char *s2)
{
	int m, len1, len2, len3, n;
	char *concat;


	/** if null assign as emty string **/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/** cal length of each string **/
	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	len3 = len1 + len2;

	/** allocate memory based on length of two strings */
	concat = malloc(sizeof(char) * len3 + 1);

	/** copy two strings into 1 **/
	for (m = 0; m < len1; m++)
		concat[m] = s1[m];

	for (n = 0; n < len2; n++)
	{
		concat[m] = s2[n];
		m++;
	}

	concat[m] = '\0';
	return (concat);
}
