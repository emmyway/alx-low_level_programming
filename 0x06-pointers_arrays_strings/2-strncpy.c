#include "main.h"

/**
 * _strncpy - copy n bytes fromm src to dest, uses null bytes for overflow
 * @src: source to copy from
 * @dest: destination to copy to
 * @n: number of bytes to be copied
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
