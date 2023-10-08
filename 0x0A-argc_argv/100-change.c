#include "main.h"

/**
 * error_check - program prints minimum number of cents as change
 * @argc: command line argument count
 * @argv: arrray of comman line arguments
 * Return: 0 on successand 1 if failed
 */

int error_check(int argc, char *argv[])
{
	int i;

	if ((argc != 2))
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}


/**
 * main - program prints minimum number of cents as change
 * @argc: command line argument count
 * @argv: arrray of comman line arguments
 * Return: 0 on successand 1 if failed
 */
int main(int argc, char *argv[])
{
	int cents, count;

	if (error_check(argc, argv) != 0)
		return (1); /* Error occurred, return with an error code */

	cents = atoi(argv[1]);
	count = 0;

	while (cents)
	{
		count++;
		if (cents >= 25)
		{
			cents -= 25;
			continue;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			continue;
		}
		else if (cents >= 5)
		{
			cents -= 5;
			continue;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			continue;
		}
		else if (cents >= 1)
		{
			cents -= 1;
			continue;
		}
	}
	printf("%d\n", count);
	return (0);
}
