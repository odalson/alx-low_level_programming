#include "main.h"

/**
 * append_text_to_file - Appends the text at the end of a file.
 * @filename: A pointer that points to the name of the file.
 * @text_content: The string to join to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, m, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	m = write(o, text_content, length);

	if (o == -1 || m == -1)
		return (-1);

	close(o);

	return (1);
}

