#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary string to be converted
 * Return: the unsigned int result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int numb = 0;
	int i =  0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && (b[i] != '1'))
			return (0);
		i++;
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		numb <<= 1;
		if (b[i] == '1')
			numb |= 1;
	}
	return (numb);

}
