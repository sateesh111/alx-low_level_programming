#include "holberton.h"

/**
 * _strncat - concatenates two string
 *
 * @dest: first string
 * @src: second string
 * @n: most n bytes from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int len2 = 0;

	for (; *(dest + len) != '\0'; len++)
	{
	}

	while (len2 < n)
	{
		*(dest + len) = *(src + len2);
		len++;
		len2++;
		if (*(src + len2) == '\0')
		{
			break;
		}
	}

	if (n < len2)
	{
		*(dest + len) = '\0';
	}
	return (dest);
}
