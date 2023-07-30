#include "main.h"
void putchar_print_int(int n);

/**
 * print_to_98 - prints all natural number back or forth to 98
 * @n: integer to start printing from
 * Return: nothing
 */

void print_to_98(int n)
{
	int a;

	if (n > 98)
	{

		for (a = n; a >= 98 && a <= n; a++)
		{
			putchar_print_int(a);
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (a = n; a >= n && a <= 98; a++)
		{
			if (a > 9)
			{
				putchar_print_int(a);
			}
			else if (a < 10) /*for +ve and -ve digits */
			{
				if (a >= 0)
				{
                                        _putchar('0' + a);
				}
				else  /* for negetive digits */
				{
					a = -a;
					
					if (a > 9) /* for negetives > 9*/
					{
						putchar_print_int(a);
					}
					else if (a < 10)	/*for negetive < 9*/
					{
						a = -a;
						_putchar('-');
						_putchar('0' + a);
					}
				}
			}
		}
	}
		_putchar('\n');

}

		void putchar_print_int(int n)
		{
			int rev, count, isneg;

			rev = 1; /* to cover for leading zero */
			count = 0;
			isneg = 0;

			if (n < 0)	/*take care of negative values*/
			{
				n = -n;
				isneg = 1;
			}

			while (n > 0)
			{
				rev = rev * 10 + n % 10;
				n /= 10;
				count++;
			}

			if (isneg)	/*prints -minus if is negative */
				_putchar('-');

			while (count)	/* to exempt the 1, the digit added we must use count*/
			{
				_putchar('0' + rev % 10);
				rev /= 10;
				count--;
			}

			_putchar(',');
			_putchar(' ');
		}
