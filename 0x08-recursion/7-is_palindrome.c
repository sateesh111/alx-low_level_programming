#include "holberton.h"

/**
 * length - colmpute length of string
 *
 * @s: string to count
 *
 * Return: length
 */
int length(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (length(s) + 1);
}

/**
 * check_palindrome - check whether a string is palindrome
 *
 * @s: string to check
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int len)
{
	if (*(s + 1) == '\0')
		return (1);
	if (*s != *(s + len))
		return (0);
	return (check_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - links all three functions
 *
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = length(s) - 1;
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, len));
}
