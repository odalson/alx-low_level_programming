#include "main.h"
/**
 * _stpbrk - program entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*a)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*a == accept[b])
			return (s);
		}
	a++;
	}

	return ('\0');
}
