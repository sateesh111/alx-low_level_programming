#include "variadic_functions.h"

/**
 * print_all - prints all arguments passed
 *
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arguments;
	char *tempstring;
	int num = 0;

	va_start(arguments, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[num] != '\0')
	{
		switch (format[num])
		{
		case 'c':
			printf("%c", (char) va_arg(arguments, int));
			break;
		case 'i':
			printf("%d", va_arg(arguments, int));
			break;
		case 'f':
			printf("%f", (float) va_arg(arguments, double));
			break;
		case 's':
			tempstring = va_arg(arguments, char*);
			if (tempstring != NULL)
			{
				printf("%s", tempstring);
				break;
			}
			printf("(nil)");
			break;
		}
		if ((format[num] == 'c' || format[num] == 'i' || format[num] ==
		     'f' || format[num] == 's') && format[(num + 1)] != '\0')
			printf(", ");
		num++;
	}
	printf("\n");
}
