#include "main.h"
int str_len(char *str);

/**
 * _strncat - concatenates src string to dest
 * string of n number of bytes/xters i.e append
 * @src: source to copy from
 * @dest: destination to append to.
 * @n: number of bytes to be copied
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;

	/* call fxn to cal length of strings */
	dest_len = str_len(dest);

	/*append src to dest, beginning with end of dest*/
	for (i = 0; i < n && src[i] != '\0'; i++)
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
