#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print the opcodes of this program
 *
 * @a: address of the main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void print_opcodes(char *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		printf("%.2hhx", a[num]);
		if (num < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - prints the opcodes of main function
 *
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: O
 */
int main(int argc, char **argv)
{
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, num);
	return (0);
}
