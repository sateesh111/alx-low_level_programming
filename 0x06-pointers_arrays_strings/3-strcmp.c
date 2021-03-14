#include "holberton.h"

/**
 * _strcmp - compares two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: result, if s1>s2 positive, if s1<s2 negative and 0 if s1=s2
 */
int _strcmp(char *s1, char *s2)
{
	int len = 0;
	int result = 0;

	while (*(s1 + len) != '\0' && *(s2 + len) != '\0')
	{
		result = *(s1 + len) - *(s2 + len);
		if (result == 0)
		{
			len++;
		}
		else
			break;
	}
	return (result);
}
