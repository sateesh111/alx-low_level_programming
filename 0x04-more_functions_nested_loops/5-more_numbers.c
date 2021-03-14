#include "holberton.h"

/**
 * more_numbers - print numbers 0 through 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int count = 1;
	int num, half_1, half_2;

	while (count <= 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				half_1 = num / 10;
				half_2 = num % 10;
			}
			else
			{
				half_1 = num;
			}
			if (num >= 0)
			{
				_putchar('0' + half_1);
			}
			if (num > 9)
			{
				_putchar('0' + half_2);
			}
			num++;
		}
		count++;
		_putchar('\n');
	}
}
