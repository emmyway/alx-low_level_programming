#include "main.h"

/**
 * print_binary - fxn print binary form of numbers
 * @n: the given  number
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, chec;
	char flag = 0;

	div = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		chec = n & div;
		if (chec == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
