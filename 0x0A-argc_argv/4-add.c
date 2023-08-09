#include "main.h"

/**
 * main - entry of prog
 * description: adds positive numbers
 * @argc: count number of argument passed to main
 * @argv: array of all argument passed to main including name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, result, num;

	result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += num;
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
