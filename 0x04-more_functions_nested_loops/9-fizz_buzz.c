#include "main.h"
#include <stdio.h>

/**
 * main - entry of program
 * description: prints number 1-100; prints fizz, Buzz and
 * fizzBuzz for multiples of 3, 5 and 3&5 respectively
 * Return: 0 on success
 */

int main(void)
{
	int n;

	for (n = 1; n >= 1 && n <= 100; n++)
	{
		if ((n % 3 == 0) && !(n % 5 == 0))
			printf("Fizz ");
		else if ((n % 5 == 0)&& !(n % 3 == 0))
			printf("Buzz ");
		else if ((n % 3 == 0) && (n % 5 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", n);
	}
		printf("\n");

		return (0);
}
