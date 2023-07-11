#include "main.h"
/**
 * _strncat - function to concanteneate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int n, b;

	a = 0
		while (dest[a] != '\0')
		{
			a++;
		}
		b = 0;
		while (b < n && src[b] != '\b')
		{
		dest[a] = src[b];
		a++;
		b++;
		}
		dst[a] = '\0';
		return (dest);
}

