#include <stdio.h>
/**
 * main-rentry of prog
 * description: prints possible combination two digits
 * Return: 0 on succes
 */

int main(void)
{
	int n , m;
	int count1, count2;
	
	count1 = 0;
	count2 = 0;

	for(n = '0'; '0' <= n && n <= '9'; n++)
	{
		count1++;
		count2 = count1;

		for(m = '0'; '0' <= m && m <= '9'; m++)

		{

			if (n == m)
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
