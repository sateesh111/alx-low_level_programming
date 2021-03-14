#include <stdio.h>

/**
 * main - prints the number of argument passed
 *
 * @argc: number of command line argument
 * @argv: array of command line argument
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	if (argc >= 1)
		printf("%d\n", argc - 1);
	return (0);
}
