#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 * followed by new line
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
int count = 1;
char alpha;

while (count <= 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
count++;
}
}
