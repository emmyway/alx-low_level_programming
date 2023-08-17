#include "function_pointers.h"
/**
 * print_name - prints a given name
 * @name: pointerto name string
 * @f(): funtion to pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
