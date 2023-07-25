#include "main.h"

/**
 * rev_string - prints a string in reverse order
 * @s: the string pointer input
 */

void rev_string(char *s)
{
	int str_len, n;

	str_len = 0;

	/* counts length of string */

	while (s[str_len])
		str_len++;

	/* reverses the string*/
	for (n = 0; n < (str_len / 2); n++)
	{
		char temp;

		temp = s[n];
		s[n] = s[str_len - n - 1];
		s[str_len - n - 1] = temp;
	}
}
