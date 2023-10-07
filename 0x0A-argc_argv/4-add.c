#include "main.h"

/**
 * main - program adds all positive int arguments it received except its name
 * @argc: command line argument count
 * @argv: arrray of comman line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int m, n, result;

	if (argc <= 1 )
	{
		printf("0");
		return (0);
	}

	for (m = 1; m < argc; m++)
	{
		n = 0;
		while (argv[m][n])
		{
			if (!(isdigit(argv[m][n])))
			{
				printf("Error\n");
				return (1);
			}
			n++;
		}
		result += atoi(argv[m]);
	}
	printf("%d\n", result);

	return (0);
}
