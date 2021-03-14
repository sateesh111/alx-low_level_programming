#include <stdio.h>

/**
 * main - prints all argument passed
 *
 * @argc: number of command line argument
 * @argv: array of command line argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc >= 1)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}
	return (0);
}
