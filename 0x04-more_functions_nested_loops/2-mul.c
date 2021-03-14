#include "holberton.h"

/**
 * mul - computes multiplication of two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result
 */
int mul(int a, int b)
{
	int result;

	if (a < 0)
	{
		result = -a * b;
		result = -result;
	}
	else if (b < 0)
	{
		result = a * -b;
		result = -result;
	}
	else
	{
		result = a * b;
	}
	return (result);
}
