#include "holberton.h"

/**
 * create_file - creates a file or truncate if it exist
 *
 * @filename: file name
 * @text_content: pointer to text
 *
 * Return: 1 on success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (; text_content[len] != '\0'; len++)
			;
	}
	if (len == 0)
		write(file, "", len);
	else
		write(file, text_content, len);
	close(file);
	return (1);
}
