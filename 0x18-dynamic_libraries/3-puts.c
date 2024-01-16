#include "main.h"
/**
 * _puts - program to prit a sting in standard output
 * @str: string to b eprinted
 * _putchar prints a new line
 */
void _put(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

