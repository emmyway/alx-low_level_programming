#include "function_pointers.h"

/**
 * main - program to simulate calculator
 * @argc: the number of command line argument
 * @argv: the list of command line argument
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operaator = argv[2]i;

	printf("%d\n", get_op_func(operator)(num1, num2));

	return (0);
}
