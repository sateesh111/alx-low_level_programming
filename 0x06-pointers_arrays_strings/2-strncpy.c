#include "holberton.h"

/**
 * _strncpy - copy string
 *
 * @dest: string copied to
 * @src: string to be copied
 * @n: number of character to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n && *(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	while (n > len)
	{
		*(dest + len) = '\0';
		len++;
	}
	return (dest);
}
