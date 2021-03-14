#include "holberton.h"

/**
 * print_times_table - prints n times table
 *
 * @n: time table dimension
 *
 * Return: Void
 */
void print_times_table(int n)
{
	int num1, num2, result;

	if (n > 0 && n < 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			for (num2 = 0; num2 <= n; num2++)
			{
				result = num1 * num2;
				if (num2 != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (num2 == 0)
				{
					_putchar(result + '0');
				}
				else if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result < 100 && result >= 10)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
			}
			_putchar('\n');
		}
	}
}
