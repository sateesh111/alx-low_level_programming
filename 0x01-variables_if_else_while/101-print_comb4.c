#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = '0';
	int num2 = '1';
	int num3 = '2';

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				if (num2 != num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != '7' || num2 != '8' || num3 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
			num3 = num2;
		}
		num1++;
		num2 = num1;
	}
	putchar('\n');
	return (0);
}
