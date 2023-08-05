#include <stdio.h>

/**
 * main - entry of prog
 * Return: 0 on success
 */

int main(int argc, char* argv[])
{
	
	(void)argv; /* explicitly casting argv to null */
	printf("%d\n", argc - 1);

	return (0);
}
