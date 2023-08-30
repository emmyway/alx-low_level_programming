#include "main.h"

/**
 * wildcmp - fx compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: 1 on success or 0 if fail
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;

		if (*(s2 + 1) == '\0')
			return (1);

		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1))
				return (1);
			s1++;
		}
	}
	else if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
	{
		if (*s1 == '\0')
			return (*s2 == '\0');
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
