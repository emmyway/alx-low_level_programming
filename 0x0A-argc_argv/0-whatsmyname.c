#include "main.h"

/**
 * main - program prints its name
 * @argc: command line argument count
 * @argv: arrray of comman line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i]; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
