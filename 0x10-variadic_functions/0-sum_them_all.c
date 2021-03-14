#include "variadic_functions.h"

/**
 * sum_them_all - sum parameter
 *
 * @n: number arguments
 * Return: total addition
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int num = 0;

	va_list mylist;

	va_start(mylist, n);

	if (n == 0)
		return (0);

	for (num = 0; num < n; num++)
	{
		sum += va_arg(mylist, int);
	}

	va_end(mylist);

	return (sum);
}
