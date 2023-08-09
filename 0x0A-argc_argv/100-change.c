#include "main.h"

/**
 * main - entry of prog
 * description: prints the minimum number of coins to make
 * change for an amount of money
 * @argc: count number of argument passed to main
 * @argv: array of all argument passed to main including name
 * Return: result on success
 */

int main(int argc, char *argv[])
{
	int i, count, num;
	int coins[] = {25, 10, 5, 2, 1};

	count = 0;

	if (argc != 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		num = atoi(argv[1]);

		if (num < 0 || num == 0)
		{
			printf("Error\n");
			return (1);
		}

		for (i = 0; i < 5 && num > 0; i++)
		{
			while (num >= coins[i])
			{
				num -= coins[i];
				count++;

			}
		}
		printf("%d\n", count);
	}
	return (0);
}
