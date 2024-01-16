#include"main.h"
/**
 * _strlen - program returns length of string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int lon = 0;

	while (*s != '\0')
	{
		lon++;
		s++;
	}
	return (lon);
}
