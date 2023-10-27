#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary string to be converted
 * Return: the unsigned int result
 */
unsigned int binary_to_uint(const char *b)
{
/*	unsigned int i, j, len, add, pow;
	int base;

	add = 0;
	base = 2;
	pow = 1;

	if (!b)
		return (0);

	len = 0;
	while (b[len])
		len++;
	if (*b == '0' || *b == '1')
		return (b[0] - 48);

	for(i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && (b[i] != '1'))
			return (0);
		for (j = len -1; j > 0; j--)
			pow = pow * base;
		add = add + (pow * (b[i] - 48));
		len--;
		pow = 1;
	}
	return (add);*/

	unsigned int numb = 0;
	int i =  0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && (b[i] != '1'))
			return (0);
		b++;
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		numb <<= 1;
		if (b[i] == '1')
			numb += 1;
	}
	return (0);

}
