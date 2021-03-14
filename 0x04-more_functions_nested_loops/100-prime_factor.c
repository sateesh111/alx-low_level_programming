#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int prime = 612852475143;
	long int factor = 2;

	while (prime != 1)
	{
		if (prime % factor == 0)
		{
			prime = prime / factor;
		}
		if (prime == 1)
		{
			printf("%ld\n", factor);
		}
		factor++;
	}
	return (0);
}
