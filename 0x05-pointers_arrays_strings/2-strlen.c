#include "main.h"

/**
 * _strlen - finds the length of given pointed string
 * @s: the string pointer parameter
 * Return: value of length of string
 */

int _strlen(char *s)
{
	int str_len;

	str_len = 0;

	while (s[str_len])
		str_len++;

	return (str_len);
}
