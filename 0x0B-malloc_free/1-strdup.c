#include "main.h"

/**
 *  _strdup - fxn creates array of unknown size and fill with xter
 * @str: the string of xters to be duplicate
 * Return: pointer to array on success or NULL if failed
 */

char *_strdup(char *str)
{
	int i, len;
	char *new_str;

	if (str == NULL)
		return (NULL);

	/*find length of source string*/
	len = 0;
	while (str[len])
		len++;

	new_str = (char *)malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
