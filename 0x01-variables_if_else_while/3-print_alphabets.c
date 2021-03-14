#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letters = 'a';

	while (letters <= 'z')
{
	putchar(letters);
	letters++;
}
	letters = 'A';

	while (letters <= 'Z')
{
	putchar(letters);
	letters++;
}
	putchar('\n');
	return (0);
}
