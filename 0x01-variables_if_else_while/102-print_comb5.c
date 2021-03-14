#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = '0';
	int num2 = '0';
	int num3 = '0';
	int num4 = '1';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					putchar(num1);
					putchar(num2);
					putchar(' ');
					putchar(num3);
					putchar(num4);
					putchar(',');
					putchar(' ');
					num4++;
				}
				num3++;
				num4 = '0';
			}
			num2 = '0';
			num3 = '0';
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
