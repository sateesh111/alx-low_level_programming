#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers starting 1 and 2
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	long int count;
	long int tmp_1 = 0;
	long int tmp_2 = 1;
	long int num = 1;

	for (count = 0; count <= 50; count++)
	{
		if (count > 0)
		{
			printf("%ld", num);
		}
		if (count < 50 && count > 0)
		{
			printf(", ");
		}
		num = tmp_1 + tmp_2;
		tmp_1 = tmp_2;
		tmp_2 = num;
	}
	printf("\n");
	return (0);
}
