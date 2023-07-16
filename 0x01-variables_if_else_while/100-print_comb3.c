#include <stdio.h>
/**
 * main-rentry of prog
 * description: prints possible combination two digits
 * The IDEA here is simply nest loop and filter the numbers wwe dont want
 * according to the requirment of the question. 1. no double numbers 00, 11...
 * 2. no mirror numbers, instead take the least 12, 21, 23, 32, pick the
 * youngest 12, 23...
 * TO get this draw the outcome of the matrix combination of these two row and
 * column of numbers.
 *
 * Return: 0 on succes
 */

int main(void)
{
	int n, m;
	int count1, count2;

	count1 = 0;
	count2 = 0;

	for (n = '0'; '0' <= n && n <= '9'; n++)
	{
		count1++;
		count2 = count1;

		for (m = '0'; '0' <= m && m <= '9'; m++)

		{

			if (n == m)	/* this IF statement checks if you've
					   * come to the 00, 11, 22... so as to
					   * enable prnting in the next itteration
					   * by unlocking the next if statement
					   */
			{
				count2++;
				continue;
			}

			if (count2 > count1)
			{
				putchar(n);
				putchar(m);
				if (!(n == '8' && m == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
