#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
	printf("%d,", a[i]);
	}
	if (i == (n - 1))
	{
	printf("%d ", a[n - 1]);
	}
	printf("\n");
}
