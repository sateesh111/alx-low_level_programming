#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints diagonal sum
 *
 * @a: 2D array
 * @size: size
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int len = 0;
	int sum = 0;

	while (len < size)
	{
		sum = sum + a[(size + 1) * len];
		len++;
	}
	printf("%d, ", sum);
	sum = 0;
	len = 0;
	while (len < size)
	{
		sum = sum + a[(size - 1) * (len + 1)];
		len++;
	}
	printf("%d\n", sum);
}
