#include "main.h"


/**
 * print_number - prints given integer to output
 * @n: the given integer
 * Return: nothing
 */

void print_number(int n)
{
	int rev, isneg;

	rev = 0;
	isneg = 0;

	/* check if number is -ve */
	if (n < 0)
	{
		n = -n;
		isneg = 1;
	}

	if (n == 0)	/* to catch zero value*/
	{
		_putchar('0');
	}
	else
	{
		/* 1 is added to protect leading zero*/
		n = n * 10 + 1;

		/* get reverse of number */
		while (n > 0)
		{
			rev = rev * 10 + n % 10;
			n /= 10;
		}

		/* print org. num from rev var */
		if (isneg)
			_putchar('-'); /* add -minus sign for negetive values */

		while (rev > 0)
		{
			if (rev < 10) /* to avoid printing the added 1*/
			break;
			_putchar((rev % 10) + '0');
			rev /= 10;
		}
	}
}
