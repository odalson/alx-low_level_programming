#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, ln1 = 0, ln2 = 0;

	while (s1 && s1[ln1])
		ln1++;
	while (s2 && s2[ln2])
		ln2++;

	if (n < ln2)
		s = malloc(sizeof(char) * (ln1 + n + 1));
	else
		s = malloc(sizeof(char) * (ln1 + ln2 + 1));

	if (!s)
		return (NULL);

	while (i < ln1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < ln2 && i < (ln1 + n))
		s[i++] = s2[j++];

	while (n >= ln2 && i < (ln1 + ln2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}

