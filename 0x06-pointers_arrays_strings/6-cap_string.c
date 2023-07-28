#include "main.h"

/**
 * cap_string - capitalizes all words of strring
 * @str: the string
 * Return: pointer to changed string
 */

char *cap_string(char *str)
{
	int m, n;

	m = 0;
	while (str[m])
	{
		for (n = 'a'; n >= 'a' && n <= 'z'; n++)
		{
			if ((str[m] == n) &&
			((str[m - 1] == ' ') ||
			(str[m - 1] == '\t') ||
			(str[m - 1] == '\n') ||
			(str[m - 1] == ',') ||
			(str[m - 1] == ';') ||
			(str[m - 1] == '.') ||
			(str[m - 1] == '!') ||
			(str[m - 1] == '?') ||
			(str[m - 1] == '"') ||
			(str[m - 1] == '(') ||
			(str[m - 1] == ')') ||
			(str[m - 1] == '{') ||
			(str[m - 1] == '}') ||
			(m == 0)))

				str[m] = str[m] - 32;
		}
		m++;
	}
	return (str);
}
