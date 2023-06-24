#include "main.h"

/**
 * print_square - Print a square according to n numbers of times
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)
{
	int y, z;
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
