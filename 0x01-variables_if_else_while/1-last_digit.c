#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point of prog.
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)		/* make n +ve if negative */
		n = -1 * n;

	l = n % 10;	/* to last digit of n */

	if (l > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (l == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else if (l < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

	return (0);
}
