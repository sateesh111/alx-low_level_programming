#include "holberton.h"

/**
 * print_number - prints integer
 *
 * @n: integer to print
 *
 * Return: voif
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
		num = n;
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar('0' + num % 10);
}
