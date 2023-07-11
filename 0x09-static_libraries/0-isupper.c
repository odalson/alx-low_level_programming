#include "main.h"
/**
 * is upper - checks if tuppercase letters
 * @c: char to cjeck
 *
 * Return: if upprcase return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
