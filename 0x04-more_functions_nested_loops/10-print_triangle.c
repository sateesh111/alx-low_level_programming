#include "holberton.h"

/**
 * print_triangle - print triangle using #
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int count_1 = 0, count_2, count_3;

	if (size <= 0)
	{
		_putchar('\n');
	}
	while (count_1 < size)
	{
		count_2 = size;
		while (count_2 - 1 > count_1)
		{
			_putchar(' ');
			count_2--;
		}
		count_3 = 0;
		while (count_3 < count_2)
		{
			_putchar(35);
			count_3++;
		}
		_putchar('\n');
		count_1++;
	}
}
