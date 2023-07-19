#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the num to be computed
 * Return: .st digit of num
 */

int print_last_digit(int n)
{

	if (n < 0)
		n = -n;

	return (n % 10);
}
