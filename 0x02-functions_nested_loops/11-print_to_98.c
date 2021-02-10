#include "holberton.h"

/**
 * print_to_98 - prints upto 98
 *
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
  while (n < 98)
    {
      printf{"%d, ", n);
      n++;
    }
  while (n > 98)
    {
      printf("%d, ", n);
      n--;
    }
  if (n == 98)
    {
      printf("%d\n", n);
    }
}
