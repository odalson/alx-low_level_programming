#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int mini, int maxi)
{
	int *ptr;
	int j, size;

	if (mini > maxi)
		return (NULL);

	size = maxi - mini + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0; mini <= maxi; j++)
		ptr[j] = mini++;

	return (ptr);
}

