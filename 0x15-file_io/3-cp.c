#include "holberton.h"

/**
 * main - function that copies file
 *
 * @argc: number of argument passed
 * @argv: argument passed
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, len, len2;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((len = read(file_from, buffer, 1024)) > 0)
	{
		len2 =  write(file_to, buffer, len);
		if (len != len2)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (len < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(file_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_to), exit(100);
	if (close(file_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", file_from), exit(100);
	return (0);
}
