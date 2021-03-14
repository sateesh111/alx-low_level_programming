#include <stdio.h>

/**
 * main - print first 98 fibonacci numbers starting 1 and 2
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	double count;
	double tmp_1 = 0;
	double tmp_2 = 1;
	double num = 1;

	for (count = 0; count <= 98; count++)
	{
		if (count > 0)
		{
			printf("%.0f", num);
		}
		if (count < 98 && count > 0)
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
