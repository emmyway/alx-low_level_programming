#include "main.h"

/**
 * main - program prints the product of two numbers
 * @argc: command line argument count
 * @argv: arrray of comman line arguments
 * Return: 0 on successand 1 if failed
 */

int main(int argc, char *argv[])
{
	int m, n, result;

	(void)argc;

	if (argv[1] == NULL || argv[2] == NULL)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]);
	n = atoi(argv[2]);
	result = m * n;

	printf("%d\n", result);

	return (0);
}
