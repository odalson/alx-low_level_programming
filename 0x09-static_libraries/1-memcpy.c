#include "main.h"
/**
 * _memcpy - a function to copy memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 *
 * Return: copied wit a byte changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p <i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
