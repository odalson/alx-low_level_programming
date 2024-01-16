#include "main.h"
/**
 * _memset - Fills block of memory with specific values
 * @s: starting address of memory to be filled
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for a byte
 */
char *_memset(char *s, char b, unsigned int n)
{
        int d = 0;

        for (; n > 0; d++)
        {
                s[d] = b;
                n--;
        }
        return (s);
}
