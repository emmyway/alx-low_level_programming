#include "main.h"

/**
 * print_number - print a given integer using putchar
 * @n: the givent integer
 */

void print_number(int n)
{
	int rev, isneg;

	rev = 0;
	isneg = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0) /*to mark negative values*/
		{
			n = -n;
			isneg = 1;
		}

		n = n * 10 + 1; /*protect leading zeros*/

		while (n)
		{
			rev = rev * 10 + n % 10;
			n = n / 10;
		}

		/*beging printing integer*/
		if (isneg)
			_putchar('-');

		while (rev)
		{
			if (rev < 10)
				break; /* to eliminate prev included 1 */

			_putchar(rev % 10 + '0');
			rev = rev / 10;
		}
	}
}
