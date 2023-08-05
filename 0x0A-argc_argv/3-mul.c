#include "main.h"

/**
 * main - entry of prog
 * @argc: count number of argument passed to main
 * @argv: array of all argument passed to main including name
 * Return: result of multiplication on success
 */

int main(int argc, char *argv[])
{
	(void)argc;

	if (argv[1] && argv[2])
	{
		int num1, num2, result;

		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
