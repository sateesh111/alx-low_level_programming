#include "variadic_functions.h"

/**
 * print_strings - print string
 *
 * @separator: string
 * @n: number arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	char *string;

	va_list list;

	va_start(list, n);

	for (num = 0; num < n; num++)
	{
		string = va_arg(list, char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (num == (n - 1))
		{
			break;
		}
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}
