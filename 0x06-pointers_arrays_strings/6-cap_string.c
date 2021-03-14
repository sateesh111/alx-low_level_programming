#include "holberton.h"

/**
 * cap_string - capitalize after separator
 *
 * @str: string to capitalize
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int len = 0;
	int len2 = 0;
	char sep[14] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')'
			, '{', '}', '\0'};

	while (*(str + len) != '\0')
	{
		while (*(sep + len2) != '\0')
		{
			if (*(str + len) == *(sep + len2) && (*(str + len + 1)
>= 'a' && *(str + len + 1) <= 'z'))
			{
				*(str + len + 1) = *(str + len + 1) - 32;
			}
			len2++;
		}
		len2 = 0;
		len++;
	}
	if (*(str + 0) >= 'a' && *(str + 0) <= 'z')
	{
		*(str + 0) = *(str + 0) - 32;
	}
	return (str);
}
