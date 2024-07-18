#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
	char *str = "a string to tokenizr";
	char *trunk;
	char *arr[20];
	char *delim = " ";
	int i = 0;

	trunk = strtok(str, delim);
	while (trunk != NULL)
	{
		arr[i] =trunk;
		printf("%s\n", trunk);
		trunk = strtok(NULL, delim);
		i++;
	}
	return (0);
}
