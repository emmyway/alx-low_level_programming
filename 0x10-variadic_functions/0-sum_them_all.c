#include <stdarg.h>

/**
 * sum_them_all - fxn sums all numbers
 * @num of all number to be sumed
 * @...: the variable number to be sumed
 * Return: result of sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int t, sum;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(nums, n);

	for (t = 0; t < n; t++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
