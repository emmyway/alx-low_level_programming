#include <stdio.h>

/**
 * main - entry of prog
 * Return: 0 on success
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of a char: %lu byte(s)\n", sizeof(int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a char: %lu byte(s)\n", sizeof(float));

	return (0);
}
