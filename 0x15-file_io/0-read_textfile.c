#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file and print it to STDOUT.
 * @filename: text file that is being read
 * @letters: no of alphabets to be read
 * Return: n- actual no of bytes read and printed
 * 0 when function failed or filename NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t sz;
	ssize_t n;
	ssize_t m;

	sz = open(filename, O_RDONLY);
	if (sz == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	m = read(sz, buffer, letters);
	n = write(STDOUT_FILENO, buffer, m);

	free(buffer);
	close(sz);
	return (n);
}

