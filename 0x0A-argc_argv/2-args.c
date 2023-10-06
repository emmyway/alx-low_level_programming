#include "main.h"

/**
 * main - program prints all arguments received includung its name
 * @argc: command line argument count
 * @argv: arrray of comman line arguments
 * Return: 0 on success
 */

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
