#include <stdio.h>

/**
 * main - main entry of prog
 * Return: 0 on success
 */

int main(void)
{
	int n = 0;

	for (n = 'a'; n >= 'a' && n <= 'z'; n++)
	{
		if (n == 'q' | n == 'e')
			continue;
		putchar(n);
	}

	putchar('\n');
	return (0);
}
