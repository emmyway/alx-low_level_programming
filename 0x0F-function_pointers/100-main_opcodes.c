#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcode of its own function
 * @argc: argument count including name
 * @argv: array of all argument including name
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int munch, t;
	char *ar;

	if(argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	munch = atoi(argv[1]);

	if (munch < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char*)main;

	t = 0;
	while (t < munch)
	{
		if (t == munch - 1)
		{
			printf("%02hhx\n", ar[t]);
			break;
		}
		printf("%02hhx\n", ar[t]);
		t++;
	}
	return (0);
}
