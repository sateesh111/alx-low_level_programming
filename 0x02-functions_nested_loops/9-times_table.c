#include <stdio.h>
#include "holberton.h"

/**
 * times_table - prints 9 times table
 *
 * Return: Void
 */
void times_table(void)
{
	int num1, num2, result;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			result = num1 * num2;
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				if (num2 == 0)
				{
					_putchar(result + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(result + '0');
				}
			}
			if (num2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
