#include "holberton.h"

/**
 * string_toupper - change lowercase to uppercase
 *
 * @str: string to change
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (*(str + len) != 0)
	{
		if (*(str + len) >= 'a' && *(str + len) <= 'z')
		{
			*(str + len) = *(str + len) - 32;
		}
		len++;
	}
	return (str);
}
