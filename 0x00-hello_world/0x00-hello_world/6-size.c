#include <stdio.h>

/**
 * main - entry of prog
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	puts("Size of a char: %d byte(s)", sizeof(int));
	printf("Size of a char: %ld byte(s)\n", sizeof(long int));
	printf("Size of a char: %lld byte(s)\n", sizeof(long long int));
	printf("Size of a char: %f byte(s)\n", sizeof(float));

	retun (0);
}
