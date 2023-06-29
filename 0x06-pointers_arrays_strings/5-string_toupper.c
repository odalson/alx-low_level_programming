#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase to uppercase
 * @n: pointer
 * Return: n
 */

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
