#include "holberton.h"

/**
 * print_line - prints _ n times followed by a new line
 *
 * @n: number of _ to be printed
 *
 * Return: void
 */
void print_line(int n)
{
	int count = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count <= n)
		{
			_putchar('_');
			count++;
		}
		_putchar('\n');
	}
}
