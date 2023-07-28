#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * initial print - printing a sentence before the main
 * function will be executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

