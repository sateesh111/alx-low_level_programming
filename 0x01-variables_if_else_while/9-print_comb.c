#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
{
	putchar(num);
	if (num != '9')
{
	putchar(',');
	putchar(' ');
}
	else
{
	putchar('\n');
}
	num++;
}
	return (0);
}
