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

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			if (num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				if ((num1 != '8') || (num2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
		num2 = num1;
	}
	putchar('\n');
	return (0);
}
