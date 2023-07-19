#include <stdio.h>


/**
 * main - entry
 * description: prints to screen any given positive integer
 * Return: 0 on success
 */

int main(void)
{
	int n, rev;

	rev = 0;

	printf("enter positive integer number\n");
	scanf("%d", &n);

	/* check if number is -ve or zero */
	if (n == 0)
	{
		putchar('0');
		return(0);
	}

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	/* get reverse of number */
	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	/* print org. num from rev var */
	while (rev > 0)
	{
		putchar(rev % 10 + '0');
		rev /= 10;
	}
	putchar('\n');

	return (0);
}
