#include "main.h"

/**
 * times_table- prints the 9 times table
 * Return: nothing
 */


void times_table(void)
{
	int m, n, val;

	val = 0;

	for (m = 0; m >= 0 && m <= 9; m++)
	{
		for (n = 0; n >= 0 && n <= 9; n++)
		{
			val = m * n;

			if (val > 9)
			{
				int rev, count, digit;

				rev = 0;
				count = 0;
				digit = 0;

				/** 
				 * pick out numbers from long int in reverse order begining with
				 * the last for ease of print by _putchar
				 */
				while (val > 0)
				{
					digit = val % 10;

					if (digit == 0)
						count = 1;

					rev = rev * 10 + digit;
					val /= 10;
				}

				/* print reversed number */
				_putchar(' ');  /* to alighn right */
				while (rev > 0)
				{
					_putchar('0' + rev % 10);
					rev /= 10;
				}

				/* formsake of leading zero */
				if (count)
					_putchar('0');

				if (n != 9)	/* to avoid comma at end of table */
				_putchar(',');
			}
			else
			{
				/**
				 * the space has 2come b4 the value; to alighn right
				 * but not b4 the initial column
				 */
				if (n != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(val + '0');

				/* to avoid comma at the end of table */
				if (n != 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
