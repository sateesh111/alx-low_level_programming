#include <stdio.h>

/**
 * main - print sum of fibonacci even numbers less than
 * 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long int count;
	long int sum = 0;
	long int tmp_1 = 0;
	long int tmp_2 = 1;
	long int num = 1;

	for (count = 0; count <= 32; count++)
	{
		num = tmp_1 + tmp_2;
		tmp_1 = tmp_2;
		tmp_2 = num;
		if (num % 2 == 0)
		{
			sum += num;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
