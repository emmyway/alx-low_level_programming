#include "main.h"
int digit_count(int n);
void putchar_print_int(int n);

/**
 * print_to_98 - prints all natural number back or forth to 98
 * @n: integer to start printing from
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		int a, rev, digit, count;

		for (a = n; a >= 98 && a <= n; a++)
		{
			putchar_print_int(a);
		}
	}
	else
	{
		for (a = n; a >= n && a <= 98; n++)
		{
			if (n > 9)
			{
				putchar_print_int;
			}
			else
				_putchar('0' + n)


			void putchar_print_int(int n)
			{
				int rev;

				rev = 1; /* to cover for leading zero */

				digit_count(n);

				while (n > 0)
				{
					rev = rev * 10 + n % 10;
					n /= 10;
				}

				while (digit_count - 1)	/* to exempt the 1, the digit added */
				{
					_putchar('0' + rev % 10);
					rev /= 10;
				}

				_putchar(',');
				_putchar(' ');
			}

			int digit_count(int n)
			{
				int count;

				count = 0;

				while (n > 0)
				{
					n /= 0;
					count++;
				}
				return (count);
			}

	}
}
