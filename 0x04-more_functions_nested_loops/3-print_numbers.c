#include "holberton.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar('0' + num);
		num++;
	}
	_putchar('\n');
}
