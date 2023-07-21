#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Print strings, followed by a new line
 * @seperator: the string to be passed between strings
 * @n: the number of strings pased to the function
 * @...: a variable name of strings to be printed
 *
 * Description: if seperator is NULL, it is not printed.
 * if one of the strings if NULL, (nil) is printed instead
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);
	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(strings);
}
