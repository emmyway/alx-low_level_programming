#include "main.h"

/**
 * wildcmp - fx compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: 1 on success or 0 if fail
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' || (*s1 == *s2 && *s1 != '\0'))
		return (wildcmmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
