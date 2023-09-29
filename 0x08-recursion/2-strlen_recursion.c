#include "main.h"

/**
 * _strlen_recursion - fxn returns legth of string
 * @s: the string to be counted
 * Return: length of string on success
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
