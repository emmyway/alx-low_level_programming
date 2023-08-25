#include <stdio.h>

void firat(void)__attribute__((constructor));

/**
 * first - before execution, the main function prints a sentence.
 */

void first(void)
{
	printf("Your're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
