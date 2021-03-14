#include "holberton.h"

/**
 * print_square - print square using #
 *
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int count_1 = 1, count_2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (count_1 <= size)
	{
		count_2 = 1;
		while (count_2 <= size)
		{
			_putchar(35);
			count_2++;
		}
		_putchar('\n');
		count_1++;
	}
}
