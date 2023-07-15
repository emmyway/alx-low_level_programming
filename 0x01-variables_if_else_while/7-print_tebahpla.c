#include <stdio.h>

/**
 * main - main entry of prog
 * description: prints alphabets in reverse
 * Return: 0 on success
 */

int main(void)
{
	int n = 0;

	for (n = 'z'; n <= 'z' && n >= 'a'; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
