#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpnum = '0';

	while (alpnum <= '9')
{
	putchar(alpnum);
	alpnum++;
}
	alpnum = 'a';
	while (alpnum <= 'f')
{
	putchar(alpnum);
	alpnum++;
}
	putchar('\n');
	return (0);
}
