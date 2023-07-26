#include "main.h"

/**
 * _strcpy - copy string from src pointer to dest buffer
 * @src: source to copy string from
 * @dest: buffer to copy to
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int src_str_len, n;

	src_str_len = 0;

	while (src[src_str_len])
		src_str_len++;

	for (n = 0; n < src_str_len; n++)
		dest[n] = src[n];
	return (dest);
}
