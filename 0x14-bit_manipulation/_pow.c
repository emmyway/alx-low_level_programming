#include "main.h"

/**
 * _pow - fxn cal (base ^ power)
 * @base: base value
 * @power: power value
 * Return: result of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 0; i <= power; i++)
		num *= base;

	return (num);
}
