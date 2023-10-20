#include "lists.h"

void first(void) __attribute__((constructor));

/**
 * first - prints a message before the main fxn is executed
 */

void first(void) __attribute__((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
