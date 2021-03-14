#include "holberton.h"

/**
 * print_most_numbers - print numbers 0 through 9 except for 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar('0' + num);
		}
		else
		{
			num++;
			continue;
		}
		num++;
	}
	_putchar('\n');
}
