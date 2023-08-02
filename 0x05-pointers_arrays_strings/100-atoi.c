#include "main.h"
#include <stdlib.h>

/**
 * _atoi - conversts string to integeras atoi
 * @s: the string to be conbverted
 * Return: the converted integer
 */


int _atoi(char *s)
{
	int i, t, len, num, sign;

	len = 0;
	while (s[len])
		len++;

	num = 0;
	sign = 1;

	for (i = 0; i < len; i++)
	{

		if (s[i] == ' ')
                {
                        i++;
			sign = 1;
                }

		if (s[i] == '+')
			sign = 1 * sign;
		else if (s[i] == '-')
			sign = -1 * sign;

		for (t = 48; t >= 48 && t <= 57; t++)
		{
			if (s[i] == t)
				num = num * 10 + (t - 48);
			continue;
		}
	}
	return (num * sign);
}
