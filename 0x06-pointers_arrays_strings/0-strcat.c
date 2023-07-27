#include "main.h"
int str_len(char *str);

/**
 * _strcat - concatenates src string to dest string i.e append
 * @src: source to copy from
 * @dest: destination to append to.
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int src_len, dest_len, i;

	/* call fxn to cal length of strings */
	src_len = str_len(src);
	dest_len = str_len(dest);

	/*append src to dest, beginning with end of dest*/
	for (i = 0; i < src_len; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}

/**
 * str_len - fxn to cal. length of string
 * @str: given string
 * Return: len on success
 */
int str_len(char *str)
{
	int len;
		len = 0;
	while (str[len])
		len++;
	return (len);
}
