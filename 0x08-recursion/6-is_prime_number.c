#include "holberton.h"

/**
 * prime - figures out id n is prime or not
 *
 * @x: checker
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int prime(int x, int n)
{
	if (x == n)
		return (1);
	if (n < 2 || n % x == 0)
		return (0);
	return (prime(x + 1, n));
}

/**
 * is_prime_number - calls prime function
 *
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
