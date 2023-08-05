#include "main.h"

/**
 * main - entry of prog
 * @argc: count number of argument passed to main
 * @argv: array of all argument passed to main including name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);

	/**
	 * this is how the program is supposed to be:
	 *
	 * (void)argc
	 * printf("%s\n", argv[0]);
	 * return (0);
	 */
}
