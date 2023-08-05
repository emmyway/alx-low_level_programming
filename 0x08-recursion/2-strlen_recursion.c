#include "main.h"

/**
 * _strlen_recursion - return the length of string
 * @n: the string
 */

int _strlen_recursion(char *s)
{
	int str_len;
	str_len = 0;

	if (*s)
	{
		str_len++;
		str_len += _strlen_recursion(s + 1);

	}
	return (str_len);
}
