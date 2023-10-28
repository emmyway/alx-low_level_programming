#include "main.h"

/**
 * flip_bits - fxn count the number of bits to change/flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counterbit = 0;
	unsigned long int current;
	unsigned long int exclu = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclu >> i;
		if (current & 1)
			counterbit++;
	}
	return (counterbit);
}
