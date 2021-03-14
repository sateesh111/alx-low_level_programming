#include "holberton.h"

/**
 * set_string - sets value of a pointer to char
 *
 * @s: pointer to pointer
 * @to: pointer to char
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
