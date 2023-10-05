#include "main.h"

/**
 * str_concat - fxn concatenates two strings s1 and s2 to form s3
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to s3 on success or NULL if failed
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2, len3;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*find length of source string*/
	len1 = len2  = 0;
	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	len3 = len1 + len2;

	/* allocate memory */
	s3 = (char *)malloc((len3 + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	/* copy into new memory/buffer */
	for (i = 0; i < len3; i++)
		if (i < len1)
			s3[i] = s1[i];
		else
			s3[i] = s2[i - len1];
	s3[i] = '\0';

	return (s3);
}
