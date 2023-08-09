#include "main.h"

/**
 * _strdup - creates a string that copies the parameter string
 * @str: the given string
 * Return: pointer to the created string
 */

char *_strdup(char *str)
{
	int m, len;
	char *coppy;

	if (str == NULL)
		return (NULL);

	while(str)
		len++;

	coppy = malloc(sizeof(char) * len);

	if (coppy == NULL)
		return (NULL);

	for (m = 0; m < len; m++)
		coppy[m] = str[m];
	return (coppy);
}
