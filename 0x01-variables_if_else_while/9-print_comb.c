#include <stdio.h>

/**
 * main - main entry of prog
 * description: a prog that prints all digits of a decimal numbers from 0-9
 * Return: 0 on success
 */

int main(void)
{
	int n = 0;

	for (n = '0'; n >= '0' && n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			break;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
