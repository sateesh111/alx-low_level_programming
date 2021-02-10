#include "holberton.h"

/**
 * print_last_digit - compute and print last digit
 *
 * @num: number to be computed
 *
 * Return: last digit of num
 */
int print_last_digit(int num)
{
num %= 10;

if (num < 0)
{
_putchar('0' + -num);
return (-num);
}
else
{
_putchar('0' + num);
return (num);
}
}
