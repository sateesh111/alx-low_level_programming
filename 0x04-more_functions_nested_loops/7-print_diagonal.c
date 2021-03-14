#include "holberton.h"

/**
 * print_diagonal - print \ n times followed by a newline
 *
 * @n: number of times \ will be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int count_1 = 0, count_2;

	if (n <= 0)
	{
		_putchar('\n');
	}
	while (count_1 < n)
	{
		count_2 = 0;
		while (count_2 < count_1)
		{
			_putchar(' ');
			count_2++;
		}
		_putchar(92);
		_putchar('\n');
		count_1++;
	}
}
